/*
 * XREFs of sub_140095B8C @ 0x140095B8C
 * Callers:
 *     sub_140095600 @ 0x140095600 (sub_140095600.c)
 * Callees:
 *     sub_140096170 @ 0x140096170 (sub_140096170.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140095B8C(_QWORD *a1)
{
  sub_140096170();
  *a1 = off_1400BFC48;
  a1[1] = off_1400BFC10;
  a1[53] = off_1400BFBD8;
  a1[54] = off_1400BA988;
  a1[61] = off_1400BFBA8;
  a1[64] = off_1400BFB88;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
