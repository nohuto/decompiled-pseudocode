/*
 * XREFs of PspInvokeTerminateCallback @ 0x1407FC07C
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407EEA70 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsStartSiloMonitor @ 0x1407FBC40 (PsStartSiloMonitor.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1406C4A58 (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __fastcall PspInvokeTerminateCallback(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx

  EtwTraceJobServerSiloMonitorCallback(2, a1, (unsigned __int16 *)(a2 + 40), 0);
  guard_dispatch_icall_no_overrides(a1, v4);
  return EtwTraceJobServerSiloMonitorCallback(3, a1, (unsigned __int16 *)(a2 + 40), 0);
}
