/*
 * XREFs of __raise_securityfailure @ 0x180126728
 * Callers:
 *     __report_securityfailure @ 0x1801268EC (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x18011F080 (RtlUnhandledExceptionFilter.c)
 */

NTSTATUS __fastcall _raise_securityfailure(_EXCEPTION_POINTERS *a1)
{
  RtlUnhandledExceptionFilter(a1);
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
