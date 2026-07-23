/*
 * XREFs of PsReferenceCpuPartition @ 0x1407F8430
 * Callers:
 *     KeAssignCpuPartitionsToProcess @ 0x1405F5FA0 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsReferenceCpuPartition(void *a1, ULONG a2)
{
  return ObfReferenceObjectWithTag(a1, a2);
}
