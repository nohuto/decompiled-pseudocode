/*
 * XREFs of IsWerReportCreatePresent @ 0x140005D08
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000E460 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x140005F9B (ApiSetQueryApiSetPresence_0.c)
 */

char IsWerReportCreatePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1400188F8 == 1 )
    return 1;
  if ( dword_1400188F8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L">@", &v1) < 0 )
    return 0;
  result = v1;
  dword_1400188F8 = 2 - (v1 != 0);
  return result;
}
