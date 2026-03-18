/*
 * XREFs of RIMCmActiveContactsBegin @ 0x140032890
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x14002E5A0 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x14002F41C (rimEndAllActiveContactsWorker.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140030AA8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x140031B74 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1400320D4 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1400327B0 (RIMCmActiveContactsBeginNoButton.c)
 *     rimIsWakeablePointerFrame @ 0x140116C6C (rimIsWakeablePointerFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x140183C3C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     ListTableBegin @ 0x140185B40 (ListTableBegin.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsBegin(__int64 a1, __int64 a2)
{
  if ( !*(_DWORD *)(a2 + 1008) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 461LL);
  ListTableBegin(a1, a2 + 1000);
  return a1;
}
