/*
 * XREFs of sub_180052E0C @ 0x180052E0C
 * Callers:
 *     sub_180017A0C @ 0x180017A0C (sub_180017A0C.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180028DF4 @ 0x180028DF4 (sub_180028DF4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180052E0C(__int64 a1)
{
  __int64 v2; // rax
  signed __int64 v3; // rax

  sub_180028DF4((_QWORD *)a1, 1, 11);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Texture::`vftable';
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  v2 = sub_180011790(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *(_QWORD *)(a1 + 112) = v2;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v3 = _InterlockedExchangeAdd64(&qword_1801C85A0, 1uLL);
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 152) = (v3 + 1) | 0xFFFFFFFF00000000uLL;
  return a1;
}
