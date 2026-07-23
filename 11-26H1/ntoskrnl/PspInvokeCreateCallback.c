/*
 * XREFs of PspInvokeCreateCallback @ 0x140801A48
 * Callers:
 *     PsStartSiloMonitor @ 0x140801670 (PsStartSiloMonitor.c)
 *     PspNotifyServerSiloCreation @ 0x140801B0C (PspNotifyServerSiloCreation.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1406C8698 (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
