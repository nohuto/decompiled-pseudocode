/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x1407D547C
 * Callers:
 *     PopDiagInitialize @ 0x140CD7AF8 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 */

NTSTATUS PopDiagSleepStudyInitialize()
{
  NTSTATUS result; // eax

  if ( PopDiagSleepStudyHandleRegistered )
    return -1073740008;
  result = EtwRegister(
             &SLEEPSTUDY_ETW_PROVIDER,
             PopDiagTraceControlCallback,
             &PopDiagSleepStudyHandle,
             &PopDiagSleepStudyHandle);
  if ( result >= 0 )
    PopDiagSleepStudyHandleRegistered = 1;
  return result;
}
