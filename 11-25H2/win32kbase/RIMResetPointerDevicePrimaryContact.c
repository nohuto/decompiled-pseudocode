/*
 * XREFs of RIMResetPointerDevicePrimaryContact @ 0x1401F18D0
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1400310C8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x140183C3C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMResetPointerDevicePrimaryContact(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1024);
  if ( result )
  {
    if ( (*(_DWORD *)(result + 32) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1602);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1024) + 32LL) & 8) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1603);
    *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 2444LL) &= ~0x4000000u;
    result = *(_QWORD *)(a1 + 1024);
    *(_DWORD *)(result + 32) &= ~8u;
    *(_QWORD *)(a1 + 1024) = 0LL;
  }
  return result;
}
