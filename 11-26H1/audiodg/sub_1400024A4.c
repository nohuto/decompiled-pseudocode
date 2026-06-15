/*
 * XREFs of sub_1400024A4 @ 0x1400024A4
 * Callers:
 *     sub_140074720 @ 0x140074720 (sub_140074720.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400024A4(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6, __int64 a7)
{
  __int64 v7; // r8
  _QWORD v9[10]; // [rsp+30h] [rbp-68h] BYREF

  v9[8] = a7;
  v9[9] = 2LL;
  v9[7] = 16LL;
  v9[5] = 4LL;
  v7 = *a6;
  v9[4] = a5;
  v9[6] = v7;
  return sub_1400239C4(a1, a2, 0, 0, 5, (__int64)v9);
}
