/*
 * XREFs of sub_1400348F8 @ 0x1400348F8
 * Callers:
 *     sub_1400AE3E5 @ 0x1400AE3E5 (sub_1400AE3E5.c)
 *     sub_1400AEE81 @ 0x1400AEE81 (sub_1400AEE81.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400348F8(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = sub_1400B6010(v2);
  *a1 = 0LL;
  return result;
}
