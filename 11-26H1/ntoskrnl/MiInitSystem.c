/*
 * XREFs of MiInitSystem @ 0x140CF7944
 * Callers:
 *     MmInitSystem @ 0x140C85D84 (MmInitSystem.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PsSetPagePriorityThread @ 0x140384E10 (PsSetPagePriorityThread.c)
 *     MiEnumerateSystemImages @ 0x1404DE724 (MiEnumerateSystemImages.c)
 *     ExecuteHotpatchTestBootFunction @ 0x14055BCE8 (ExecuteHotpatchTestBootFunction.c)
 *     VslInitializeSecurePool @ 0x1405C5CD8 (VslInitializeSecurePool.c)
 *     KdSetDbgPrintBufferSize @ 0x1405E69A8 (KdSetDbgPrintBufferSize.c)
 *     ExInitializePagedHeaps @ 0x1406D69C4 (ExInitializePagedHeaps.c)
 *     MxInstallMoreMemory @ 0x1406EC098 (MxInstallMoreMemory.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1406FC6DC (MiInitializeWorkingSetManagerParameters.c)
 *     MiSetSlabAllocatorPolicy @ 0x14070C644 (MiSetSlabAllocatorPolicy.c)
 *     MiUpdateSharedUserDataNumberOfPages @ 0x14086D548 (MiUpdateSharedUserDataNumberOfPages.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x140870FB0 (MmConfigurePrefetchSeekThreshold.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x140873ACC (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiInitializeMemoryEvents @ 0x140885C60 (MiInitializeMemoryEvents.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
 *     MmLockPagableDataSection @ 0x140ABC640 (MmLockPagableDataSection.c)
 *     PsInitializeQuotaSystem @ 0x140CDF1C0 (PsInitializeQuotaSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x140CF77EC (MiAddLoaderHalIoMappings.c)
 *     MiInitializeBootProcess @ 0x140CF8124 (MiInitializeBootProcess.c)
 *     MiInitializeSharedUserData @ 0x140CF82E0 (MiInitializeSharedUserData.c)
 *     MiAllocateDummyPage @ 0x140CF89FC (MiAllocateDummyPage.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140CFA8B8 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiSectionInitialization @ 0x140CFEA3C (MiSectionInitialization.c)
 *     MiInitializeMirroring @ 0x140CFEE64 (MiInitializeMirroring.c)
 *     MiInitializeSystemSpaceMap @ 0x140D0033C (MiInitializeSystemSpaceMap.c)
 *     MmInitializeImageViewExtension @ 0x140D00404 (MmInitializeImageViewExtension.c)
 *     MiInitializeModifiedWriterParameters @ 0x140D00840 (MiInitializeModifiedWriterParameters.c)
 *     MiInitializeKernelScp @ 0x140D00EA8 (MiInitializeKernelScp.c)
 *     MiInitializeHotPatches @ 0x140D01A44 (MiInitializeHotPatches.c)
 *     MiInitializeBootKernelShadowStacks @ 0x140D024B0 (MiInitializeBootKernelShadowStacks.c)
 *     MiCreateEnclaveRegions @ 0x140D032F4 (MiCreateEnclaveRegions.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140D037E8 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiInitializeRelocations @ 0x140D04084 (MiInitializeRelocations.c)
 *     MiInitializeCfg @ 0x140D042E8 (MiInitializeCfg.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140D047E0 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140D04838 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiInitializeCacheFlushing @ 0x140D0572C (MiInitializeCacheFlushing.c)
 *     MiInitializeTbFlushing @ 0x140D05B90 (MiInitializeTbFlushing.c)
 *     MiInitializeApiSets @ 0x140D06550 (MiInitializeApiSets.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 *     MiInitializeSystemImageRegion @ 0x140D06CC4 (MiInitializeSystemImageRegion.c)
 *     MiInitializeHardwareAccelerators @ 0x140D0786C (MiInitializeHardwareAccelerators.c)
 *     MiRegisterForHardwareAcceleratorChanges @ 0x140D078C8 (MiRegisterForHardwareAcceleratorChanges.c)
 */

NTSTATUS (__fastcall *__fastcall MiInitSystem(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4))(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS (__fastcall *result)(__int64, __int64, __int64); // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  _KPROCESS *Process; // rcx
  PKSTART_ROUTINE *v12; // r15
  unsigned int v13; // r14d
  _QWORD v14[10]; // [rsp+40h] [rbp-19h] BYREF
  HANDLE ThreadHandle; // [rsp+D0h] [rbp+77h] BYREF

  v14[0] = KeBalanceSetManager;
  v14[1] = MiTrimmingThread;
  v14[2] = MiAgingThread;
  v14[3] = KeSwapProcessOrStack;
  v14[4] = MiRebuildLargePagesThread;
  v14[5] = MiZeroPageThread;
  v14[6] = MiDereferenceSegmentThread;
  v14[7] = MiMappedPageWriter;
  v14[8] = MiFileOnlyReaperWorker;
  result = MiThreadFaultClusterAgingThread;
  v14[9] = MiThreadFaultClusterAgingThread;
  ThreadHandle = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
      *(_DWORD *)(MmWriteableSharedUserData + 580) = 0x200000;
      if ( (MiFlags & 0x10000) != 0 && (int)VslInitializeSecurePool((char *)qword_140E37DD0, qword_140E37DD8) < 0 )
        MxInstallMoreMemory(35);
      if ( !(unsigned int)MiSectionInitialization() )
        MxInstallMoreMemory(36);
      if ( (int)MiInitializeCfg() < 0 )
        MxInstallMoreMemory(37);
      if ( !(unsigned int)MiCreateEnclaveRegions(a2) )
        MxInstallMoreMemory(39);
      qword_140E2EBC8 = 0LL;
      MiInitializeCacheFlushing();
      if ( !MiInitializeMemoryEvents(&MiSystemPartition) )
        MxInstallMoreMemory(41);
      if ( !(unsigned int)MiInitializeModifiedWriterParameters() )
        MxInstallMoreMemory(50);
      MiComputeMemoryNodeProcessorAssignments();
      MiInitializeHardwareAccelerators(1LL);
      LOWORD(stru_140E2EC68.Header.Lock) = 0;
      stru_140E2EC68.Header.WaitListHead.Blink = &stru_140E2EC68.Header.WaitListHead;
      stru_140E2EC68.Header.WaitListHead.Flink = &stru_140E2EC68.Header.WaitListHead;
      stru_140E2EC68.Header.Size = 6;
      stru_14101FC60.WorkerRoutine = (void (__fastcall *)(void *))MiHotAddBootDeferredDescriptors;
      stru_140E2EC68.Header.SignalState = 0;
      stru_14101FC60.Parameter = 0LL;
      stru_14101FC60.List.Flink = 0LL;
      ExQueueWorkItem(&stru_14101FC60, NormalWorkQueue);
      LOWORD(stru_140E2D2D0.QuantumTarget) = 1;
      stru_140E2D2D0.StackLimit = &stru_140E2D2D0.InitialStack;
      v12 = (PKSTART_ROUTINE *)v14;
      stru_140E2D2D0.InitialStack = &stru_140E2D2D0.InitialStack;
      v13 = 0;
      BYTE2(stru_140E2D2D0.QuantumTarget) = 6;
      HIDWORD(stru_140E2D2D0.QuantumTarget) = 0;
      do
      {
        if ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *v12, &MiSystemPartition) < 0 )
          MxInstallMoreMemory(43);
        ObCloseHandle(ThreadHandle, 0);
        ++v13;
        ++v12;
      }
      while ( v13 < 0xA );
      MiEnumerateSystemImages((__int64)MiWriteProtectSystemImages, 0LL, 0);
      _InterlockedDecrement(&dword_140E36204);
      result = (NTSTATUS (__fastcall *)(__int64, __int64, __int64))MiInitializeApiSets(a2);
      if ( (int)result < 0 )
        MxInstallMoreMemory(45);
    }
    else if ( a1 == 2 )
    {
      MiRegisterForHardwareAcceleratorChanges();
      MiEnumerateSystemImages((__int64)MiUnlockBootPageSections, 0LL, 0);
      MiFlushStrongCodeDriverLoadFailures();
      return (NTSTATUS (__fastcall *)(__int64, __int64, __int64))MiFlushDeferredRetpolineImageLoadEvents();
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    stru_140E2ED08.WaitBlock[2].Thread = (struct _KTHREAD *)MiReservePtes(
                                                              (__int64)&stru_140E366D8.WaitBlockList,
                                                              0x101u,
                                                              a3,
                                                              a4);
    _InterlockedAdd(&dword_140E36204, 1u);
    MiInitializeWorkingSetManagerParameters((__int64)&MiSystemPartition);
    if ( (int)ExInitializePagedHeaps() < 0 )
      MxInstallMoreMemory(24);
    if ( !PsInitializeQuotaSystem(0) )
      MxInstallMoreMemory(25);
    v6 = __rdtsc();
    if ( !v6 )
      v6 = 1LL;
    qword_140E2D7C0 = v6;
    ExecuteHotpatchTestBootFunction();
    if ( !(unsigned int)MiInitializeSharedUserData() )
      MxInstallMoreMemory(26);
    if ( (int)MiInitializeBootProcess() < 0 )
      MxInstallMoreMemory(27);
    MiIssueFlushTbEntire((_KPROCESS *)2, (volatile _KAFFINITY_EX *)0xFFFFFFFFLL, v7);
    MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
    MiAddLoaderHalIoMappings(qword_140E37E00, qword_140E37E00 + qword_140E37E08 - 1);
    if ( KdPrintBufferAllocateSize )
      KdSetDbgPrintBufferSize(KdPrintBufferAllocateSize);
    MiSetSlabAllocatorPolicy((__int64)&MiSystemPartition);
    if ( !(unsigned int)MiInitializeHotPatches(a2) )
      MxInstallMoreMemory(28);
    MmInitializeImageViewExtension(0LL);
    if ( (int)MiInitializeKernelScp() < 0 )
      MxInstallMoreMemory(29);
    v8 = __rdtsc();
    stru_140E2DAB0.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(unsigned int)((((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) >> 4);
    LODWORD(stru_140E2DAB0.Header.WaitListHead.Blink) = 8
                                                      * (((((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) >> 4) & 3)
                                                      + 8;
    qword_140FFC9B8 = KeQueryPerformanceCounter(0LL).QuadPart;
    if ( (unsigned int)dword_140FBF268 > 2 )
      dword_140FBF268 = 0;
    if ( (MiFlags & 4) != 0 && (int)MiCreateSlabAllocationsFromKernelHal() < 0 )
      MxInstallMoreMemory(30);
    if ( (int)MiCreateSlabAllocationsFromLoaderBlock(a2) < 0 )
      MxInstallMoreMemory(31);
    MiInitializeSystemSpaceMap();
    stru_140E2D2D0.CycleTime = 0LL;
    qword_140E2EBE8 = 0LL;
    qword_140E2EBF8 = 0LL;
    qword_140FFC9C0 = KeQueryPerformanceCounter(0LL).QuadPart;
    MiInitializeBootKernelShadowStacks(a2);
    if ( !(unsigned int)MiInitializeSystemImageRegion(a2) )
      MxInstallMoreMemory(32);
    MiInitializeLoadedModuleList(a2);
    qword_140FFC9C8 = KeQueryPerformanceCounter(0LL).QuadPart;
    MiUpdateSharedUserDataNumberOfPages();
    *(_DWORD *)(MmWriteableSharedUserData + 580) = 0;
    MiFlags |= 0x2000000uLL;
    stru_140E37F48.ReadTransferCount = 0LL;
    MmConfigurePrefetchSeekThreshold(32);
    PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
    MiEnumerateSystemImages((__int64)MiEnablePagingOfDriver, 0LL, 0);
    ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
    MmUnlockPagableImageSection(ExPageLockHandle);
    qword_140E36178 = MiAllocateDummyPage();
    qword_140E36170 = 48 * qword_140E36178 - 0x220000000000LL;
    v10 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 1u, qword_140E36170, v9);
    MmBadPointer = (PVOID)v10;
    if ( !v10 )
      MxInstallMoreMemory(33);
    MmBadPointer = (PVOID)((__int64)(v10 << 25) >> 16);
    if ( !(unsigned int)MiInitializeRelocations() )
      MxInstallMoreMemory(34);
    qword_140FFC9D8 = KeQueryPerformanceCounter(0LL).QuadPart;
    MiInitializeTbFlushing();
    qword_140FFC9E0 = KeQueryPerformanceCounter(0LL).QuadPart;
    result = (NTSTATUS (__fastcall *)(__int64, __int64, __int64))MiInitializeMirroring();
    if ( !(_DWORD)result )
      MxInstallMoreMemory(44);
  }
  return result;
}
