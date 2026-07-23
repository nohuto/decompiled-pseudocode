/*
 * XREFs of PsDereferenceCpuPartition @ 0x1407F8418
 * Callers:
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14045C928 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405F5FA0 (KeAssignCpuPartitionsToProcess.c)
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsDereferenceCpuPartition(void *a1, ULONG a2)
{
  return ObfDereferenceObjectWithTag(a1, a2);
}
