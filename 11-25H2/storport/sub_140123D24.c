/*
 * XREFs of sub_140123D24 @ 0x140123D24
 * Callers:
 *     sub_1401251CC @ 0x1401251CC (sub_1401251CC.c)
 * Callees:
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140123D24(__int64 a1, const void *a2, unsigned int a3)
{
  if ( !a2 )
    return 3221225485LL;
  memmove((void *)(a1 + *(unsigned int *)(a1 + 16)), a2, a3);
  return 0LL;
}
