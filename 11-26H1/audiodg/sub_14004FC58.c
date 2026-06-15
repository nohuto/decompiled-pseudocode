/*
 * XREFs of sub_14004FC58 @ 0x14004FC58
 * Callers:
 *     sub_140040498 @ 0x140040498 (sub_140040498.c)
 *     sub_140060664 @ 0x140060664 (sub_140060664.c)
 * Callees:
 *     sub_140017D8C @ 0x140017D8C (sub_140017D8C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_14004FC58(_QWORD *a1)
{
  sub_140017D8C((__int64)a1);
  *a1 = off_1400BB768;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  return a1;
}
