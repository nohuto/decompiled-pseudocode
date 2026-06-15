/*
 * XREFs of sub_1400A5364 @ 0x1400A5364
 * Callers:
 *     sub_1400A5010 @ 0x1400A5010 (sub_1400A5010.c)
 * Callees:
 *     sub_1400A5610 @ 0x1400A5610 (sub_1400A5610.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_1400A5364(_QWORD *a1)
{
  sub_1400A5610();
  *a1 = off_1400C0CB8;
  a1[1] = off_1400C0C80;
  a1[2] = off_1400C0C08;
  a1[3] = off_1400C0BD0;
  a1[172] = off_1400C0B98;
  a1[173] = off_1400C0B78;
  a1[174] = off_1400C03D8;
  a1[187] = off_1400C0EB0;
  a1[199] = off_1400C0E80;
  a1[200] = off_1400C0E58;
  a1[201] = off_1400C0E38;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
