/*
 * XREFs of sub_180042464 @ 0x180042464
 * Callers:
 *     sub_180042790 @ 0x180042790 (sub_180042790.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180028DF4 @ 0x180028DF4 (sub_180028DF4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180042464(_QWORD *a1)
{
  __int64 result; // rax

  sub_180028DF4(a1, 9, 4);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::RenderState::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  result = sub_180011790(0x38uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  a1[16] = result;
  return result;
}
