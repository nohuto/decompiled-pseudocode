/*
 * XREFs of MiPfnBestZeroAttribute @ 0x1402A0DFC
 * Callers:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiZeroAndConvertPage @ 0x1402A0A00 (MiZeroAndConvertPage.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x1402A12B8 (MiUpdateCacheAttributeListsForPage.c)
 *     MiZeroAndReleasePages @ 0x1403CDB20 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 */

__int64 __fastcall MiPfnBestZeroAttribute(__int64 a1, int a2)
{
  return *(unsigned int *)(qword_140E2D838
                         + 384LL * (unsigned int)MiPageToNode((a1 + 0x220000000000LL) / 48)
                         + 4 * (a2 + 4 * (((unsigned __int64)*(unsigned int *)(a1 + 32) >> 22) & 3))
                         + 120);
}
