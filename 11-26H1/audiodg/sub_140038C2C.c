/*
 * XREFs of sub_140038C2C @ 0x140038C2C
 * Callers:
 *     sub_140041440 @ 0x140041440 (sub_140041440.c)
 *     sub_140055610 @ 0x140055610 (sub_140055610.c)
 *     sub_140055840 @ 0x140055840 (sub_140055840.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140038C2C(_QWORD *a1, __int64 a2)
{
  *a1 = 0LL;
  if ( a2 )
    sub_1400B6010(a2);
  return a1;
}
