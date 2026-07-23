/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x1800D8B80
 * Callers:
 *     <none>
 * Callees:
 *     RtlEncodePointer @ 0x1800D8BA0 (RtlEncodePointer.c)
 */

void __cdecl RtlSetUnhandledExceptionFilter(PRTLP_UNHANDLED_EXCEPTION_FILTER UnhandledExceptionFilter)
{
  RtlpUnhandledExceptionFilter = RtlEncodePointer(UnhandledExceptionFilter);
}
