/*
 * XREFs of RIMCmResetContactFrameState @ 0x140074E00
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1400734B4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void *__fastcall RIMCmResetContactFrameState(_DWORD *a1)
{
  if ( (a1[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 536LL);
  a1[591] &= 0xFFFFFFF8;
  return memset(a1 + 592, 0, 0xF0uLL);
}
