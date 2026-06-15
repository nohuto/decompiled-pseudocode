/*
 * XREFs of sub_1400702A0 @ 0x1400702A0
 * Callers:
 *     sub_1400709A4 @ 0x1400709A4 (sub_1400709A4.c)
 * Callees:
 *     sub_1400703E8 @ 0x1400703E8 (sub_1400703E8.c)
 */

_QWORD *__fastcall sub_1400702A0(_QWORD *a1, __int64 a2)
{
  sub_1400703E8();
  a1[31] = a2;
  *a1 = off_1400BCE48;
  a1[1] = off_1400BCD68;
  a1[2] = off_1400BCDD8;
  a1[3] = off_1400BCD18;
  a1[19] = off_1400BCD90;
  a1[20] = off_1400BD170;
  a1[28] = off_1400BD020;
  a1[29] = off_1400BCE20;
  a1[30] = off_1400BCD38;
  return a1;
}
