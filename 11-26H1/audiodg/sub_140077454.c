/*
 * XREFs of sub_140077454 @ 0x140077454
 * Callers:
 *     sub_140076334 @ 0x140076334 (sub_140076334.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140077454(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &off_1400B8DE0;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400BAC20;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_1400BD770;
  return a1;
}
