/*
 * XREFs of sub_140002220 @ 0x140002220
 * Callers:
 *     sub_140005D50 @ 0x140005D50 (sub_140005D50.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140002220(int a1, int a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  _QWORD v7[8]; // [rsp+30h] [rbp-58h] BYREF

  v7[6] = a6;
  v7[7] = 4LL;
  v7[5] = 16LL;
  v7[4] = *a5;
  return sub_1400239C4(a1, a2, 0, 0, 4, (__int64)v7);
}
