/*
 * XREFs of RtlAddVectoredExceptionHandler @ 0x180102170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddVectoredExceptionHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  return RtlpAddVectoredHandler(First, Handler, 0);
}
