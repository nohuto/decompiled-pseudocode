/*
 * XREFs of PopDripsWatchdogInitialize @ 0x140CDCC40
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
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopInitializeTimer @ 0x1407CBCB8 (PopInitializeTimer.c)
 *     PopCapturePlatformRole @ 0x140B100A0 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x140B3D6EC (PopIsDirectedDripsEnabled.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140CDCE20 (PopDripsWatchdogInitializeCallbackTimer.c)
 */

__int64 PopDripsWatchdogInitialize()
{
  ULONG_PTR v0; // rax
  KSPIN_LOCK *v1; // rdi
  unsigned __int16 *v2; // rax
  __int64 *v3; // rsi
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v5; // bx
  int v6; // edx
  int v7; // eax
  __int64 result; // rax
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int64)&PopDripsWatchdogContext < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&PopDripsWatchdogContext) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&PopDripsWatchdogContext, retaddr);
  }
  memset_0(&PopDripsWatchdogContext.OwnerTable, 0, 0x50uLL);
  v0 = 0LL;
  PopDripsWatchdogContext.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&PopDripsWatchdogContext;
  PopDripsWatchdogContext.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&PopDripsWatchdogContext;
  PopDripsWatchdogContext.SharedWaiters = 0LL;
  PopDripsWatchdogContext.ExclusiveWaiters = 0LL;
  PopDripsWatchdogContext.SpinLock = 0LL;
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
  PopDripsWatchdogContext.CreatorBackTraceIndex = v0;
  HIDWORD(PopDripsWatchdogContext.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&PopDripsWatchdogContext);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&PopDripsWatchdogContext, 0, 0);
  if ( !*(_DWORD *)&stru_140E67200.WaitBlockFill11[88] || !stru_140E67200.WaitBlockFill6[80] )
    goto LABEL_23;
  if ( PopIsDirectedDripsEnabled() )
  {
    v7 = PopCapturePlatformRole();
    if ( v7 != 2 && v7 != 8 )
      v6 |= 1u;
  }
  dword_140F0BDAC = v6;
  result = PopDripsWatchdogInitializeCallbackTimer();
  if ( (int)result >= 0 )
  {
    if ( PopDripsWatchdogTimeout )
    {
      dword_140F0BF70 = PopDripsWatchdogTimeout;
      PopInitializeTimer(
        (__int64)&unk_140F0BEC0,
        (__int64)PopDripsWatchdogTimerCallback,
        (__int64)&PopDripsWatchdogContext,
        (__int64)PopDripsWatchdogDiagnosticWorker,
        (__int64)&PopDripsWatchdogContext);
      dword_140F0BF74 |= 1u;
    }
    dword_140F0BDA8 |= 2u;
LABEL_23:
    result = 0LL;
    dword_140F0BDA8 |= 1u;
  }
  return result;
}
