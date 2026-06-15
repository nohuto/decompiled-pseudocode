/*
 * XREFs of sub_140095CA8 @ 0x140095CA8
 * Callers:
 *     sub_1400957C0 @ 0x1400957C0 (sub_1400957C0.c)
 * Callees:
 *     sub_140096294 @ 0x140096294 (sub_140096294.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140095CA8(_QWORD *a1)
{
  sub_140096294();
  *a1 = off_1400BFE50;
  a1[1] = off_1400BFE18;
  a1[53] = off_1400BFB50;
  a1[54] = off_1400BF6B8;
  a1[61] = off_1400BFB20;
  a1[64] = off_1400BFB00;
  a1[79] = off_1400BFAD0;
  a1[80] = off_1400BFAA8;
  a1[81] = off_1400BFA88;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
