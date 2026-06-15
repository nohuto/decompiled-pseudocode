/*
 * XREFs of sub_140077BE4 @ 0x140077BE4
 * Callers:
 *     sub_140077198 @ 0x140077198 (sub_140077198.c)
 * Callees:
 *     sub_140077388 @ 0x140077388 (sub_140077388.c)
 *     sub_14007753C @ 0x14007753C (sub_14007753C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_140077BE4(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi

  sub_14007753C();
  v3 = (_QWORD *)(v2 + 16);
  sub_140077388(v2 + 16);
  a1[21] = 1LL;
  *a1 = &off_1400BDDA0;
  a1[1] = off_1400BDC48;
  *v3 = off_1400BDB98;
  a1[12] = off_1400BDB50;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *a1 = &off_1400BE140;
  a1[1] = off_1400BE120;
  *v3 = off_1400BE070;
  a1[12] = off_1400BE028;
  a1[22] = 0LL;
  a1[23] = 0LL;
  a1[24] = 0LL;
  a1[25] = 0LL;
  return a1;
}
