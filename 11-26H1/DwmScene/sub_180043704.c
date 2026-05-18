/*
 * XREFs of sub_180043704 @ 0x180043704
 * Callers:
 *     sub_180014760 @ 0x180014760 (sub_180014760.c)
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18007EDAC @ 0x18007EDAC (sub_18007EDAC.c)
 */

__int64 __fastcall sub_180043704(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_180012C40(v7, a3);
  return sub_18007EDAC(v4, v5, v3);
}
