/*
 * XREFs of RIMCmResetContactFrameState @ 0x1401859D0
 * Callers:
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x140183C3C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimProcessPointerDeviceContact @ 0x140184FF0 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x140243000 (memset.c)
 */

void *__fastcall RIMCmResetContactFrameState(_DWORD *a1)
{
  if ( (a1[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 536LL);
  a1[591] &= 0xFFFFFFF8;
  return memset(a1 + 592, 0, 0xF0uLL);
}
