/*
 * XREFs of CcInitializeCacheManager @ 0x140C7F4E8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x140498FD0 (ExInitializeLookasideListExInternal.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CcCreatePartition @ 0x1405B2188 (CcCreatePartition.c)
 *     CcInitPerVolumeParameters @ 0x1405B32BC (CcInitPerVolumeParameters.c)
 *     CcInitializeProcessor @ 0x14078A07C (CcInitializeProcessor.c)
 *     FsRtlIsMobileOS @ 0x140ABB980 (FsRtlIsMobileOS.c)
 *     PoRegisterCoalescingCallback @ 0x140B5D720 (PoRegisterCoalescingCallback.c)
 *     ExInitializeSystemLookasideList @ 0x140C0D4C0 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CcInitializeTelemetry @ 0x140C7FA64 (CcInitializeTelemetry.c)
 *     CcInitializeBcbProfiler @ 0x140C80424 (CcInitializeBcbProfiler.c)
 *     CcInitializeVacbs @ 0x140CB5AFC (CcInitializeVacbs.c)
 */

char __fastcall CcInitializeCacheManager(int a1)
{
  int v2; // esi
  _BYTE *Partition; // rax
  void *Pool2; // rax
  __int64 v5; // rdx
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // ecx
  int v14; // eax

  if ( a1 == 2 )
  {
    CcInitializeTelemetry(2LL);
    return 1;
  }
  else
  {
    v2 = (unsigned __int8)dword_140FBE22C;
    CcMasterLock = 0LL;
    EmpParseLock.OtherOperationCount = 0LL;
    LODWORD(EmpParseLock.WriteOperationCount) = 2;
    LODWORD(EmpParseLock.InGlobalForegroundList) = 100;
    if ( (_BYTE)dword_140FBE22C )
    {
      CcMaxNumberCompleteAsyncReadExWorkItems = 500;
      HIDWORD(EmpParseLock.ForegroundDpcStackListEntry.Next) = 8;
    }
    else
    {
      LODWORD(EmpParseLock.InGlobalForegroundList) = 50;
      if ( FsRtlIsMobileOS() )
        LODWORD(EmpParseLock.InGlobalForegroundList) = 10;
      CcMaxNumberCompleteAsyncReadExWorkItems = 50;
      if ( FsRtlIsMobileOS() )
        CcMaxNumberCompleteAsyncReadExWorkItems = 9;
      HIDWORD(EmpParseLock.ForegroundDpcStackListEntry.Next) = 4;
    }
    CcInitPerVolumeParameters();
    CcInitializeVacbs();
    EmpParseLock.ReadOperationCount = 0LL;
    CcNumberNumaNodes = (unsigned __int16)(KeNumberNodes - 1) + 1;
    Partition = CcCreatePartition();
    if ( !Partition )
      KeBugCheckEx(0x34u, 0x402B9uLL, 0LL, 0LL, 0LL);
    WORD2(EmpParseLock.KernelShadowStack) = 1;
    *((_QWORD *)PspSystemPartition + 1) = Partition;
    CcSystemPartitionDirtyPageStatistics = (__int64)(Partition + 1056);
    CcSystemPartitionDirtyPageThresholds = (__int64)(Partition + 1080);
    _mm_lfence();
    CcInitializeBcbProfiler();
    Pool2 = (void *)ExAllocatePool2(64LL, 8uLL, 0x58637044u);
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      ExGenRandom(0, v5);
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    EmpParseLock.ThreadTimerDelay = 1;
    EmpParseLock.TracingPrivate[0] = 0LL;
    LODWORD(EmpParseLock.SchedulerAssist) = 0;
    LOWORD(EmpParseLock.AbWaitObject) = 1;
    LODWORD(EmpParseLock.KernelShadowStackInitial) = 0x989680u / KeMaximumIncrement;
    *(_QWORD *)&EmpParseLock.SchedulerAssistPriorityFloor = &EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
    EmpParseLock.InGlobalUpdateVpThreadPriorityList = (unsigned __int64)&EmpParseLock.InGlobalUpdateVpThreadPriorityList;
    EmpParseLock.KernelWaitTime = (unsigned __int64)&EmpParseLock.ReservedPreviousReadyTimeValue;
    *(_QWORD *)&EmpParseLock.ReservedPreviousReadyTimeValue = &EmpParseLock.ReservedPreviousReadyTimeValue;
    EmpParseLock.WriteTransferCount = (__int64)&EmpParseLock.ReadTransferCount;
    EmpParseLock.ReadTransferCount = (__int64)&EmpParseLock.ReadTransferCount;
    BYTE2(EmpParseLock.AbWaitObject) = 6;
    HIDWORD(EmpParseLock.AbWaitObject) = 0;
    LODWORD(EmpParseLock.KernelShadowStack) = 4;
    CcMaxLazyWritePages = v2 != 0 ? 2048 : 256;
    CcExtraWBThreadDelay = v2 != 0 ? 5000000 : 10000000;
    if ( (unsigned int)(CcMaxLazyWritePagesOverride - 1) <= 0x7FFF )
      CcMaxLazyWritePages = CcMaxLazyWritePagesOverride;
    v11 = 5;
    LODWORD(EmpParseLock.SystemAffinityTokenListHead.Next) = 0;
    LOWORD(EmpParseLock.Spare35[0]) = 1;
    if ( CcAzure_SoftThrottleDelayInMs )
      v11 = CcAzure_SoftThrottleDelayInMs;
    BYTE2(EmpParseLock.Spare35[0]) = 6;
    CcSoftThrottleDelay = v11;
    *(_QWORD *)&EmpParseLock.Spare36 = &EmpParseLock.Spare35[1];
    EmpParseLock.Spare35[1] = (unsigned __int64)&EmpParseLock.Spare35[1];
    HIDWORD(EmpParseLock.Spare35[0]) = 0;
    ExInitializeSystemLookasideList((__int64)&CcTwilightLookasideList, 512, 160, 1800889155, v2 != 0 ? 256 : 128);
    LODWORD(EmpParseLock.KernelShadowStackBase) = 1;
    v12 = 0;
    CcMaxZeroTransferSize = v2 != 0 ? 0x2000000 : 0x100000;
    while ( v12 < (unsigned int)KeNumberProcessors_0 )
    {
      if ( (int)CcInitializeProcessor(KiProcessorBlock[v12]) < 0 )
        KeBugCheckEx(0x34u, 0x34FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      ++v12;
    }
    HIDWORD(EmpParseLock.KernelShadowStackInitial) = 0;
    ExInitializeNPagedLookasideListInternal((__int64)&CcBitmapLookasideList, 0LL, 0LL, 512, 1024, 1833067331, 0, 0);
    HIDWORD(EmpParseLock.KernelShadowStackBase) = 0;
    ExInitializeNPagedLookasideListInternal((__int64)&CcVacbLevelLookasideList, 0LL, 0LL, 512, 1032, 1817600835, 0, 0);
    ExInitializeNPagedLookasideListInternal(
      (__int64)&CcVacbLevelWithBcbListHeadsLookasideList,
      0LL,
      0LL,
      512,
      2056,
      1817600835,
      0,
      0);
    ExInitializeLookasideListExInternal(&CcSharedCacheMapLookasideList, 0LL, 0LL, 512, 1, 0x268uLL, 1666409283, 0, 0);
    ExInitializeLookasideListExInternal(
      &CcPrivateCacheMapLookasideList.L.ListHead,
      0LL,
      0LL,
      512,
      0,
      0x78uLL,
      1666212675,
      0,
      0);
    EmpParseLock.SchedulerSharedSwappablePage = 0LL;
    *(_QWORD *)&EmpParseLock.ResourceIndex = &EmpParseLock.IptSaveArea;
    EmpParseLock.IptSaveArea = &EmpParseLock.IptSaveArea;
    if ( CcRemoteFileDPInlineFlushThreshold != -1
      && ((unsigned int)CcRemoteFileDPInlineFlushThreshold < 0x8000
       || (unsigned __int64)(unsigned int)CcRemoteFileDPInlineFlushThreshold > *(_QWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * **(unsigned __int16 **)PspSystemPartition)
                                                                                         + 22288LL)) )
    {
      CcRemoteFileDPInlineFlushThreshold = 1310720;
    }
    v13 = CcUnmapBehindLength;
    if ( (unsigned int)(CcUnmapBehindLength - 1) > 0x7F )
      v13 = 8;
    CcUnmapBehindLength = v13 << 20;
    if ( !CcAzure_LargeWriteSize
      || (v14 = CcAzure_LargeWriteSize << 10, CcAzure_LargeWriteSize << 10 <= (unsigned int)CcAzure_LargeWriteSize) )
    {
      v14 = 0;
    }
    CcAzure_LargeWriteSize = v14;
    if ( (unsigned int)CcAzure_SoftThrottleLargeWriteAtPct >= 0x65 )
      CcAzure_SoftThrottleLargeWriteAtPct = 0;
    if ( (unsigned int)CcAzure_LazyWriterPercentageOfNumProcs >= 0x65 )
      CcAzure_LazyWriterPercentageOfNumProcs = 0;
    CcInitializeTelemetry(1LL);
    EmpParseLock.MutantListHead.Flink = 0LL;
    EmpParseLock.ThreadListEntry = 0LL;
    if ( (int)PoRegisterCoalescingCallback((__int64)CcCoalescingCallBack, 1, &CcCoalescingRegistration, 0LL) < 0 )
      KeBugCheckEx(0x34u, 0x3F9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (unsigned int)(CcClientDTPDenominator - 2) > 6 )
      CcClientDTPDenominator = 8;
    if ( CcEnableLoggingOverride != -1 )
    {
      if ( CcEnableLoggingOverride )
      {
        if ( (CcEnableLoggingOverride & 1) != 0 )
          CcEnableLoggingFlags |= 1u;
      }
      else
      {
        CcEnableLoggingFlags = 0;
      }
    }
    CcInitializationComplete = 1;
    return 1;
  }
}
