/*
 * XREFs of sub_140020C34 @ 0x140020C34
 * Callers:
 *     sub_1400205E0 @ 0x1400205E0 (sub_1400205E0.c)
 *     sub_140020B8C @ 0x140020B8C (sub_140020B8C.c)
 *     sub_140051808 @ 0x140051808 (sub_140051808.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 *__fastcall sub_140020C34(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    sub_1400B6010(a2);
  if ( v3 )
    sub_1400B6010(v3);
  return a1;
}
