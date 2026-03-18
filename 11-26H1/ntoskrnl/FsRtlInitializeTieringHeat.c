/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x1407904F8
 * Callers:
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  *(_QWORD *)&VslpReservedTransferLock.AbCompletedIoQoSBoostCount = &VslpReservedTransferLock.PriorityFloorSummary;
  *(_QWORD *)&VslpReservedTransferLock.PriorityFloorSummary = &VslpReservedTransferLock.PriorityFloorSummary;
  return ExInitializeResourceLite((PERESOURCE)&VslpReservedTransferLock.ForegroundLossTime);
}
