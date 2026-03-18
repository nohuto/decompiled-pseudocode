/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x1405185CC
 * Callers:
 *     KdInitializeDebuggerDataBlock @ 0x140C1328C (KdInitializeDebuggerDataBlock.c)
 * Callees:
 *     <none>
 */

_KPROCESS **MmGetPagedPoolCommitPointer()
{
  return &stru_140E36558.ApcState.Process;
}
