/*
 * XREFs of KiAcquireCpuPartitionAssignmentLock @ 0x140463A18
 * Callers:
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x140463968 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405E5A40 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405F35E0 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiAcquireCpuPartitionAssignmentLock(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rdi
  unsigned __int8 CurrentIrql; // bl

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  *v1 = CurrentIrql;
  KxAcquireSpinLock(&KiCpuPartitionAssignmentLock);
}
