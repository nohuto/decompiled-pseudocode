/*
 * XREFs of PsQuitNextProcessThread @ 0x140B046B0
 * Callers:
 *     ExpDebuggerWorker @ 0x140C1CD60 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
