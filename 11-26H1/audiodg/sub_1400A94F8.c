/*
 * XREFs of sub_1400A94F8 @ 0x1400A94F8
 * Callers:
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 *     sub_1400AA844 @ 0x1400AA844 (sub_1400AA844.c)
 *     sub_1400B4252 @ 0x1400B4252 (sub_1400B4252.c)
 *     sub_1400B42A6 @ 0x1400B42A6 (sub_1400B42A6.c)
 * Callees:
 *     sub_1400A687C @ 0x1400A687C (sub_1400A687C.c)
 */

__int64 __fastcall sub_1400A94F8(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1400A687C(v1);
  return result;
}
