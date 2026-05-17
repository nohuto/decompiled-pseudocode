/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x180070E00
 * Callers:
 *     RtlReportCriticalFailure @ 0x18006F0F8 (RtlReportCriticalFailure.c)
 *     RtlAssert @ 0x180070F80 (RtlAssert.c)
 *     RtlQueryProcessLockInformation @ 0x180091A70 (RtlQueryProcessLockInformation.c)
 *     RtlpReportHeapFailure @ 0x1800D229C (RtlpReportHeapFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011F2F0 (RtlUnhandledExceptionFilter2.c)
 * Callees:
 *     <none>
 */

unsigned __int8 RtlIsAnyDebuggerPresent()
{
  unsigned __int8 result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
