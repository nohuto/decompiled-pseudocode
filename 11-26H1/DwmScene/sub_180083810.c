/*
 * XREFs of sub_180083810 @ 0x180083810
 * Callers:
 *     sub_18004BC1C @ 0x18004BC1C (sub_18004BC1C.c)
 *     sub_18004BC48 @ 0x18004BC48 (sub_18004BC48.c)
 *     sub_18004BC74 @ 0x18004BC74 (sub_18004BC74.c)
 *     sub_18004BCA0 @ 0x18004BCA0 (sub_18004BCA0.c)
 *     sub_18004BDAC @ 0x18004BDAC (sub_18004BDAC.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180028DF4 @ 0x180028DF4 (sub_180028DF4.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180083810(__int64 a1, int a2)
{
  __int64 v4; // rax

  sub_180028DF4((_QWORD *)a1, 2, 8);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Shader::`vftable';
  *(_DWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v4 = sub_180011790(0x38uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)(a1 + 136) = v4;
  *(_BYTE *)(a1 + 152) = 0;
  sub_180029310(a1, 2, 0);
  return a1;
}
