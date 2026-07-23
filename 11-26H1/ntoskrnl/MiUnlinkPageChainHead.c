/*
 * XREFs of MiUnlinkPageChainHead @ 0x140367C90
 * Callers:
 *     MiGetPageToTrade @ 0x140294740 (MiGetPageToTrade.c)
 *     MiSwitchValidPteToTransition @ 0x1402F0DC0 (MiSwitchValidPteToTransition.c)
 *     MiAllocateEnclavePages @ 0x14033995C (MiAllocateEnclavePages.c)
 *     MiReleasePrefetchGapPages @ 0x140339E38 (MiReleasePrefetchGapPages.c)
 *     MiAllocateEnclavePagesForMdl @ 0x14033A2B4 (MiAllocateEnclavePagesForMdl.c)
 *     MiGetPageForEnclave @ 0x140343950 (MiGetPageForEnclave.c)
 *     MiFreeUnmappedPageTables @ 0x140364F70 (MiFreeUnmappedPageTables.c)
 *     MiLinkPoolCommitChain @ 0x140367300 (MiLinkPoolCommitChain.c)
 *     MiAssignNonPagedPoolPte @ 0x1403679D0 (MiAssignNonPagedPoolPte.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiFreeLargePageChain @ 0x1403D35CC (MiFreeLargePageChain.c)
 *     MiGetClusterPage @ 0x140508040 (MiGetClusterPage.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MiReturnPhysicalPoolPages @ 0x140520550 (MiReturnPhysicalPoolPages.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiReturnPfnList @ 0x1406FA308 (MiReturnPfnList.c)
 *     MiGetFileOnlyPagesToReap @ 0x1406FEF2C (MiGetFileOnlyPagesToReap.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140704D20 (MiPrepareEnclaveMetadataPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1407101BC (MiMakeVaRangePhysicallyContiguous.c)
 *     MmCreateShadowMapping @ 0x14087BD54 (MmCreateShadowMapping.c)
 *     MiCreateHardwareEnclave @ 0x14087C4D4 (MiCreateHardwareEnclave.c)
 *     MiFreeReadListPages @ 0x140A5B8D0 (MiFreeReadListPages.c)
 *     MiReturnReservedEnclavePages @ 0x140C07FA8 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiUnlinkPageChainHead(__int64 a1)
{
  __int64 *result; // rax
  __int64 v2; // rdx
  bool v3; // zf

  result = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v2 = *result;
    v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
    *(_QWORD *)a1 = v2;
    if ( v3 )
      *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
