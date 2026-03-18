/*
 * XREFs of PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1404FAFE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404E091C (PnpDiagnosticTraceObjectWithStatus.c)
 *     ZwWaitForSingleObject @ 0x140723470 (ZwWaitForSingleObject.c)
 */

void __fastcall PiDrvDbUnloadNodeWaitWorkerCallback(__int64 a1)
{
  NTSTATUS v2; // eax
  struct _KTHREAD *CurrentThread; // rdx
  int v4; // esi

  v2 = ZwWaitForSingleObject(*(HANDLE *)(a1 + 472), 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  v4 = v2;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( !*(_BYTE *)(a1 + 489) )
  {
    *(_BYTE *)(a1 + 489) = 1;
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseUnload_Stop, (unsigned __int16 *)(a1 + 16), v4);
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop, (unsigned __int16 *)(a1 + 16), v4);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  KeLeaveCriticalRegion();
}
