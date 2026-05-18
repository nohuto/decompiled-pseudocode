/*
 * XREFs of sub_18002A070 @ 0x18002A070
 * Callers:
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_18002A030 @ 0x18002A030 (sub_18002A030.c)
 * Callees:
 *     sub_180029BAC @ 0x180029BAC (sub_180029BAC.c)
 *     sub_180029D50 @ 0x180029D50 (sub_180029D50.c)
 */

bool __fastcall sub_18002A070(__int64 a1, char a2)
{
  __int64 *v2; // rbx
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = sub_180029BAC(a1, &v4, a2);
  return *v2 != sub_180029D50()[1];
}
