/*
 * XREFs of ViShutdownWatchdogExecuteDpc @ 0x140B84EA0
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 *     ViShutdownScheduleWatchdog @ 0x140B84E20 (ViShutdownScheduleWatchdog.c)
 */

void __fastcall ViShutdownWatchdogExecuteDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // edx

  v4 = ++ViShutdownTimeoutCount;
  if ( VfZeroAllPagesRunning != 1 || v4 >= 4 )
  {
    if ( !EtwpStopTraceCount || EtwpStopTraceCount == ViEtwLastStopTraceCount )
    {
      if ( v4 <= 1 )
        CarReportRuleViolationFromNt(196, 277LL, VfShutdownThread, 0LL, 0LL, 4u, 0LL);
      else
        _InterlockedExchange(&ViIrqlTrimAndLog, 0);
    }
    else
    {
      ViEtwLastStopTraceCount = EtwpStopTraceCount;
    }
  }
  ViShutdownScheduleWatchdog();
}
