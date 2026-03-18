/*
 * XREFs of PopInitializeAdpm @ 0x140CD671C
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline @ 0x140610A0C (Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopExtendConnectionState @ 0x1407DDD34 (PopExtendConnectionState.c)
 *     ExSubscribeWnfStateChange @ 0x140948A90 (ExSubscribeWnfStateChange.c)
 *     PopAdaptiveInitializeBootContext @ 0x140CD6684 (PopAdaptiveInitializeBootContext.c)
 */

__int64 PopInitializeAdpm()
{
  __int64 v0; // rax
  KSPIN_LOCK *p_Policy; // rdi
  unsigned __int16 *v2; // rax
  __int64 *v3; // rsi
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v5; // bx
  __int64 result; // rax
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]
  char v8; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int64)&PopAdaptiveStandbyLock.AbCompletedIoQoSBoostCount < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&PopAdaptiveStandbyLock.AbCompletedIoQoSBoostCount) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&PopAdaptiveStandbyLock.AbCompletedIoQoSBoostCount, retaddr);
  }
  memset_0(&PopAdaptiveStandbyLock.880, 0, 0x50uLL);
  v0 = 0LL;
  *(_QWORD *)&PopAdaptiveStandbyLock.ForegroundLossTime = &PopAdaptiveStandbyLock.AbCompletedIoQoSBoostCount;
  *(_QWORD *)&PopAdaptiveStandbyLock.AbCompletedIoQoSBoostCount = &PopAdaptiveStandbyLock.AbCompletedIoQoSBoostCount;
  PopAdaptiveStandbyLock.ReadOperationCount = 0LL;
  PopAdaptiveStandbyLock.WriteOperationCount = 0LL;
  PopAdaptiveStandbyLock.TracingPrivate[0] = 0LL;
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
    v0 = v5;
  }
  *(_QWORD *)&PopAdaptiveStandbyLock.ThreadTimerDelay = v0;
  HIDWORD(PopAdaptiveStandbyLock.QueuedScb) = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&PopAdaptiveStandbyLock.AbCompletedIoQoSBoostCount);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&PopAdaptiveStandbyLock.AbCompletedIoQoSBoostCount, 0, 0);
  memset_0(&PopAdaptiveStandbyLock.ThreadListEntry.Blink, 0, 0x50uLL);
  *(_DWORD *)&PopAdaptiveStandbyLock.AbWaitEntryCount = -1;
  PopAdaptiveStandbyLock.SecureThreadCookie = 3;
  *(_DWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[64] = 0;
  PopAdaptiveStandbyLock.SchedulerApc.NormalContext = 0LL;
  PopExtendConnectionState(0);
  if ( (unsigned int)Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline() )
  {
    PopAdaptiveStandbyLock.ThreadListEntry.Flink = 0LL;
    PopAdaptiveStandbyLock.SuspendEvent.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PopAdaptiveUpdateIdleContextWorker;
    *(_QWORD *)&PopAdaptiveStandbyLock.SuspendEvent.Header.Lock = 0LL;
  }
  result = ExSubscribeWnfStateChange((__int64)&v8, (__int64)&WNF_HPM_GLOBAL_HUMAN_PRESENCE_STATE);
  if ( !WheapPfaLock.CurrentRunTime )
    return PopAdaptiveInitializeBootContext();
  return result;
}
