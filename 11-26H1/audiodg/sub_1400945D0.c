/*
 * XREFs of sub_1400945D0 @ 0x1400945D0
 * Callers:
 *     sub_1400940C0 @ 0x1400940C0 (sub_1400940C0.c)
 *     sub_1400941C4 @ 0x1400941C4 (sub_1400941C4.c)
 * Callees:
 *     sub_140017D8C @ 0x140017D8C (sub_140017D8C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_1400945D0(_QWORD *a1)
{
  sub_140017D8C((__int64)a1);
  *a1 = off_1400BF398;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  return a1;
}
