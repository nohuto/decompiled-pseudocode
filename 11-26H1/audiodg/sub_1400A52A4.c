/*
 * XREFs of sub_1400A52A4 @ 0x1400A52A4
 * Callers:
 *     sub_1400A4F30 @ 0x1400A4F30 (sub_1400A4F30.c)
 * Callees:
 *     sub_1400A554C @ 0x1400A554C (sub_1400A554C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_1400A52A4(_QWORD *a1)
{
  sub_1400A554C();
  *a1 = off_1400C0DD0;
  a1[1] = off_1400C0D98;
  a1[2] = off_1400C0D20;
  a1[3] = off_1400C0998;
  a1[168] = off_1400C0960;
  a1[169] = off_1400C0940;
  a1[170] = off_1400C03D8;
  a1[183] = off_1400C0910;
  a1[195] = off_1400C08E0;
  a1[196] = off_1400C08B8;
  a1[197] = off_1400C0898;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
