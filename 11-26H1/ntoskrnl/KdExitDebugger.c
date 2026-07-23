/*
 * XREFs of KdExitDebugger @ 0x140C18008
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1404E9CA0 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x14050255C (KdpReport.c)
 *     KiTpWriteMemory @ 0x1405FF1C4 (KiTpWriteMemory.c)
 *     KdpCloseRemoteFile @ 0x140C19480 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x140C196D0 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140C19AD0 (KdpReadRemoteFile.c)
 *     KdSendTraceData @ 0x140C19D0C (KdSendTraceData.c)
 *     KdpCommandString @ 0x140C1BC54 (KdpCommandString.c)
 *     KdpPrint @ 0x140C1BD30 (KdpPrint.c)
 *     KdpPrompt @ 0x140C1BEBC (KdpPrompt.c)
 *     KdpSymbol @ 0x140C1C018 (KdpSymbol.c)
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 *     KdpSetOwedBreakpoints @ 0x140C1D5F0 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1403087F0 (KeInsertQueueDpc.c)
 *     PoIsHibernateInProgress @ 0x140445D50 (PoIsHibernateInProgress.c)
 *     VfIsVerifierEnabled @ 0x1404F5560 (VfIsVerifierEnabled.c)
 *     KeThawExecution @ 0x1404FBB50 (KeThawExecution.c)
 *     KeRestoreSupervisorState @ 0x1405EF3C0 (KeRestoreSupervisorState.c)
 *     ExQueueDebuggerWorker @ 0x1406D4A78 (ExQueueDebuggerWorker.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfNotifyVerifierOfEvent @ 0x140C27350 (VfNotifyVerifierOfEvent.c)
 */

__int64 __fastcall KdExitDebugger(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // bl
  _DWORD *v4; // r9
  __int64 v5; // r10
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  __int64 result; // rax

  v3 = a1;
  KdEnteredDebugger = 0;
  if ( !(_BYTE)KdDebuggerNotPresent )
    KdDebuggerWasEverPresent = 1;
  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v4 = (_DWORD *)KdLogBuffer[v2];
  if ( v4 )
  {
    v5 = (unsigned int)*v4;
    v6 = 4 * (v5 + 1);
    v7 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v7) << 32;
    a1 = v4[v6 + 2] & 4;
    *(_QWORD *)&v4[v6 + 2] = a1 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u | ((a2 | (unsigned int)v7)
                                                                                          - *(_QWORD *)&v4[v6]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v5 == 254 )
      *v4 = 0;
    else
      *v4 = v5 + 1;
  }
  guard_dispatch_icall_no_overrides(a1, a2);
  if ( ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) == 0 && !PoAllProcIntrDisabled )
  {
    KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_140E5EE80);
    qword_140E5EE80 = 0LL;
  }
  KeThawExecution(v3);
  if ( KdTimerStop )
    KdTimerStart = __rdtsc();
  else
    KdTimerStart = 0LL;
  if ( !PoIsHibernateInProgress()
    && ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) == 0
    && !KdDisableTimerReset )
  {
    if ( !_InterlockedExchange(&KdpTimeSlipPending, 2) )
      KeInsertQueueDpc(&KdpTimeSlipDpc, 0LL, 0LL);
    ExQueueDebuggerWorker();
  }
  result = VfIsVerifierEnabled();
  if ( (_DWORD)result )
    return VfNotifyVerifierOfEvent(4LL);
  return result;
}
