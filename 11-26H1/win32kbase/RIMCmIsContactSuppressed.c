/*
 * XREFs of RIMCmIsContactSuppressed @ 0x14007615C
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140073F9C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1400752B0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x140077BAC (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmMarkSuppressedContactForDelivery @ 0x140078060 (RIMCmMarkSuppressedContactForDelivery.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x14007AAC0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x14007B554 (RIMCmIsContactDeliveringAnyData.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1400FA16C (rimProcessPointerDeviceButtonContact.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x14012C300 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmAddContactSuppressionReasons @ 0x14012C734 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmDeactivateContact @ 0x1401310A4 (RIMCmDeactivateContact.c)
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 *     rimFinalizePointerFlags @ 0x1401AF8AC (rimFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmIsContactSuppressed(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 585LL);
  LOBYTE(v1) = *(_DWORD *)(a1 + 8) != 0;
  return v1;
}
