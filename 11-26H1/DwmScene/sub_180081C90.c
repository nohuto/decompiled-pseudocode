/*
 * XREFs of sub_180081C90 @ 0x180081C90
 * Callers:
 *     sub_180046518 @ 0x180046518 (sub_180046518.c)
 *     sub_1800826C4 @ 0x1800826C4 (sub_1800826C4.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180028DF4 @ 0x180028DF4 (sub_180028DF4.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180081C90(_QWORD *a1, int a2, int a3)
{
  __int64 v4; // rax

  sub_180028DF4(a1, a2, a3);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  v4 = sub_180011790(0x38uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  a1[15] = v4;
  a1[17] = 0LL;
  a1[18] = 0LL;
  return a1;
}
