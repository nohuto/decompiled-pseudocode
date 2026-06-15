/*
 * XREFs of __raise_securityfailure @ 0x14004A268
 * Callers:
 *     __report_gsfailure @ 0x14004A2B0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
