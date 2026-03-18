/*
 * XREFs of FsRtlInitSystem @ 0x140CB8A6C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     FsFilterInit @ 0x1405B778C (FsFilterInit.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     FsRtlInitializeDedupChange @ 0x14078FB30 (FsRtlInitializeDedupChange.c)
 *     FsRtlInitializeTieringHeat @ 0x1407904F8 (FsRtlInitializeTieringHeat.c)
 *     ExInitializePagedLookasideList @ 0x140B31D30 (ExInitializePagedLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 *     FsRtlGetCompatibilityModeValue @ 0x140CB8904 (FsRtlGetCompatibilityModeValue.c)
 *     FsRtlInitializeSmssEvent @ 0x140CB8CA0 (FsRtlInitializeSmssEvent.c)
 *     FsRtlInitializeLargeMcbs @ 0x140CB8D9C (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeTunnels @ 0x140CB8E4C (FsRtlInitializeTunnels.c)
 *     FsRtlInitializeFileLocks @ 0x140CB8F3C (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeOplockPerf @ 0x140CB90F0 (FsRtlInitializeOplockPerf.c)
 *     FsRtlInitializeWorkerThread @ 0x140CB92D0 (FsRtlInitializeWorkerThread.c)
 */

bool FsRtlInitSystem()
{
  __int64 v0; // r15
  __int64 v1; // r14
  struct _SINGLE_LIST_ENTRY *v2; // rbx
  struct _SINGLE_LIST_ENTRY *v3; // rax
  KSPIN_LOCK *p_Policy; // rdi
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
    v2 = (struct _SINGLE_LIST_ENTRY *)(v1 + FsRtlPagingIoResources);
    if ( (unsigned __int64)(v1 + FsRtlPagingIoResources) < 0xFFFF800000000000uLL
      || MmDeterminePoolType(v1 + FsRtlPagingIoResources) == 256 )
    {
      ExpTraceLogBadResourceAddress((unsigned __int64)v2, retaddr);
    }
    memset_0(v2, 0, 0x68uLL);
    v2[1].Next = v2;
    v3 = 0LL;
    v2->Next = v2;
    v2[4].Next = 0LL;
    v2[5].Next = 0LL;
    v2[12].Next = 0LL;
    if ( (NtGlobalFlag & 0x2000) != 0 )
    {
      p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
      if ( NormalizationListLock.SchedulingGroup
        && (v5 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1),
            (v6 = (__int64 *)v5) != 0LL) )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v5);
        v8 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace((__int64)p_Policy, v6);
      }
      else
      {
        v8 = 0;
      }
      v3 = (struct _SINGLE_LIST_ENTRY *)v8;
    }
    v2[11].Next = v3;
    HIDWORD(v2[10].Next) = -1;
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
  LOBYTE(VslpReservedTransferLock.Padding[0]) = 5;
  VslpReservedTransferLock.Padding[2] = (unsigned __int64)&VslpReservedTransferLock.Padding[1];
  VslpReservedTransferLock.Padding[1] = (unsigned __int64)&VslpReservedTransferLock.Padding[1];
  BYTE2(VslpReservedTransferLock.Padding[0]) = 8;
  ValueName.Buffer = L"Win95TruncatedExtensions";
  HIDWORD(VslpReservedTransferLock.Padding[0]) = 1;
  LODWORD(VslpReservedTransferLock.Padding[3]) = 0x7FFFFFFF;
  *(_DWORD *)&ValueName.Length = 3276848;
  if ( FsRtlGetCompatibilityModeValue(&ValueName, &v12) >= 0 && v12 )
    BYTE2(NlsMbCodePageTag) = 0;
  if ( (int)FsRtlInitializeWorkerThread() < 0 || (int)FsFilterInit() < 0 || (int)FsRtlInitializeSmssEvent() < 0 )
    return 0;
  FsRtlInitializeTieringHeat();
  FsRtlInitializeDedupChange();
  return (int)FsRtlInitializeOplockPerf() >= 0;
}
