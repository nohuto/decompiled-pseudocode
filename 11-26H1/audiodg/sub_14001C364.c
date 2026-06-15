/*
 * XREFs of sub_14001C364 @ 0x14001C364
 * Callers:
 *     sub_14001BB08 @ 0x14001BB08 (sub_14001BB08.c)
 * Callees:
 *     sub_14001C3C8 @ 0x14001C3C8 (sub_14001C3C8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_14001C364(_QWORD *a1)
{
  sub_14001C3C8();
  *a1 = off_1400B8E48;
  a1[1] = off_1400B8F18;
  a1[2] = off_1400B8EE0;
  a1[3] = off_1400B8E28;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  return a1;
}
