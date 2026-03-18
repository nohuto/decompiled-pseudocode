/*
 * XREFs of KiReleaseCpuPartitionAssignmentLock @ 0x140463A68
 * Callers:
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x140463968 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405E5A40 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405F35E0 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 */

void __fastcall KiReleaseCpuPartitionAssignmentLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  KxReleaseSpinLock(&KiCpuPartitionAssignmentLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v1);
  __writecr8(v1);
}
