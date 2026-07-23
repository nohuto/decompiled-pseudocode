/*
 * XREFs of NtContinue @ 0x14072BFB0
 * Callers:
 *     DifNtContinueWrapper @ 0x1406732F0 (DifNtContinueWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  return NtContinueEx(ContextRecord, (PVOID)TestAlert);
}
