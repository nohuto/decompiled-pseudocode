/*
 * XREFs of sub_140044DA0 @ 0x140044DA0
 * Callers:
 *     sub_140044CA0 @ 0x140044CA0 (sub_140044CA0.c)
 * Callees:
 *     sub_140044E20 @ 0x140044E20 (sub_140044E20.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140044DA0(_QWORD *a1)
{
  sub_140044E20();
  *a1 = off_1400BAAC8;
  a1[1] = off_1400BAA60;
  a1[53] = off_1400BAB20;
  a1[54] = off_1400BA988;
  a1[61] = off_1400BAA98;
  a1[64] = off_1400BAA40;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
