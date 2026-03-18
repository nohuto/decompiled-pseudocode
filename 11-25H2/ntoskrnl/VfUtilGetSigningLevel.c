/*
 * XREFs of VfUtilGetSigningLevel @ 0x140B733E0
 * Callers:
 *     VfUtilIsSignedDriver @ 0x140604348 (VfUtilIsSignedDriver.c)
 *     CarReportDifPluginRuleViolation @ 0x14060B280 (CarReportDifPluginRuleViolation.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140B97E9C (VfTargetDriversGetVerifierData.c)
 */

char __fastcall VfUtilGetSigningLevel(__int64 a1)
{
  __int64 VerifierData; // rax

  VerifierData = VfTargetDriversGetVerifierData(a1);
  if ( VerifierData )
    LOBYTE(VerifierData) = *(_BYTE *)(VerifierData + 48);
  return VerifierData;
}
