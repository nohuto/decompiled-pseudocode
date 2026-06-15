/*
 * XREFs of sub_1400A94D0 @ 0x1400A94D0
 * Callers:
 *     sub_1400A92F8 @ 0x1400A92F8 (sub_1400A92F8.c)
 *     sub_1400B422E @ 0x1400B422E (sub_1400B422E.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

double __fastcall sub_1400A94D0(__int64 *a1)
{
  __int64 v1; // rcx
  double result; // xmm0_8

  v1 = *a1;
  if ( v1 )
    return sub_1400B6010(v1);
  return result;
}
