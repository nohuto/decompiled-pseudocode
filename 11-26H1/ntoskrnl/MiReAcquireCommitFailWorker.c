/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x1406E94D0
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeProcess @ 0x140203224 (KeForceResumeProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsTerminateProcess @ 0x14094A334 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x72506D4Du);
}
