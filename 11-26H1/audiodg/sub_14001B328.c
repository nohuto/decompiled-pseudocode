/*
 * XREFs of sub_14001B328 @ 0x14001B328
 * Callers:
 *     sub_14001B0E4 @ 0x14001B0E4 (sub_14001B0E4.c)
 * Callees:
 *     sub_14001AF20 @ 0x14001AF20 (sub_14001AF20.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_14001B328(_QWORD *a1)
{
  sub_14001AF20((__int64)(a1 + 1));
  a1[7] = 1LL;
  *a1 = off_1400B8C10;
  a1[1] = off_1400B8BA8;
  a1[2] = off_1400B8BC8;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  return a1;
}
