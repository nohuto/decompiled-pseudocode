/*
 * XREFs of sub_1400778E0 @ 0x1400778E0
 * Callers:
 *     sub_140076FB8 @ 0x140076FB8 (sub_140076FB8.c)
 * Callees:
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_14001AF20 @ 0x14001AF20 (sub_14001AF20.c)
 *     sub_14007E43C @ 0x14007E43C (sub_14007E43C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400778E0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
  _QWORD *v9; // rbx

  v9 = (_QWORD *)(a1 + 8);
  sub_14001AF20(a1 + 8);
  *(_QWORD *)(a1 + 56) = 1LL;
  *(_QWORD *)a1 = off_1400BDCD0;
  *v9 = off_1400BDCB0;
  *(_QWORD *)(a1 + 16) = off_1400BDC68;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400BE238;
  *v9 = off_1400BE218;
  *(_QWORD *)(a1 + 16) = off_1400BE1D0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  sub_14007E43C((HSTRING *)(a1 + 80));
  *(_DWORD *)(a1 + 72) = a3;
  sub_14007E43C((HSTRING *)(a1 + 88));
  *(_DWORD *)(a1 + 64) = a5;
  *(_DWORD *)(a1 + 68) = a6;
  sub_14001821C((__int64 *)(a1 + 96), a7);
  return a1;
}
