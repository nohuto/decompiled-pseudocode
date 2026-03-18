/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x1407D23DC
 * Callers:
 *     PopDiagInitialize @ 0x140CD1950 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 */

NTSTATUS PopDiagSleepStudyInitialize()
{
  NTSTATUS result; // eax

  if ( byte_140E6760C )
    return -1073740008;
  result = EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, PopDiagTraceControlCallback, &qword_140F0F5D8, &qword_140F0F5D8);
  if ( result >= 0 )
    byte_140E6760C = 1;
  return result;
}
