/*
 * XREFs of MiPfnBestZeroAttribute @ 0x1402A18AC
 * Callers:
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiZeroAndConvertPage @ 0x1402A14B0 (MiZeroAndConvertPage.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x1402A1D68 (MiUpdateCacheAttributeListsForPage.c)
 *     MiZeroAndReleasePages @ 0x1403C3C14 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x1403C673C (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 */

__int64 __fastcall MiPfnBestZeroAttribute(__int64 a1, int a2)
{
  return *(unsigned int *)(qword_140E2D6B8
                         + 384LL * (unsigned int)MiPageToNode((a1 + 0x220000000000LL) / 48)
                         + 4 * (a2 + 4 * (((unsigned __int64)*(unsigned int *)(a1 + 32) >> 22) & 3))
                         + 120);
}
