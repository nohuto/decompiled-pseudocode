/*
 * XREFs of sub_140002114 @ 0x140002114
 * Callers:
 *     sub_14003D900 @ 0x14003D900 (sub_14003D900.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140002114(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[8]; // [rsp+30h] [rbp-58h] BYREF

  v7[6] = a6;
  v7[4] = a5;
  v7[7] = 4LL;
  v7[5] = 8LL;
  return sub_1400239C4(a1, a2, 0, 0, 4, (__int64)v7);
}
