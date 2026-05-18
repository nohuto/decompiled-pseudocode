/*
 * XREFs of sub_18004ED7C @ 0x18004ED7C
 * Callers:
 *     sub_180057C70 @ 0x180057C70 (sub_180057C70.c)
 *     sub_18005A4A4 @ 0x18005A4A4 (sub_18005A4A4.c)
 *     sub_1800645C0 @ 0x1800645C0 (sub_1800645C0.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 *     sub_18006A350 @ 0x18006A350 (sub_18006A350.c)
 *     sub_1800872F0 @ 0x1800872F0 (sub_1800872F0.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18007EDAC @ 0x18007EDAC (sub_18007EDAC.c)
 */

__int64 __fastcall sub_18004ED7C(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_180012C40(v7, a3);
  return sub_18007EDAC(v4, v5, v3);
}
