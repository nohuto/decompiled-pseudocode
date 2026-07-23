/*
 * XREFs of SepInitializeWorkList @ 0x140CE0EAC
 * Callers:
 *     SepInitializationPhase0 @ 0x140CE3538 (SepInitializationPhase0.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char SepInitializeWorkList()
{
  unsigned __int16 v0; // bx
  KSPIN_LOCK *v1; // rdi
  unsigned __int16 *v2; // rax
  __int64 *v3; // rbp
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v5; // si
  KSPIN_LOCK *v6; // rdi
  unsigned __int16 *v7; // rax
  __int64 *v8; // rbp
  int v9; // esi
  char result; // al
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int64)&RtlpBootStatHandleLock.MutantListHead.Blink < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&RtlpBootStatHandleLock.MutantListHead.Blink) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&RtlpBootStatHandleLock.MutantListHead.Blink, retaddr);
  }
  memset_0(&RtlpBootStatHandleLock.MutantListHead.Blink, 0, 0x68uLL);
  *(_QWORD *)&RtlpBootStatHandleLock.AbWaitEntryCount = &RtlpBootStatHandleLock.MutantListHead.Blink;
  v0 = 0;
  RtlpBootStatHandleLock.MutantListHead.Blink = (struct _LIST_ENTRY *)&RtlpBootStatHandleLock.MutantListHead.Blink;
  RtlpBootStatHandleLock.IoSelfBoostsEntry.Next = 0LL;
  *(_QWORD *)RtlpBootStatHandleLock.PriorityFloorCounts = 0LL;
  RtlpBootStatHandleLock.GlobalForegroundListEntry.Flink = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v1 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags
      && (v2 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1),
          (v3 = (__int64 *)v2) != 0LL) )
    {
      RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v1, v2);
      v5 = RecordedStackTraceIndex;
      if ( !RecordedStackTraceIndex )
        RtlStdReleaseStackTrace((__int64)v1, v3);
    }
    else
    {
      v5 = 0;
    }
    *(_QWORD *)&RtlpBootStatHandleLock.ForegroundLossTime = v5;
  }
  else
  {
    *(_QWORD *)&RtlpBootStatHandleLock.ForegroundLossTime = 0LL;
  }
  *(_DWORD *)&RtlpBootStatHandleLock.KeReferenceCount = -1;
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&RtlpBootStatHandleLock.MutantListHead.Blink);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&RtlpBootStatHandleLock.MutantListHead.Blink, 0, 0);
  RtlpBootStatHandleLock.InGlobalForegroundList = 0LL;
  RtlpBootStatHandleLock.ThreadListEntry.Flink = (struct _LIST_ENTRY *)&RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead.Blink;
  RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead.Blink;
  RtlpBootStatHandleLock.MutantListHead.Flink = (struct _LIST_ENTRY *)&RtlpBootStatHandleLock.ThreadListEntry.Blink;
  RtlpBootStatHandleLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)&RtlpBootStatHandleLock.ThreadListEntry.Blink;
  RtlpBootStatHandleLock.TracingPrivate[0] = (unsigned __int64)SepAdtDetermineInsertQueue;
  LOWORD(RtlpBootStatHandleLock.AbWaitObject) = 3;
  RtlpBootStatHandleLock.SchedulerAssist = ExFreePool;
  if ( (unsigned __int64)&RtlpBootStatHandleLock.WaitBlock[1] < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&RtlpBootStatHandleLock.WaitBlock[1]) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&RtlpBootStatHandleLock.WaitBlock[1], retaddr);
  }
  memset_0(&RtlpBootStatHandleLock.WaitBlockFill11[48], 0, 0x68uLL);
  RtlpBootStatHandleLock.WaitBlock[1].WaitListEntry.Blink = &RtlpBootStatHandleLock.WaitBlock[1].WaitListEntry;
  RtlpBootStatHandleLock.WaitBlock[1].WaitListEntry.Flink = &RtlpBootStatHandleLock.WaitBlock[1].WaitListEntry;
  *(_OWORD *)&RtlpBootStatHandleLock.WaitBlockFill11[80] = 0uLL;
  RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v6 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags )
    {
      v7 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1);
      v8 = (__int64 *)v7;
      if ( v7 )
      {
        v9 = RtlpStdGetRecordedStackTraceIndex(v6, v7);
        if ( !v9 )
          RtlStdReleaseStackTrace((__int64)v6, v8);
      }
      else
      {
        LOWORD(v9) = 0;
      }
      v0 = v9;
    }
    RtlpBootStatHandleLock.WaitBlock[2].SparePtr = (PVOID)v0;
  }
  else
  {
    RtlpBootStatHandleLock.WaitBlock[2].SparePtr = 0LL;
  }
  *(_DWORD *)&RtlpBootStatHandleLock.WaitBlockFill11[132] = -1;
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&RtlpBootStatHandleLock.WaitBlockFill11[48]);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&RtlpBootStatHandleLock.WaitBlock[1], 0, 0);
  result = 1;
  RtlpBootStatHandleLock.UserAffinity = (_KAFFINITY_EX *)ExFreePool;
  RtlpBootStatHandleLock.WaitBlock[0].Thread = (struct _KTHREAD *)&RtlpBootStatHandleLock.WaitBlockFill11[16];
  *(_QWORD *)&RtlpBootStatHandleLock.WaitBlockFill11[16] = &RtlpBootStatHandleLock.WaitBlockFill11[16];
  RtlpBootStatHandleLock.UserAffinityPrimaryGroup = 1;
  return result;
}
