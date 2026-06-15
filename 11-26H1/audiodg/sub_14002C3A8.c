/*
 * XREFs of sub_14002C3A8 @ 0x14002C3A8
 * Callers:
 *     sub_14002C2F0 @ 0x14002C2F0 (sub_14002C2F0.c)
 * Callees:
 *     sub_14002C400 @ 0x14002C400 (sub_14002C400.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_14002C3A8(_QWORD *a1)
{
  sub_14002C400();
  *a1 = &off_1400B9EE0;
  a1[1] = off_1400B9EC0;
  a1[2] = off_1400B9EA0;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  return a1;
}
