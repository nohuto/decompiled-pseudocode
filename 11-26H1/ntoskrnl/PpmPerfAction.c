/*
 * XREFs of PpmPerfAction @ 0x1402532A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyProcessorState @ 0x140252C88 (PpmPerfApplyProcessorState.c)
 *     PpmParkReportUnparkedCore @ 0x14025336C (PpmParkReportUnparkedCore.c)
 *     PpmCheckContinueExecution @ 0x1402533F8 (PpmCheckContinueExecution.c)
 *     PpmParkReportParkedCore @ 0x140253514 (PpmParkReportParkedCore.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140253660 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmParkReportSoftParkChange @ 0x14042BF38 (PpmParkReportSoftParkChange.c)
 *     PpmParkReportForceParkChange @ 0x14042C088 (PpmParkReportForceParkChange.c)
 */

void __fastcall PpmPerfAction(
        struct _KDPC *Dpc,
        struct _KPRCB *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v5; // bl
  _PROC_PERF_CONSTRAINT *Constraint; // rax

  v5 = _InterlockedExchange(&DeferredContext->PowerState.PerfActionMask, 0);
  if ( (v5 & 1) != 0 )
    PpmPerfSnapDeliveredPerformance(&DeferredContext->PowerState.CheckContext, 0LL, 0LL);
  if ( (v5 & 2) != 0 )
    PpmParkReportUnparkedCore(DeferredContext, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 4) != 0 )
  {
    Constraint = DeferredContext->PowerState.CheckContext.Constraint;
    if ( Constraint->Force )
    {
      Constraint->Force = 0;
      PpmPerfApplyProcessorState(DeferredContext, 1);
    }
    PpmPerfApplyProcessorState(DeferredContext, 0);
  }
  if ( (v5 & 8) != 0 )
    PpmParkReportParkedCore(DeferredContext);
  if ( (v5 & 0x20) != 0 )
    PpmParkReportForceParkChange(DeferredContext);
  if ( (v5 & 0x10) != 0 )
    PpmParkReportSoftParkChange(DeferredContext);
  if ( (v5 & 0x40) != 0 )
    DeferredContext->PowerState.IdlePolicy.ForceLightIdle = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&PopSleepstudySessionLock.ApcStateFill[8], 0xFFFFFFFF) == 1 )
    PpmCheckContinueExecution(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
}
