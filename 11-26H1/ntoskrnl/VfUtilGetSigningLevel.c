/*
 * XREFs of VfUtilGetSigningLevel @ 0x140C218E0
 * Callers:
 *     VfUtilIsSignedDriver @ 0x1406407F8 (VfUtilIsSignedDriver.c)
 *     CarReportDifPluginRuleViolation @ 0x14064A330 (CarReportDifPluginRuleViolation.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140C46B58 (VfTargetDriversGetVerifierData.c)
 */

char __fastcall VfUtilGetSigningLevel(__int64 a1)
{
  __int64 VerifierData; // rax

  VerifierData = VfTargetDriversGetVerifierData(a1);
  if ( VerifierData )
    LOBYTE(VerifierData) = *(_BYTE *)(VerifierData + 48);
  return VerifierData;
}
