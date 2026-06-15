/*
 * XREFs of sub_140055E5C @ 0x140055E5C
 * Callers:
 *     sub_140056830 @ 0x140056830 (sub_140056830.c)
 * Callees:
 *     sub_140055EB8 @ 0x140055EB8 (sub_140055EB8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140055E5C(_QWORD *a1)
{
  sub_140055EB8();
  *a1 = off_1400BBBD0;
  a1[1] = off_1400BBC80;
  a1[2] = off_1400BBC60;
  a1[3] = off_1400BBBB0;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
