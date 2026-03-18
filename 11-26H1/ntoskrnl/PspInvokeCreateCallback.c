/*
 * XREFs of PspInvokeCreateCallback @ 0x1407FC018
 * Callers:
 *     PsStartSiloMonitor @ 0x1407FBC40 (PsStartSiloMonitor.c)
 *     PspNotifyServerSiloCreation @ 0x1407FC0DC (PspNotifyServerSiloCreation.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1406C4A58 (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspInvokeCreateCallback(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  __int64 v4; // rdx
  unsigned int v5; // ebx

  v2 = (unsigned __int16 *)(a2 + 40);
  EtwTraceJobServerSiloMonitorCallback(0, a1, (unsigned __int16 *)(a2 + 40), 0);
  v5 = guard_dispatch_icall_no_overrides(a1, v4);
  EtwTraceJobServerSiloMonitorCallback(1, a1, v2, v5);
  return v5;
}
