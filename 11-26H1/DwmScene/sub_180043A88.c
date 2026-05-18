/*
 * XREFs of sub_180043A88 @ 0x180043A88
 * Callers:
 *     sub_180043E08 @ 0x180043E08 (sub_180043E08.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_1800451CC @ 0x1800451CC (sub_1800451CC.c)
 *     sub_180045760 @ 0x180045760 (sub_180045760.c)
 *     sub_18004EF74 @ 0x18004EF74 (sub_18004EF74.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_180079644 @ 0x180079644 (sub_180079644.c)
 *     sub_180092160 @ 0x180092160 (sub_180092160.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 */

__int64 __fastcall sub_180043A88(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rdx

  sub_18001D260(a1, a2);
  *(_DWORD *)(v3 + 32) = v4;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  sub_1800129D0(v5);
  return a1;
}
