/*
 * XREFs of MiInitializePageColorBase @ 0x140371BD0
 * Callers:
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiInitializeColorBase @ 0x1402A4DE8 (MiInitializeColorBase.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiPruneStandbyPages @ 0x1402AA540 (MiPruneStandbyPages.c)
 *     MiReplenishUltraPageTables @ 0x1402D64DC (MiReplenishUltraPageTables.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiSharePageAttach @ 0x1402EA178 (MiSharePageAttach.c)
 *     MiReplenishCloneLeafPage @ 0x1402F0A60 (MiReplenishCloneLeafPage.c)
 *     MiAllocateMdlPagesByLists @ 0x14033A004 (MiAllocateMdlPagesByLists.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x14033A374 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiGetPageForHeader @ 0x14033A9FC (MiGetPageForHeader.c)
 *     MiGetPageForSystemCache @ 0x14033BDD0 (MiGetPageForSystemCache.c)
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x140371D00 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiGetHardFaultPages @ 0x140374708 (MiGetHardFaultPages.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiThreadWorker @ 0x1403CD1F0 (MiThreadWorker.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403D1EE0 (MiGetLargePageDemoteAsNeeded.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x14040B6F8 (MmAllocateNonChargedSecurePages.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MiInitializeNewUltraHugeContext @ 0x1404875D8 (MiInitializeNewUltraHugeContext.c)
 *     MiMapPageFileHash @ 0x140499D94 (MiMapPageFileHash.c)
 *     MiGetUltraMdlContext @ 0x1404DACD8 (MiGetUltraMdlContext.c)
 *     MmAllocateSecureKernelPages @ 0x1404E279C (MmAllocateSecureKernelPages.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404EC414 (MiGetSingleHugeRangeToZero.c)
 *     MiSoftFaultClusterTradeInitialize @ 0x140502088 (MiSoftFaultClusterTradeInitialize.c)
 *     MiGetClusterPage @ 0x140508040 (MiGetClusterPage.c)
 *     MiGetLargePage @ 0x1405209D4 (MiGetLargePage.c)
 *     MiGetExtendedStandbyPage @ 0x1407084F4 (MiGetExtendedStandbyPage.c)
 *     MiHugePageOperation @ 0x140709E08 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x14070B0B4 (MiDefragmentSlabWorker.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140714FCC (MiComputeCacheAttributeSpeeds.c)
 *     MiCreateZeroThreadContext @ 0x140776624 (MiCreateZeroThreadContext.c)
 *     MmAllocateMemoryRanges @ 0x14086E160 (MmAllocateMemoryRanges.c)
 *     MiPartitionTransferAllocateHugeRange @ 0x140882D00 (MiPartitionTransferAllocateHugeRange.c)
 *     MiInitializeScrubPacket @ 0x140883E14 (MiInitializeScrubPacket.c)
 *     MiInitializeForkMaps @ 0x140A0751C (MiInitializeForkMaps.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140ABFDA0 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140AEDA3C (MiAllocateDriverPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140AF6D60 (MiDoneWithThisPageGetAnother.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 *     MiCombineIdenticalPages @ 0x140B4BC24 (MiCombineIdenticalPages.c)
 *     MmRelocatePfnList @ 0x140B705C4 (MmRelocatePfnList.c)
 *     MmInitializeProcessor @ 0x140C0634C (MmInitializeProcessor.c)
 *     MiAllocateDummyPage @ 0x140CF89FC (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140D004C4 (MmInitializeImageViewExtensionCfg.c)
 *     MiInitializeCacheFlushing @ 0x140D0572C (MiInitializeCacheFlushing.c)
 * Callees:
 *     <none>
 */

char __fastcall MiInitializePageColorBase(__int64 a1, char a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int IdealGlobalNode; // r8d
  __int64 v8; // rcx
  unsigned __int8 i; // cl
  char result; // al
  __int64 v11; // rdi

  if ( a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    IdealGlobalNode = a3 - 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( a1 && (*(_DWORD *)(a1 + 184) & 0xF) == 0 && CurrentThread->ApcStateIndex == 1 )
    {
      IdealGlobalNode = CurrentThread->ApcState.Process->IdealGlobalNode;
      CurrentPrcb = KeGetCurrentPrcb();
    }
    else
    {
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[CurrentThread->IdealProcessor];
      IdealGlobalNode = CurrentPrcb->NodeColor;
    }
  }
  v8 = 56320LL * IdealGlobalNode;
  if ( (*(_DWORD *)(qword_140E37E50 + v8 + 14096) & 1) != 0 )
  {
    v11 = qword_140E37E50 + v8;
    for ( i = 0; i < (unsigned __int8)byte_140E2D898; ++i )
    {
      if ( *(_BYTE *)(i + v11 + 14149) == 1 )
        goto LABEL_8;
    }
    for ( i = 0; i < (unsigned __int8)byte_140E2D898; ++i )
    {
      if ( *(_BYTE *)(i + v11 + 14149) == 2 )
        goto LABEL_8;
    }
  }
  i = 0;
LABEL_8:
  *(_DWORD *)(a4 + 8) = (i & 1 | (2 * (IdealGlobalNode & 0x3F | ((a2 & 3 | 4) << 7)))) << 8;
  if ( !a1 || (result = *(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    result = (_BYTE)CurrentPrcb + 80;
    *(_QWORD *)a4 = &CurrentPrcb->PageColor;
  }
  else
  {
    *(_QWORD *)a4 = a1;
  }
  return result;
}
