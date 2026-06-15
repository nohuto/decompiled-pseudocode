/*
 * XREFs of sub_140087294 @ 0x140087294
 * Callers:
 *     sub_140086C90 @ 0x140086C90 (sub_140086C90.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_140087294(_QWORD *a1)
{
  a1[4] = 1LL;
  *a1 = &off_1400BE560;
  a1[1] = off_1400BE6B8;
  a1[2] = off_1400BE698;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *a1 = &off_1400BE6E0;
  a1[1] = off_1400BE7F8;
  a1[2] = off_1400BE698;
  a1[5] = 0LL;
  a1[6] = 0LL;
  return a1;
}
