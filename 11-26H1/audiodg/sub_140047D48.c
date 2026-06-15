/*
 * XREFs of sub_140047D48 @ 0x140047D48
 * Callers:
 *     sub_140020C88 @ 0x140020C88 (sub_140020C88.c)
 * Callees:
 *     sub_140047DA0 @ 0x140047DA0 (sub_140047DA0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140047D48(_QWORD *a1)
{
  sub_140047DA0();
  *a1 = &off_1400BB0F0;
  a1[1] = off_1400BB128;
  a1[2] = off_1400B9608;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  return a1;
}
