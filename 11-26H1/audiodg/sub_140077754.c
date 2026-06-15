/*
 * XREFs of sub_140077754 @ 0x140077754
 * Callers:
 *     sub_14007ADA0 @ 0x14007ADA0 (sub_14007ADA0.c)
 * Callees:
 *     sub_140075EC0 @ 0x140075EC0 (sub_140075EC0.c)
 *     sub_140077648 @ 0x140077648 (sub_140077648.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140077754(__int64 a1, __int64 a2)
{
  sub_140077648();
  *(_QWORD *)a1 = &off_1400BD718;
  *(_QWORD *)(a1 + 8) = off_1400BD6F8;
  *(_QWORD *)(a1 + 16) = off_1400BD838;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = &off_1400BD8C8;
  *(_QWORD *)(a1 + 8) = off_1400BD8A8;
  *(_QWORD *)(a1 + 16) = off_1400BD870;
  *(_QWORD *)(a1 + 40) = a2;
  if ( a2 )
    sub_1400B6010(a2);
  *(_DWORD *)(a1 + 48) = 0;
  sub_140075EC0((_DWORD *)(a1 + 52), a2);
  return a1;
}
