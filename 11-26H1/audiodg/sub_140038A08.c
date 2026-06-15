/*
 * XREFs of sub_140038A08 @ 0x140038A08
 * Callers:
 *     sub_140082034 @ 0x140082034 (sub_140082034.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140038A08(_QWORD *a1, __int64 a2)
{
  *a1 = 0LL;
  if ( a2 )
    sub_1400B6010(a2);
  return a1;
}
