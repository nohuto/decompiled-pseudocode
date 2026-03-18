/*
 * XREFs of PsQuitNextProcessThread @ 0x140B02980
 * Callers:
 *     ExpDebuggerWorker @ 0x140C16D60 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
