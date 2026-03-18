/*
 * XREFs of PopDripsWatchdogInitialize @ 0x140CD68EC
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
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopInitializeTimer @ 0x1407C8C18 (PopInitializeTimer.c)
 *     PopCapturePlatformRole @ 0x140B0E868 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x140B3B46C (PopIsDirectedDripsEnabled.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140CD6ACC (PopDripsWatchdogInitializeCallbackTimer.c)
 */

__int64 PopDripsWatchdogInitialize()
{
  $353D57E818BB6F967B4B818D974CF463 v0; // rax
  KSPIN_LOCK *p_Policy; // rdi
  unsigned __int16 *v2; // rax
  __int64 *v3; // rsi
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v5; // bx
  int v6; // edx
  int v7; // eax
  __int64 result; // rax
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int64)&PopAdaptiveStandbyLock.QuantumTarget < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&PopAdaptiveStandbyLock.QuantumTarget) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&PopAdaptiveStandbyLock.QuantumTarget, retaddr);
  }
  memset_0((void *)&PopAdaptiveStandbyLock.StackLimit, 0, 0x50uLL);
  v0.0 = 0LL;
  PopAdaptiveStandbyLock.InitialStack = &PopAdaptiveStandbyLock.QuantumTarget;
  PopAdaptiveStandbyLock.QuantumTarget = (unsigned __int64)&PopAdaptiveStandbyLock.QuantumTarget;
  PopAdaptiveStandbyLock.ThreadLock = 0LL;
  PopAdaptiveStandbyLock.CycleTime = 0LL;
  *(_QWORD *)&PopAdaptiveStandbyLock.SystemCallNumber = 0LL;
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
    v0.0 = ($3C37BCD2CC8A9A13CF8DF3DA08EBA37B)v5;
  }
  *($353D57E818BB6F967B4B818D974CF463 *)((char *)&PopAdaptiveStandbyLock.116 + 4) = v0;
  PopAdaptiveStandbyLock.MiscFlags = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&PopAdaptiveStandbyLock.QuantumTarget);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&PopAdaptiveStandbyLock.QuantumTarget, 0, 0);
  if ( !*(_DWORD *)&stru_140E66FF0.WaitBlockFill11[80] || !stru_140E66FF0.WaitBlockFill6[84] )
    goto LABEL_23;
  if ( PopIsDirectedDripsEnabled() )
  {
    v7 = PopCapturePlatformRole();
    if ( v7 != 2 && v7 != 8 )
      v6 |= 1u;
  }
  HIDWORD(PopAdaptiveStandbyLock.FirstArgument) = v6;
  result = PopDripsWatchdogInitializeCallbackTimer();
  if ( (int)result >= 0 )
  {
    if ( PopDripsWatchdogTimeout )
    {
      LODWORD(PopAdaptiveStandbyLock.NpxState) = PopDripsWatchdogTimeout;
      PopInitializeTimer(
        (__int64)&PopAdaptiveStandbyLock.WaitBlock[2],
        (__int64)PopDripsWatchdogTimerCallback,
        (__int64)&PopAdaptiveStandbyLock.QuantumTarget,
        (__int64)PopDripsWatchdogDiagnosticWorker,
        (__int64)&PopAdaptiveStandbyLock.QuantumTarget);
      HIDWORD(PopAdaptiveStandbyLock.NpxState) |= 1u;
    }
    LODWORD(PopAdaptiveStandbyLock.FirstArgument) |= 2u;
LABEL_23:
    result = 0LL;
    LODWORD(PopAdaptiveStandbyLock.FirstArgument) |= 1u;
  }
  return result;
}
