/*
 * XREFs of PsQuitNextPartition @ 0x140616964
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x14083F940 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x140C0D430 (MiMirrorBrownPhase.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
