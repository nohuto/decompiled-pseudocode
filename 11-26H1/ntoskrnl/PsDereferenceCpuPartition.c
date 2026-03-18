/*
 * XREFs of PsDereferenceCpuPartition @ 0x1407F28B8
 * Callers:
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x140463968 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405F35E0 (KeAssignCpuPartitionsToProcess.c)
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsDereferenceCpuPartition(void *a1, ULONG a2)
{
  return ObfDereferenceObjectWithTag(a1, a2);
}
