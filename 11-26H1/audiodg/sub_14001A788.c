/*
 * XREFs of sub_14001A788 @ 0x14001A788
 * Callers:
 *     sub_14001A5FC @ 0x14001A5FC (sub_14001A5FC.c)
 *     sub_14001AAD4 @ 0x14001AAD4 (sub_14001AAD4.c)
 *     sub_140076414 @ 0x140076414 (sub_140076414.c)
 *     sub_14007BFE0 @ 0x14007BFE0 (sub_14007BFE0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_14001A788(__int64 **a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx

  v2 = *a1;
  v3 = **a1;
  *v2 = 0LL;
  if ( v3 )
    sub_1400B6010(v3);
  return *a1;
}
