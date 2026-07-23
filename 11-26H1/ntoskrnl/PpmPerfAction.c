/*
 * XREFs of PpmPerfAction @ 0x140254C00
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyProcessorState @ 0x1402545E8 (PpmPerfApplyProcessorState.c)
 *     PpmParkReportUnparkedCore @ 0x140254CCC (PpmParkReportUnparkedCore.c)
 *     PpmCheckContinueExecution @ 0x140254D58 (PpmCheckContinueExecution.c)
 *     PpmParkReportParkedCore @ 0x140254E74 (PpmParkReportParkedCore.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140254FC0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmParkReportSoftParkChange @ 0x140420608 (PpmParkReportSoftParkChange.c)
 *     PpmParkReportForceParkChange @ 0x140420758 (PpmParkReportForceParkChange.c)
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
  if ( _InterlockedExchangeAdd(&PpmCheckActionCount, 0xFFFFFFFF) == 1 )
    PpmCheckContinueExecution(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
}
