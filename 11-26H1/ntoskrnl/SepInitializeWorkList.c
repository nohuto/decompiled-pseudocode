/*
 * XREFs of SepInitializeWorkList @ 0x140CDAB2C
 * Callers:
 *     SepInitializationPhase0 @ 0x140CDD1A0 (SepInitializationPhase0.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char SepInitializeWorkList()
{
  unsigned __int16 v0; // bx
  KSPIN_LOCK *p_Policy; // rdi
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

  if ( (unsigned __int64)&RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead, retaddr);
  }
  memset_0(&RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead, 0, 0x68uLL);
  RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead.Blink = &RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead;
  v0 = 0;
  RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead.Flink = &RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead;
  RtlpBootStatHandleLock.MutantListHead.Flink = 0LL;
  RtlpBootStatHandleLock.MutantListHead.Blink = 0LL;
  *(_QWORD *)&RtlpBootStatHandleLock.PriorityFloorCounts[16] = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup
      && (v2 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1),
          (v3 = (__int64 *)v2) != 0LL) )
    {
      RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v2);
      v5 = RecordedStackTraceIndex;
      if ( !RecordedStackTraceIndex )
        RtlStdReleaseStackTrace((__int64)p_Policy, v3);
    }
    else
    {
      v5 = 0;
    }
    *(_QWORD *)&RtlpBootStatHandleLock.PriorityFloorCounts[8] = v5;
  }
  else
  {
    *(_QWORD *)&RtlpBootStatHandleLock.PriorityFloorCounts[8] = 0LL;
  }
  *(_DWORD *)&RtlpBootStatHandleLock.PriorityFloorCounts[4] = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead, 0, 0);
  *(_QWORD *)&RtlpBootStatHandleLock.PriorityFloorCounts[24] = 0LL;
  RtlpBootStatHandleLock.SchedulerApc.SystemArgument2 = &RtlpBootStatHandleLock.SchedulerApcFill5[64];
  RtlpBootStatHandleLock.SchedulerApc.SystemArgument1 = &RtlpBootStatHandleLock.SchedulerApcFill5[64];
  *(_QWORD *)&RtlpBootStatHandleLock.SuspendEvent.Header.Lock = &RtlpBootStatHandleLock.SchedulerApcFill5[80];
  *(_QWORD *)&RtlpBootStatHandleLock.SchedulerApcFill5[80] = &RtlpBootStatHandleLock.SchedulerApcFill5[80];
  RtlpBootStatHandleLock.ReadTransferCount = (__int64)SepAdtDetermineInsertQueue;
  LOWORD(RtlpBootStatHandleLock.OtherTransferCount) = 3;
  RtlpBootStatHandleLock.WriteTransferCount = (__int64)ExFreePool;
  if ( (unsigned __int64)&RtlpBootStatHandleLock.RelativeTimerBias < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&RtlpBootStatHandleLock.RelativeTimerBias) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&RtlpBootStatHandleLock.RelativeTimerBias, retaddr);
  }
  memset_0(&RtlpBootStatHandleLock.RelativeTimerBias, 0, 0x68uLL);
  *(_QWORD *)&RtlpBootStatHandleLock.Timer.Header.Lock = &RtlpBootStatHandleLock.RelativeTimerBias;
  RtlpBootStatHandleLock.RelativeTimerBias = (unsigned __int64)&RtlpBootStatHandleLock.RelativeTimerBias;
  RtlpBootStatHandleLock.Timer.DueTime.QuadPart = 0LL;
  RtlpBootStatHandleLock.Timer.TimerListEntry.Flink = 0LL;
  RtlpBootStatHandleLock.WaitBlock[0].Thread = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v6 = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup )
    {
      v7 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1);
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
    *(_QWORD *)&RtlpBootStatHandleLock.WaitBlockFill11[16] = v0;
  }
  else
  {
    *(_QWORD *)&RtlpBootStatHandleLock.WaitBlockFill11[16] = 0LL;
  }
  *(_DWORD *)&RtlpBootStatHandleLock.WaitBlockFill11[12] = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&RtlpBootStatHandleLock.RelativeTimerBias);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&RtlpBootStatHandleLock.RelativeTimerBias, 0, 0);
  result = 1;
  *(_QWORD *)&RtlpBootStatHandleLock.WaitBlockFill11[112] = ExFreePool;
  RtlpBootStatHandleLock.WaitListEntry.Blink = &RtlpBootStatHandleLock.WaitListEntry;
  RtlpBootStatHandleLock.WaitListEntry.Flink = &RtlpBootStatHandleLock.WaitListEntry;
  *(_WORD *)&RtlpBootStatHandleLock.WaitBlockFill11[120] = 1;
  return result;
}
