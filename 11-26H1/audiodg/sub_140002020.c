/*
 * XREFs of sub_140002020 @ 0x140002020
 * Callers:
 *     sub_14003D420 @ 0x14003D420 (sub_14003D420.c)
 *     TopLevelExceptionFilter @ 0x14006EC80 (TopLevelExceptionFilter.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140002020(int a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v6[6]; // [rsp+30h] [rbp-48h] BYREF

  v6[4] = a5;
  v6[5] = 4LL;
  return sub_1400239C4(a1, a2, 0, 0, 3, (__int64)v6);
}
