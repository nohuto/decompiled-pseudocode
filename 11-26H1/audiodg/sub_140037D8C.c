/*
 * XREFs of sub_140037D8C @ 0x140037D8C
 * Callers:
 *     sub_140037C94 @ 0x140037C94 (sub_140037C94.c)
 * Callees:
 *     sub_140037E04 @ 0x140037E04 (sub_140037E04.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140037D8C(_QWORD *a1)
{
  sub_140037E04();
  *a1 = &off_1400B9870;
  a1[1] = off_1400B9930;
  a1[2] = off_1400B9A50;
  a1[3] = off_1400B9958;
  a1[19] = off_1400B9C90;
  a1[20] = off_1400B9978;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
