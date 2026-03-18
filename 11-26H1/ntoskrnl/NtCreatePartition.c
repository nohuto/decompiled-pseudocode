/*
 * XREFs of NtCreatePartition @ 0x1407FD490
 * Callers:
 *     DifNtCreatePartitionWrapper @ 0x140672470 (DifNtCreatePartitionWrapper.c)
 * Callees:
 *     PsCreatePartition @ 0x1407FDA4C (PsCreatePartition.c)
 */

__int64 __fastcall NtCreatePartition(int a1, int a2, int a3, int a4)
{
  return PsCreatePartition(a1, a2, a3, a4, KeGetCurrentThread()->PreviousMode, 0);
}
