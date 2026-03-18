/*
 * XREFs of RIMHidValidExclusive @ 0x140096244
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x140095B60 (RIMDirectStartStopDeviceRead.c)
 *     RIMHidTLCActive @ 0x140096204 (RIMHidTLCActive.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMHidValidExclusive(__int64 a1)
{
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 81LL);
  if ( *(_DWORD *)(a1 + 36) < *(_DWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 82LL);
  return (unsigned int)(*(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 40));
}
