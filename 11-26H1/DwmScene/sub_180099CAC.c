/*
 * XREFs of sub_180099CAC @ 0x180099CAC
 * Callers:
 *     sub_180097F08 @ 0x180097F08 (sub_180097F08.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18002B27C @ 0x18002B27C (sub_18002B27C.c)
 *     sub_180099290 @ 0x180099290 (sub_180099290.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180099CAC(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  sub_180099290(a1);
  sub_180099290(v4 + 176);
  sub_180099290(a1 + 352);
  sub_180099290(a1 + 528);
  sub_180099290(a1 + 704);
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  v5 = sub_180011790(0x1D0uLL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 880) = v5;
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = a2;
  sub_18002B27C(a1 + 928);
  *(_DWORD *)(a1 + 920) = 0;
  return a1;
}
