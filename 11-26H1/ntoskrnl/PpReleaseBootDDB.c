/*
 * XREFs of PpReleaseBootDDB @ 0x140776E90
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1405257B0 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     SdbReleaseDatabase @ 0x1409E6F28 (SdbReleaseDatabase.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 PpReleaseBootDDB()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
  if ( PspSiloMonitorLock.TrapFrame )
  {
    SdbReleaseDatabase();
    PspSiloMonitorLock.TrapFrame = 0LL;
    ExFreePoolWithTag(*(PVOID *)&PspSiloMonitorLock.PriorityFloorSummary, 0);
    v1 = 0;
    *(_QWORD *)&PspSiloMonitorLock.PriorityFloorSummary = 0LL;
  }
  else
  {
    v1 = -1073741823;
  }
  if ( PspSiloMonitorLock.WaitBlock[2].WaitListEntry.Blink )
  {
    SdbReleaseDatabase();
    PspSiloMonitorLock.WaitBlock[2].WaitListEntry.Blink = 0LL;
    ExFreePoolWithTag(*(PVOID *)&PspSiloMonitorLock.AbCompletedIoQoSBoostCount, 0);
    *(_QWORD *)&PspSiloMonitorLock.AbCompletedIoQoSBoostCount = 0LL;
  }
  ExReleaseResourceLite(&PiDDBLock);
  KeLeaveCriticalRegion();
  return v1;
}
