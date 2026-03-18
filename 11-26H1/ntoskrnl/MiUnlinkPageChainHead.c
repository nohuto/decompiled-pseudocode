/*
 * XREFs of MiUnlinkPageChainHead @ 0x140365EF0
 * Callers:
 *     MiGetPageToTrade @ 0x1402951E0 (MiGetPageToTrade.c)
 *     MiSwitchValidPteToTransition @ 0x14030ED40 (MiSwitchValidPteToTransition.c)
 *     MiAllocateEnclavePages @ 0x1403378DC (MiAllocateEnclavePages.c)
 *     MiReleasePrefetchGapPages @ 0x140337DB8 (MiReleasePrefetchGapPages.c)
 *     MiAllocateEnclavePagesForMdl @ 0x140338234 (MiAllocateEnclavePagesForMdl.c)
 *     MiGetPageForEnclave @ 0x1403418D0 (MiGetPageForEnclave.c)
 *     MiFreeUnmappedPageTables @ 0x1403631D0 (MiFreeUnmappedPageTables.c)
 *     MiLinkPoolCommitChain @ 0x140365560 (MiLinkPoolCommitChain.c)
 *     MiAssignNonPagedPoolPte @ 0x140365C30 (MiAssignNonPagedPoolPte.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiFreeLargePageChain @ 0x1403C971C (MiFreeLargePageChain.c)
 *     MiGetClusterPage @ 0x14050E5D0 (MiGetClusterPage.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     MiReturnPhysicalPoolPages @ 0x14051DF40 (MiReturnPhysicalPoolPages.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiReturnPfnList @ 0x1406F5698 (MiReturnPfnList.c)
 *     MiGetFileOnlyPagesToReap @ 0x1406FA25C (MiGetFileOnlyPagesToReap.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140700050 (MiPrepareEnclaveMetadataPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14070B50C (MiMakeVaRangePhysicallyContiguous.c)
 *     MmCreateShadowMapping @ 0x140875970 (MmCreateShadowMapping.c)
 *     MiCreateHardwareEnclave @ 0x1408760F0 (MiCreateHardwareEnclave.c)
 *     MiFreeReadListPages @ 0x140A525E0 (MiFreeReadListPages.c)
 *     MiReturnReservedEnclavePages @ 0x140C01D98 (MiReturnReservedEnclavePages.c)
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
