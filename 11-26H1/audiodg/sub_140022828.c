/*
 * XREFs of sub_140022828 @ 0x140022828
 * Callers:
 *     sub_140022660 @ 0x140022660 (sub_140022660.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140022828(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  _QWORD v8[10]; // [rsp+30h] [rbp-68h] BYREF

  v8[8] = a7;
  v8[6] = a6;
  v8[4] = a5;
  v8[9] = 8LL;
  v8[7] = 8LL;
  v8[5] = 4LL;
  return sub_1400239C4(a1, a2, a3, 0, 5, (__int64)v8);
}
