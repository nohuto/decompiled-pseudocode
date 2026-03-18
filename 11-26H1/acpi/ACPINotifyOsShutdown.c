/*
 * XREFs of ACPINotifyOsShutdown @ 0x140068BD0
 * Callers:
 *     ACPIRootEvent @ 0x14004A8E0 (ACPIRootEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPINotifyOsShutdown(void *a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( AcpiNotifyOsShutdownInProgress )
  {
    KeReleaseSpinLock(&AcpiPowerLock, v2);
  }
  else
  {
    AcpiNotifyOsShutdownInProgress = 1;
    KeReleaseSpinLock(&AcpiPowerLock, v2);
    AcpiShutdownWorkItem.Parameter = a1;
    AcpiShutdownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ACPINotifyOsShutdownWorker;
    AcpiShutdownWorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&AcpiShutdownWorkItem, DelayedWorkQueue);
  }
  return 0LL;
}
