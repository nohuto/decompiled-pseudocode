/*
 * XREFs of sub_180043898 @ 0x180043898
 * Callers:
 *     sub_180014760 @ 0x180014760 (sub_180014760.c)
 *     sub_1800929B0 @ 0x1800929B0 (sub_1800929B0.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18007EFAC @ 0x18007EFAC (sub_18007EFAC.c)
 */

__int64 __fastcall sub_180043898(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_180012C40(v7, a3);
  return sub_18007EFAC(v4, v5, v3);
}
