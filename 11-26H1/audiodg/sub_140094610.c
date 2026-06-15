/*
 * XREFs of sub_140094610 @ 0x140094610
 * Callers:
 *     sub_140094570 @ 0x140094570 (sub_140094570.c)
 * Callees:
 *     sub_140017D8C @ 0x140017D8C (sub_140017D8C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140094610(_QWORD *a1)
{
  sub_140017D8C((__int64)a1);
  *a1 = off_1400BF338;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  return a1;
}
