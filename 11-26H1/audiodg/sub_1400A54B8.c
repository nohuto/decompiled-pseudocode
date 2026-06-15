/*
 * XREFs of sub_1400A54B8 @ 0x1400A54B8
 * Callers:
 *     sub_1400A51D0 @ 0x1400A51D0 (sub_1400A51D0.c)
 * Callees:
 *     sub_1400A5B80 @ 0x1400A5B80 (sub_1400A5B80.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_1400A54B8(_QWORD *a1)
{
  sub_1400A5B80();
  *a1 = off_1400C0B10;
  a1[1] = off_1400C0AD8;
  a1[2] = off_1400C0A60;
  a1[3] = off_1400C0A28;
  a1[172] = off_1400C09F0;
  a1[173] = off_1400C09D0;
  a1[174] = off_1400C0890;
  a1[187] = off_1400C06E0;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
