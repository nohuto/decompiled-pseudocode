/*
 * XREFs of sub_180051FD0 @ 0x180051FD0
 * Callers:
 *     sub_180017A00 @ 0x180017A00 (sub_180017A00.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180028DF4 @ 0x180028DF4 (sub_180028DF4.c)
 *     sub_180051F28 @ 0x180051F28 (sub_180051F28.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180051FD0(_QWORD *a1)
{
  __int64 v2; // rax

  sub_180028DF4(a1, 4, 11);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::Sampler::`vftable';
  sub_180051F28(a1 + 14);
  a1[16] = 0LL;
  a1[17] = 0LL;
  v2 = sub_180011790(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  a1[16] = v2;
  return a1;
}
