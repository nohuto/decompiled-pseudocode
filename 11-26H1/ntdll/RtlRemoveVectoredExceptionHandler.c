/*
 * XREFs of RtlRemoveVectoredExceptionHandler @ 0x1800DFA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlRemoveVectoredExceptionHandler(PVOID Handle)
{
  return RtlpRemoveVectoredHandler(Handle, 0LL);
}
