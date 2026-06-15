/*
 * XREFs of sub_140035CA4 @ 0x140035CA4
 * Callers:
 *     sub_140041440 @ 0x140041440 (sub_140041440.c)
 *     sub_1400552A0 @ 0x1400552A0 (sub_1400552A0.c)
 *     sub_14006A72C @ 0x14006A72C (sub_14006A72C.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140035CA4(_QWORD *a1, __int64 a2)
{
  *a1 = 0LL;
  if ( a2 )
    sub_1400B6010(a2);
  return a1;
}
