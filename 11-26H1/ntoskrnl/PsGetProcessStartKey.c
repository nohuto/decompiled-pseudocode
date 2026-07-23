/*
 * XREFs of PsGetProcessStartKey @ 0x14047D210
 * Callers:
 *     EtwpInitStateChangeInfo @ 0x1409D0CD8 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x1409D0E30 (EtwpWriteProcessStarted.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140AFF404 (EtwpWriteAppStateChangeWithStats.c)
 *     NtTerminateProcess @ 0x140B812E0 (NtTerminateProcess.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1656) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
