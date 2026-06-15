/*
 * XREFs of sub_140095B1C @ 0x140095B1C
 * Callers:
 *     sub_1400953E0 @ 0x1400953E0 (sub_1400953E0.c)
 * Callees:
 *     sub_14009604C @ 0x14009604C (sub_14009604C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140095B1C(_QWORD *a1)
{
  sub_14009604C();
  *a1 = off_1400BF9A8;
  a1[1] = off_1400BF970;
  a1[53] = off_1400BF938;
  a1[54] = off_1400BA988;
  a1[61] = off_1400BF780;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
