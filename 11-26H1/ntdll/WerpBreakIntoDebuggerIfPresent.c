/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x18010BC94
 * Callers:
 *     RtlReportException @ 0x18010BBF0 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x18013A9A0 (RtlReportExceptionEx.c)
 * Callees:
 *     WerpIsDebugPortPresent @ 0x18010BCE8 (WerpIsDebugPortPresent.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x180161DD0 (ZwRaiseException.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(unsigned int *a1, __int64 a2, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException(a1, a2, 0LL);
    while ( (unsigned int)WerpIsDebugPortPresent() );
    ZwTerminateProcess(-1LL, *a1);
  }
}
