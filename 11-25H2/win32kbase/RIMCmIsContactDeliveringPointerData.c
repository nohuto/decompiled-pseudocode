/*
 * XREFs of RIMCmIsContactDeliveringPointerData @ 0x140185984
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x14002FD24 (rimProcessPointerDeviceButtonContact.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140030AA8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1400F2A14 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x140183C3C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140183FB4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimApplyPointerDevicePolicies @ 0x1401842B0 (rimApplyPointerDevicePolicies.c)
 *     rimFinalizePointerFlags @ 0x140184A6C (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceContact @ 0x140184FF0 (rimProcessPointerDeviceContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1401F5628 (RIMCmIsContactDeliveringAnyData.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmIsContactDeliveringPointerData(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 549LL);
  return (*(_DWORD *)(a1 + 2684) >> 1) & 1;
}
