/*
 * XREFs of sub_140087090 @ 0x140087090
 * Callers:
 *     sub_140086D20 @ 0x140086D20 (sub_140086D20.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140087090(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400BE718;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400BE748;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return a1;
}
