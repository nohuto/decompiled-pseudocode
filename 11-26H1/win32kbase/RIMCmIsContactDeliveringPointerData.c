/*
 * XREFs of RIMCmIsContactDeliveringPointerData @ 0x14007B5D0
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1400734B4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140073F9C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1400752B0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x14007B554 (RIMCmIsContactDeliveringAnyData.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1400FA16C (rimProcessPointerDeviceButtonContact.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x14012C518 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 *     rimFinalizePointerFlags @ 0x1401AF8AC (rimFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmIsContactDeliveringPointerData(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 549LL);
  return (*(_DWORD *)(a1 + 2684) >> 1) & 1;
}
