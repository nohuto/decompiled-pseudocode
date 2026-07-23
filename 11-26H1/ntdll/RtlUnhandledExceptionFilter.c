/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x18011F080
 * Callers:
 *     __raise_securityfailure @ 0x180126728 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x180126750 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

LONG __cdecl RtlUnhandledExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
}
