#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	x = x + y;
	y = x - y;
	x = x - y;
	cout << endl << "................................" << endl << endl;
	cout << "Your first number is : " << x << endl;
	cout << "Your second number is : " << y << endl;
	cout << endl;
	system("pause");
	return 0;
}