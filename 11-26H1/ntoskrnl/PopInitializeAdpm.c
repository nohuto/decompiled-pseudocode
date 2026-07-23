/*
 * XREFs of PopInitializeAdpm @ 0x140CDCA70
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline @ 0x140613CC8 (Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopExtendConnectionState @ 0x1407E2364 (PopExtendConnectionState.c)
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 *     PopAdaptiveInitializeBootContext @ 0x140CDC9D8 (PopAdaptiveInitializeBootContext.c)
 */

NTSTATUS PopInitializeAdpm()
{
  ULONG_PTR v0; // rax
  KSPIN_LOCK *v1; // rdi
  unsigned __int16 *v2; // rax
  __int64 *v3; // rsi
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v5; // bx
  NTSTATUS result; // eax
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]
  char v8; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int64)&PopAdpmLock < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&PopAdpmLock) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&PopAdpmLock, retaddr);
  }
  memset_0(&PopAdpmLock.OwnerTable, 0, 0x50uLL);
  v0 = 0LL;
  PopAdpmLock.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&PopAdpmLock;
  PopAdpmLock.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&PopAdpmLock;
  PopAdpmLock.SharedWaiters = 0LL;
  PopAdpmLock.ExclusiveWaiters = 0LL;
  PopAdpmLock.SpinLock = 0LL;
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
    v0 = v5;
  }
  PopAdpmLock.CreatorBackTraceIndex = v0;
  HIDWORD(PopAdpmLock.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&PopAdpmLock);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&PopAdpmLock, 0, 0);
  memset_0(&PopAdaptiveContext, 0, 0x50uLL);
  dword_140F0C078 = -1;
  dword_140F0C07C = 3;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  PopExtendConnectionState(0);
  if ( (unsigned int)Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline() )
  {
    PopAdaptiveUpdateIdleContextWorkItem.Parameter = 0LL;
    PopAdaptiveUpdateIdleContextWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopAdaptiveUpdateIdleContextWorker;
    PopAdaptiveUpdateIdleContextWorkItem.List.Flink = 0LL;
  }
  result = ExSubscribeWnfStateChange((__int64)&v8, (__int64)&WNF_HPM_GLOBAL_HUMAN_PRESENCE_STATE);
  if ( !LODWORD(WheapPfaLock.StateSaveArea) )
    return PopAdaptiveInitializeBootContext();
  return result;
}
