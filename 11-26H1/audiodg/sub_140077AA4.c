/*
 * XREFs of sub_140077AA4 @ 0x140077AA4
 * Callers:
 *     sub_140077108 @ 0x140077108 (sub_140077108.c)
 * Callees:
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_14001AF20 @ 0x14001AF20 (sub_14001AF20.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140077AA4(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v6; // rdi

  v6 = (_QWORD *)(a1 + 8);
  sub_14001AF20(a1 + 8);
  *(_QWORD *)(a1 + 56) = 1LL;
  *(_QWORD *)a1 = off_1400BDF38;
  *v6 = off_1400BDD80;
  *(_QWORD *)(a1 + 16) = off_1400BDD38;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400BE3D0;
  *v6 = off_1400BE3B0;
  *(_QWORD *)(a1 + 16) = off_1400BE368;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 64) = a2;
  sub_14001821C((__int64 *)(a1 + 72), a3);
  return a1;
}
