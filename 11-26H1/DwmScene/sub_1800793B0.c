/*
 * XREFs of sub_1800793B0 @ 0x1800793B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180043E08 @ 0x180043E08 (sub_180043E08.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_1800451CC @ 0x1800451CC (sub_1800451CC.c)
 *     sub_1800456D0 @ 0x1800456D0 (sub_1800456D0.c)
 */

__int64 __fastcall sub_1800793B0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 56);
  v4 = sub_180012C40(v9, (_QWORD *)(a1 + 56));
  sub_180043E08(a2, (__int64)v4);
  v5 = sub_180012C40(v9, v2);
  sub_180044C70(a2, (__int64)v5);
  v6 = sub_180012C40(v9, v2);
  sub_1800451CC(a2, (__int64)v6);
  v7 = sub_180012C40(v9, v2);
  return sub_1800456D0(a2, (__int64)v7);
}
