/*
 * XREFs of MiInitializePageColorBase @ 0x14036FE20
 * Callers:
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MiInitializeColorBase @ 0x1402A5898 (MiInitializeColorBase.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A9CD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiPruneStandbyPages @ 0x1402C8780 (MiPruneStandbyPages.c)
 *     MiReplenishUltraPageTables @ 0x1402F445C (MiReplenishUltraPageTables.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiSharePageAttach @ 0x1403080F8 (MiSharePageAttach.c)
 *     MiReplenishCloneLeafPage @ 0x14030E9E0 (MiReplenishCloneLeafPage.c)
 *     MiAllocateMdlPagesByLists @ 0x140337F84 (MiAllocateMdlPagesByLists.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403382F4 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiGetPageForHeader @ 0x14033897C (MiGetPageForHeader.c)
 *     MiGetPageForSystemCache @ 0x140339D50 (MiGetPageForSystemCache.c)
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x14036FF50 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiGetHardFaultPages @ 0x140372958 (MiGetHardFaultPages.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiThreadWorker @ 0x1403C32F0 (MiThreadWorker.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403C7FF0 (MiGetLargePageDemoteAsNeeded.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MmAllocateNonChargedSecurePages @ 0x1404170E8 (MmAllocateNonChargedSecurePages.c)
 *     MiInitializeNewUltraHugeContext @ 0x14048DA98 (MiInitializeNewUltraHugeContext.c)
 *     MiMapPageFileHash @ 0x1404A0244 (MiMapPageFileHash.c)
 *     MiGetUltraMdlContext @ 0x1404E15F8 (MiGetUltraMdlContext.c)
 *     MmAllocateSecureKernelPages @ 0x1404E93EC (MmAllocateSecureKernelPages.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404F2E34 (MiGetSingleHugeRangeToZero.c)
 *     MiSoftFaultClusterTradeInitialize @ 0x1405085E0 (MiSoftFaultClusterTradeInitialize.c)
 *     MiGetClusterPage @ 0x14050E5D0 (MiGetClusterPage.c)
 *     MiGetLargePage @ 0x14051E3C4 (MiGetLargePage.c)
 *     MiGetExtendedStandbyPage @ 0x140703824 (MiGetExtendedStandbyPage.c)
 *     MiHugePageOperation @ 0x140705138 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x1407063E4 (MiDefragmentSlabWorker.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1407102D0 (MiComputeCacheAttributeSpeeds.c)
 *     MiCreateZeroThreadContext @ 0x140773624 (MiCreateZeroThreadContext.c)
 *     MmAllocateMemoryRanges @ 0x140867D80 (MmAllocateMemoryRanges.c)
 *     MiPartitionTransferAllocateHugeRange @ 0x14087C900 (MiPartitionTransferAllocateHugeRange.c)
 *     MiInitializeScrubPacket @ 0x14087DA14 (MiInitializeScrubPacket.c)
 *     MiInitializeForkMaps @ 0x140961828 (MiInitializeForkMaps.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140ABD7B0 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140AEAC6C (MiAllocateDriverPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140AF46EC (MiDoneWithThisPageGetAnother.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
 *     MiCombineIdenticalPages @ 0x140B49E94 (MiCombineIdenticalPages.c)
 *     MmRelocatePfnList @ 0x140B6D1F4 (MmRelocatePfnList.c)
 *     MmInitializeProcessor @ 0x140C0013C (MmInitializeProcessor.c)
 *     MiAllocateDummyPage @ 0x140CF267C (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140CFA144 (MmInitializeImageViewExtensionCfg.c)
 *     MiInitializeCacheFlushing @ 0x140CFF38C (MiInitializeCacheFlushing.c)
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
  if ( (*(_DWORD *)(qword_140E37CD0 + v8 + 14096) & 1) != 0 )
  {
    v11 = qword_140E37CD0 + v8;
    for ( i = 0; i < (unsigned __int8)byte_140E2D718; ++i )
    {
      if ( *(_BYTE *)(i + v11 + 14149) == 1 )
        goto LABEL_8;
    }
    for ( i = 0; i < (unsigned __int8)byte_140E2D718; ++i )
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
