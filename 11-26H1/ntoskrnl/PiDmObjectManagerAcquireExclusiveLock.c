/*
 * XREFs of PiDmObjectManagerAcquireExclusiveLock @ 0x1409D92BC
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D683C (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1407DE0A0 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407DE3A0 (PopDripsWatchdogDiagnosticWorker.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1409D8EB0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1409D8F40 (PiDmAddCacheReferenceForObject.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140A3C690 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x140A3CCE0 (PopDripsWatchdogStopWatchdog.c)
 *     PiDmListAddObjectWorker @ 0x140AF3F20 (PiDmListAddObjectWorker.c)
 *     PiDmListRemoveObjectWorker @ 0x140AF4068 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PiDmObjectManagerAcquireExclusiveLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(a1, 1u);
}
