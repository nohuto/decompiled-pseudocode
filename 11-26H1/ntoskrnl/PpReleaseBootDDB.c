/*
 * XREFs of PpReleaseBootDDB @ 0x140779D38
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x140527E20 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SdbReleaseDatabase @ 0x1409D5F00 (SdbReleaseDatabase.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
    ExFreePoolWithTag(*(PVOID *)&PspSiloMonitorLock.AbCompletedIoQoSBoostCount, 0);
    v1 = 0;
    *(_QWORD *)&PspSiloMonitorLock.AbCompletedIoQoSBoostCount = 0LL;
  }
  else
  {
    v1 = -1073741823;
  }
  if ( PspSiloMonitorLock.WaitBlock[2].WaitListEntry.Blink )
  {
    SdbReleaseDatabase();
    PspSiloMonitorLock.WaitBlock[2].WaitListEntry.Blink = 0LL;
    ExFreePoolWithTag(*(PVOID *)&PspSiloMonitorLock.PriorityFloorSummary, 0);
    *(_QWORD *)&PspSiloMonitorLock.PriorityFloorSummary = 0LL;
  }
  ExReleaseResourceLite(&PiDDBLock);
  KeLeaveCriticalRegion();
  return v1;
}
