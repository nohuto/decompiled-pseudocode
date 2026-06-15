/*
 * XREFs of sub_14003DF40 @ 0x14003DF40
 * Callers:
 *     sub_14003D900 @ 0x14003D900 (sub_14003D900.c)
 * Callees:
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14003DF40(int a1, __int64 a2, int a3)
{
  _QWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+80h] [rbp+18h] BYREF

  v5 = a3;
  v4[3] = 4LL;
  v4[2] = &v5;
  return sub_140014E60(a1, (unsigned int)"\r", a3, 2, (__int64)v4);
}
