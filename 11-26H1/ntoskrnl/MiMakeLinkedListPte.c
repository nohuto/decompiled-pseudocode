/*
 * XREFs of MiMakeLinkedListPte @ 0x140365844
 * Callers:
 *     MiInsertCachedPte @ 0x1402821D0 (MiInsertCachedPte.c)
 *     MiGetPageChain @ 0x140285DD0 (MiGetPageChain.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287AA0 (MiGetPageChainSmallPageProcess.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x1402A1D68 (MiUpdateCacheAttributeListsForPage.c)
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MiFreeSlabEntry @ 0x1402A7A6C (MiFreeSlabEntry.c)
 *     MiLinkPoolCommitChain @ 0x140365560 (MiLinkPoolCommitChain.c)
 *     MiConvertContiguousPages @ 0x14046B804 (MiConvertContiguousPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeLinkedListPte(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0x8000000000FFFFFFuLL | ((a1 & 0x7FFFFFFFFFLL) << 24);
  if ( qword_140E2D740 )
  {
    if ( (qword_140E2D740 & v1) != 0 )
      v1 |= 0x10uLL;
    else
      v1 |= qword_140E2D740;
  }
  return v1;
}
