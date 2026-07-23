/*
 * XREFs of FsRtlInitSystem @ 0x140CBEAB0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     FsFilterInit @ 0x1405B9FFC (FsFilterInit.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     FsRtlInitializeDedupChange @ 0x140792660 (FsRtlInitializeDedupChange.c)
 *     FsRtlInitializeTieringHeat @ 0x140793028 (FsRtlInitializeTieringHeat.c)
 *     ExInitializePagedLookasideList @ 0x140B33F30 (ExInitializePagedLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     FsRtlGetCompatibilityModeValue @ 0x140CBE948 (FsRtlGetCompatibilityModeValue.c)
 *     FsRtlInitializeSmssEvent @ 0x140CBECE4 (FsRtlInitializeSmssEvent.c)
 *     FsRtlInitializeLargeMcbs @ 0x140CBEDE0 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeTunnels @ 0x140CBEE90 (FsRtlInitializeTunnels.c)
 *     FsRtlInitializeFileLocks @ 0x140CBEF80 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeOplockPerf @ 0x140CBF134 (FsRtlInitializeOplockPerf.c)
 *     FsRtlInitializeWorkerThread @ 0x140CBF314 (FsRtlInitializeWorkerThread.c)
 */

bool FsRtlInitSystem()
{
  __int64 v0; // r15
  __int64 v1; // r14
  _KSWAPPABLE_PAGE *v2; // rbx
  unsigned __int64 v3; // rax
  KSPIN_LOCK *v4; // rdi
  unsigned __int16 *v5; // rax
  __int64 *v6; // rbp
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v8; // si
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 retaddr; // [rsp+78h] [rbp+0h]
  int v12; // [rsp+80h] [rbp+8h] BYREF

  v12 = 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  FsRtlPagingIoResources = (__int64)ExAllocatePoolWithTag((POOL_TYPE)1552, 0x680uLL, 0x74725346u);
  v0 = 16LL;
  v1 = 0LL;
  do
  {
    v2 = (_KSWAPPABLE_PAGE *)(v1 + FsRtlPagingIoResources);
    if ( (unsigned __int64)(v1 + FsRtlPagingIoResources) < 0xFFFF800000000000uLL
      || MmDeterminePoolType(v1 + FsRtlPagingIoResources) == 256 )
    {
      ExpTraceLogBadResourceAddress((unsigned __int64)v2, retaddr);
    }
    memset_0(v2, 0, 0x68uLL);
    v2->TransitionLock = (unsigned __int64)v2;
    v3 = 0LL;
    v2->RegionStart = v2;
    *(_QWORD *)&v2->Mdl.Size = 0LL;
    v2->Mdl.Process = 0LL;
    v2[1].LockCount.Value = 0LL;
    if ( (NtGlobalFlag & 0x2000) != 0 )
    {
      v4 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
      if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags
        && (v5 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1),
            (v6 = (__int64 *)v5) != 0LL) )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v4, v5);
        v8 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace((__int64)v4, v6);
      }
      else
      {
        v8 = 0;
      }
      v3 = v8;
    }
    v2[1].TransitionLock = v3;
    HIDWORD(v2[1].RegionStart) = -1;
    ExpAddResourceToSystemResourceList(v2);
    __incgsdword(0x9098u);
    if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
      PerfLogExecutiveResourceInitialize(65544, (__int64)v2, 0, 0);
    v1 += 104LL;
    --v0;
  }
  while ( v0 );
  FsRtlInitializeTunnels();
  FsRtlInitializeFileLocks();
  FsRtlInitializeLargeMcbs();
  ExInitializePagedLookasideList(&FsRtlEcpListLookaside, 0LL, 0LL, 0, 0x18uLL, 0x6C655346u, 0);
  FsRtlpUncSemaphore.Header.Type = 5;
  FsRtlpUncSemaphore.Header.WaitListHead.Blink = &FsRtlpUncSemaphore.Header.WaitListHead;
  FsRtlpUncSemaphore.Header.WaitListHead.Flink = &FsRtlpUncSemaphore.Header.WaitListHead;
  FsRtlpUncSemaphore.Header.Size = 8;
  ValueName.Buffer = L"Win95TruncatedExtensions";
  FsRtlpUncSemaphore.Header.SignalState = 1;
  FsRtlpUncSemaphore.Limit = 0x7FFFFFFF;
  *(_DWORD *)&ValueName.Length = 3276848;
  if ( FsRtlGetCompatibilityModeValue(&ValueName, &v12) >= 0 && v12 )
    BYTE2(NlsMbCodePageTag) = 0;
  if ( (int)FsRtlInitializeWorkerThread() < 0 || (int)FsFilterInit() < 0 || (int)FsRtlInitializeSmssEvent() < 0 )
    return 0;
  FsRtlInitializeTieringHeat();
  FsRtlInitializeDedupChange();
  return (int)FsRtlInitializeOplockPerf() >= 0;
}
