/*
 * XREFs of sub_140013D10 @ 0x140013D10
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_140015070 @ 0x140015070 (sub_140015070.c)
 *     sub_140041048 @ 0x140041048 (sub_140041048.c)
 * Callees:
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140013D10(int a1, int a2, __int64 a3)
{
  _QWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+80h] [rbp+18h] BYREF

  v5 = a3;
  v4[3] = 8LL;
  v4[2] = &v5;
  return sub_140014E60(a1, a2, a3, 2, (__int64)v4);
}
