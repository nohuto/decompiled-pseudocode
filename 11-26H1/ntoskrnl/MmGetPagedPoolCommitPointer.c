/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x14051203C
 * Callers:
 *     KdInitializeDebuggerDataBlock @ 0x140C1928C (KdInitializeDebuggerDataBlock.c)
 * Callees:
 *     <none>
 */

_KPROCESS **MmGetPagedPoolCommitPointer()
{
  return &stru_140E366D8.ApcState.Process;
}
