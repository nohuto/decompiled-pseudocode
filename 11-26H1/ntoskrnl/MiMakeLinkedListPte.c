/*
 * XREFs of MiMakeLinkedListPte @ 0x1403675E4
 * Callers:
 *     MiInsertCachedPte @ 0x140281740 (MiInsertCachedPte.c)
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287000 (MiGetPageChainSmallPageProcess.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x1402A12B8 (MiUpdateCacheAttributeListsForPage.c)
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiFreeSlabEntry @ 0x1402A6E7C (MiFreeSlabEntry.c)
 *     MiLinkPoolCommitChain @ 0x140367300 (MiLinkPoolCommitChain.c)
 *     MiConvertContiguousPages @ 0x140464F84 (MiConvertContiguousPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeLinkedListPte(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0x8000000000FFFFFFuLL | ((a1 & 0x7FFFFFFFFFLL) << 24);
  if ( qword_140E2D8C0 )
  {
    if ( (qword_140E2D8C0 & v1) != 0 )
      v1 |= 0x10uLL;
    else
      v1 |= qword_140E2D8C0;
  }
  return v1;
}
