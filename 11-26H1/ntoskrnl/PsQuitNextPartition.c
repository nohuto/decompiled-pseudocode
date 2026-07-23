/*
 * XREFs of PsQuitNextPartition @ 0x140619954
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x140845B80 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x140C13640 (MiMirrorBrownPhase.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
