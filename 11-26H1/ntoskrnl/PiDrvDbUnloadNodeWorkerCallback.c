/*
 * XREFs of PiDrvDbUnloadNodeWorkerCallback @ 0x140B34450
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PnpDiagnosticTraceObject @ 0x140493A8C (PnpDiagnosticTraceObject.c)
 *     PiDrvDbUnloadNodeReset @ 0x1404FE490 (PiDrvDbUnloadNodeReset.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 */

void __fastcall PiDrvDbUnloadNodeWorkerCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx

  PiDrvDbUnloadNodeReset(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_BYTE *)(a1 + 488) )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseUnload_Start, (unsigned __int16 *)(a1 + 16));
    v3 = *(void **)(a1 + 72);
    if ( v3 )
    {
      ZwClose(v3);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    *(_WORD *)(a1 + 488) = 0;
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseUnload_Pend, (unsigned __int16 *)(a1 + 16));
    *(_QWORD *)(a1 + 464) = a1;
    *(_QWORD *)(a1 + 456) = PiDrvDbUnloadNodeWaitWorkerCallback;
    *(_QWORD *)(a1 + 440) = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 440), DelayedWorkQueue);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  KeLeaveCriticalRegion();
}
