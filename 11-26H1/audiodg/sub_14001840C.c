/*
 * XREFs of sub_14001840C @ 0x14001840C
 * Callers:
 *     sub_14001714C @ 0x14001714C (sub_14001714C.c)
 * Callees:
 *     sub_140017D8C @ 0x140017D8C (sub_140017D8C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14001840C(__int64 a1)
{
  sub_140017D8C(a1);
  *(_QWORD *)a1 = off_1400B8760;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400B8790;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}
