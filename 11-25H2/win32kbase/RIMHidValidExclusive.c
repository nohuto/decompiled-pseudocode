/*
 * XREFs of RIMHidValidExclusive @ 0x1401E6C08
 * Callers:
 *     RIMHidTLCActive @ 0x1401172EC (RIMHidTLCActive.c)
 *     RIMDirectStartStopDeviceRead @ 0x14012C380 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMHidValidExclusive(__int64 a1)
{
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 81);
  if ( *(_DWORD *)(a1 + 36) < *(_DWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 82);
  return (unsigned int)(*(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 40));
}
