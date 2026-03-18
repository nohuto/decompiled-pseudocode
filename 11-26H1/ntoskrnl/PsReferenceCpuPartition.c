/*
 * XREFs of PsReferenceCpuPartition @ 0x1407F28D0
 * Callers:
 *     KeAssignCpuPartitionsToProcess @ 0x1405F35E0 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsReferenceCpuPartition(void *a1, ULONG a2)
{
  return ObfReferenceObjectWithTag(a1, a2);
}
