/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x180091250
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x180074010 (RtlQueryProcessLockInformation.c)
 *     RtlReportCriticalFailure @ 0x18008F548 (RtlReportCriticalFailure.c)
 *     RtlAssert @ 0x1800913D0 (RtlAssert.c)
 *     RtlpReportHeapFailure @ 0x1800CFA0C (RtlpReportHeapFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011F0A0 (RtlUnhandledExceptionFilter2.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsAnyDebuggerPresent(void)
{
  BOOLEAN result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
