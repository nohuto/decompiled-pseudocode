/*
 * XREFs of sub_1800607F0 @ 0x1800607F0
 * Callers:
 *     sub_18006092C @ 0x18006092C (sub_18006092C.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18002ECC8 @ 0x18002ECC8 (sub_18002ECC8.c)
 *     sub_180041860 @ 0x180041860 (sub_180041860.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800607F0(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v3; // rax
  _QWORD *v4; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = sub_18002ECC8(1uLL);
  v4 = (_QWORD *)sub_180011790(v3);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_180041860(a1 + 24, 0x10uLL, *(_QWORD *)(a1 + 8));
  return a1;
}
