/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x18010B7E4
 * Callers:
 *     RtlReportException @ 0x18010B740 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x18013A710 (RtlReportExceptionEx.c)
 * Callees:
 *     WerpIsDebugPortPresent @ 0x18010B838 (WerpIsDebugPortPresent.c)
 *     ZwTerminateProcess @ 0x18015F3C0 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x180161CD0 (ZwRaiseException.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException(ExceptionRecord, ContextRecord, 0);
    while ( (unsigned int)WerpIsDebugPortPresent() );
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
  }
}
