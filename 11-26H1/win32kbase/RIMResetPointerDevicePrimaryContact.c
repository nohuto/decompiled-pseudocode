/*
 * XREFs of RIMResetPointerDevicePrimaryContact @ 0x1401741CC
 * Callers:
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1400734B4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140075964 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMResetPointerDevicePrimaryContact(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1024);
  if ( result )
  {
    if ( (*(_DWORD *)(result + 32) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1597LL);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1024) + 32LL) & 8) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1598LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 2444LL) &= ~0x4000000u;
    result = *(_QWORD *)(a1 + 1024);
    *(_DWORD *)(result + 32) &= ~8u;
    *(_QWORD *)(a1 + 1024) = 0LL;
  }
  return result;
}
