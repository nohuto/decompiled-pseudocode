/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x1406E4820
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeProcess @ 0x140203144 (KeForceResumeProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsTerminateProcess @ 0x14095690C (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x72506D4Du);
}
