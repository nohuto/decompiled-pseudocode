/*
 * XREFs of sub_1400306EC @ 0x1400306EC
 * Callers:
 *     sub_1400305AC @ 0x1400305AC (sub_1400305AC.c)
 * Callees:
 *     sub_1400307C0 @ 0x1400307C0 (sub_1400307C0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_1400306EC(_QWORD *a1)
{
  sub_1400307C0();
  *a1 = off_1400B9FD0;
  a1[1] = off_1400BA050;
  a1[2] = off_1400B9FB0;
  a1[3] = off_1400BA1D0;
  a1[4] = off_1400BA218;
  a1[5] = off_1400BA1A0;
  a1[6] = off_1400BA008;
  a1[7] = off_1400BA1F8;
  a1[8] = off_1400BA038;
  a1[9] = off_1400BA148;
  a1[10] = off_1400B9F88;
  a1[11] = off_1400BA180;
  a1[12] = off_1400BA118;
  a1[13] = off_1400BA0A0;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  return a1;
}
