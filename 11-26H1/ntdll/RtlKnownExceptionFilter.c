/*
 * XREFs of RtlKnownExceptionFilter @ 0x1801062F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __cdecl RtlKnownExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return (ExceptionPointers->ExceptionRecord->ExceptionCode != -1073741420) - 1;
}
