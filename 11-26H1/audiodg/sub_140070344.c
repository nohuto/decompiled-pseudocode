/*
 * XREFs of sub_140070344 @ 0x140070344
 * Callers:
 *     sub_140070A9C @ 0x140070A9C (sub_140070A9C.c)
 * Callees:
 *     sub_1400703E8 @ 0x1400703E8 (sub_1400703E8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140070344(_QWORD *a1)
{
  sub_1400703E8();
  *a1 = off_1400BD0B0;
  a1[1] = off_1400BCDB0;
  a1[2] = off_1400BD058;
  a1[3] = off_1400BCF08;
  a1[19] = off_1400BCCC8;
  a1[20] = off_1400BCF48;
  a1[28] = off_1400BD078;
  a1[29] = off_1400BCDF8;
  a1[30] = off_1400BCCE8;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
