/*
 * XREFs of CcInitializeCacheManager @ 0x140C854E8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404927B0 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x140492B20 (ExInitializeLookasideListExInternal.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CcCreatePartition @ 0x1405B4998 (CcCreatePartition.c)
 *     CcInitPerVolumeParameters @ 0x1405B5ACC (CcInitPerVolumeParameters.c)
 *     CcInitializeProcessor @ 0x14078CBAC (CcInitializeProcessor.c)
 *     FsRtlIsMobileOS @ 0x140ABD680 (FsRtlIsMobileOS.c)
 *     PoRegisterCoalescingCallback @ 0x140B608A0 (PoRegisterCoalescingCallback.c)
 *     ExInitializeSystemLookasideList @ 0x140C136D0 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CcInitializeTelemetry @ 0x140C85A64 (CcInitializeTelemetry.c)
 *     CcInitializeBcbProfiler @ 0x140C86424 (CcInitializeBcbProfiler.c)
 *     CcInitializeVacbs @ 0x140CBBB3C (CcInitializeVacbs.c)
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
    v2 = (unsigned __int8)dword_140FBF22C;
    CcMasterLock = 0LL;
    EmpParseLock.WriteOperationCount = 0LL;
    EmpParseLock.OtherOperationCount = 0x200000064LL;
    if ( (_BYTE)dword_140FBF22C )
    {
      CcMaxNumberCompleteAsyncReadExWorkItems = 500;
      EmpParseLock.SchedulerAssistPriorityFloor = 8;
    }
    else
    {
      LODWORD(EmpParseLock.OtherOperationCount) = 50;
      if ( FsRtlIsMobileOS() )
        LODWORD(EmpParseLock.OtherOperationCount) = 10;
      CcMaxNumberCompleteAsyncReadExWorkItems = 50;
      if ( FsRtlIsMobileOS() )
        CcMaxNumberCompleteAsyncReadExWorkItems = 9;
      EmpParseLock.SchedulerAssistPriorityFloor = 4;
    }
    CcInitPerVolumeParameters();
    CcInitializeVacbs();
    EmpParseLock.InGlobalUpdateVpThreadPriorityList = 0LL;
    CcNumberNumaNodes = (unsigned __int16)(KeNumberNodes - 1) + 1;
    Partition = CcCreatePartition();
    if ( !Partition )
      KeBugCheckEx(0x34u, 0x402B9uLL, 0LL, 0LL, 0LL);
    LOWORD(EmpParseLock.ReadTransferCount) = 1;
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
    LODWORD(EmpParseLock.WriteTransferCount) = 1;
    EmpParseLock.OtherTransferCount = 0LL;
    LODWORD(EmpParseLock.QueuedScb) = 0;
    LOWORD(EmpParseLock.ThreadTimerDelay) = 1;
    LODWORD(EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Flink) = 0x989680 / KeMaximumIncrement;
    EmpParseLock.UserWaitTime = (unsigned __int64)&EmpParseLock.KernelWaitTime;
    EmpParseLock.KernelWaitTime = (unsigned __int64)&EmpParseLock.KernelWaitTime;
    EmpParseLock.SchedulerAssist = EmpParseLock.TracingPrivate;
    EmpParseLock.TracingPrivate[0] = (unsigned __int64)EmpParseLock.TracingPrivate;
    EmpParseLock.IptSaveArea = &EmpParseLock.SystemAffinityTokenListHead;
    EmpParseLock.SystemAffinityTokenListHead.Next = &EmpParseLock.SystemAffinityTokenListHead;
    BYTE2(EmpParseLock.ThreadTimerDelay) = 6;
    *(_DWORD *)&EmpParseLock.Spare26 = 0;
    LODWORD(EmpParseLock.Spare35[1]) = 4;
    CcMaxLazyWritePages = v2 != 0 ? 2048 : 256;
    CcExtraWBThreadDelay = v2 != 0 ? 5000000 : 10000000;
    if ( (unsigned int)(CcMaxLazyWritePagesOverride - 1) <= 0x7FFF )
      CcMaxLazyWritePages = CcMaxLazyWritePagesOverride;
    v11 = 5;
    *(_DWORD *)&EmpParseLock.ResourceIndex = 0;
    LOWORD(EmpParseLock.KernelShadowStackLimit.AllFields) = 1;
    if ( CcAzure_SoftThrottleDelayInMs )
      v11 = CcAzure_SoftThrottleDelayInMs;
    *((_BYTE *)&EmpParseLock.KernelShadowStackLimit.1 + 2) = 6;
    CcSoftThrottleDelay = v11;
    EmpParseLock.WpsFeedback = (_KTHREAD_WPS_FEEDBACK *)&EmpParseLock.ExtendedFeatureDisableMask;
    EmpParseLock.ExtendedFeatureDisableMask = (unsigned __int64)&EmpParseLock.ExtendedFeatureDisableMask;
    *((_DWORD *)&EmpParseLock.KernelShadowStackLimit.1 + 1) = 0;
    ExInitializeSystemLookasideList((__int64)&CcTwilightLookasideList, 512, 160, 1800889155, v2 != 0 ? 256 : 128);
    HIDWORD(EmpParseLock.Spare35[0]) = 1;
    v12 = 0;
    CcMaxZeroTransferSize = v2 != 0 ? 0x2000000 : 0x100000;
    while ( v12 < (unsigned int)KeNumberProcessors_0 )
    {
      if ( (int)CcInitializeProcessor(KiProcessorBlock[v12]) < 0 )
        KeBugCheckEx(0x34u, 0x34FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      ++v12;
    }
    LODWORD(EmpParseLock.Spare35[0]) = 0;
    ExInitializeNPagedLookasideListInternal((__int64)&CcBitmapLookasideList, 0LL, 0LL, 512, 1024, 1833067331, 0, 0);
    LODWORD(EmpParseLock.KcsanThread) = 0;
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
    ExInitializeLookasideListExInternal(&CcPrivateCacheMapLookasideList, 0LL, 0LL, 512, 0, 0x78uLL, 1666212675, 0, 0);
    *(_QWORD *)&EmpParseLock.SchedulerAssistYieldCounter = 0LL;
    EmpParseLock.Spare32 = &EmpParseLock.1136;
    EmpParseLock.AutoBoostThreadState = &EmpParseLock.1136;
    if ( CcRemoteFileDPInlineFlushThreshold != -1
      && ((unsigned int)CcRemoteFileDPInlineFlushThreshold < 0x8000
       || (unsigned __int64)(unsigned int)CcRemoteFileDPInlineFlushThreshold > *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * **(unsigned __int16 **)PspSystemPartition)
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
    EmpParseLock.MutantListHead.Blink = 0LL;
    *(_OWORD *)&EmpParseLock.ThreadListEntry.Blink = 0LL;
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
