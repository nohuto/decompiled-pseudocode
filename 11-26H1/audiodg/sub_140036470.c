/*
 * XREFs of sub_140036470 @ 0x140036470
 * Callers:
 *     sub_140041440 @ 0x140041440 (sub_140041440.c)
 *     sub_1400551E0 @ 0x1400551E0 (sub_1400551E0.c)
 *     sub_140055360 @ 0x140055360 (sub_140055360.c)
 *     sub_140055450 @ 0x140055450 (sub_140055450.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140036470(_QWORD *a1, __int64 a2)
{
  *a1 = 0LL;
  if ( a2 )
    sub_1400B6010(a2);
  return a1;
}
