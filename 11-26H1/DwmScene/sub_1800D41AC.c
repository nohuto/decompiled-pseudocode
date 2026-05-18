/*
 * XREFs of sub_1800D41AC @ 0x1800D41AC
 * Callers:
 *     sub_1800D25EC @ 0x1800D25EC (sub_1800D25EC.c)
 *     sub_1800D2620 @ 0x1800D2620 (sub_1800D2620.c)
 *     sub_1800D2E40 @ 0x1800D2E40 (sub_1800D2E40.c)
 * Callees:
 *     sub_18001F378 @ 0x18001F378 (sub_18001F378.c)
 *     sub_180041860 @ 0x180041860 (sub_180041860.c)
 *     sub_1800D27A4 @ 0x1800D27A4 (sub_1800D27A4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D41AC(__int64 a1)
{
  *(_DWORD *)a1 = 5;
  sub_18001F378(a1 + 8);
  *(_DWORD *)(a1 + 64) = 0;
  sub_1800D27A4((_QWORD *)(a1 + 72));
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 7LL;
  *(_QWORD *)(a1 + 120) = 8LL;
  *(_DWORD *)(a1 + 64) = 1065353216;
  sub_180041860(a1 + 88, 0x10uLL, *(_QWORD *)(a1 + 72));
  return a1;
}
