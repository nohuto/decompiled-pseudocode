/*
 * XREFs of PsGetProcessStartKey @ 0x1404838E0
 * Callers:
 *     EtwpInitStateChangeInfo @ 0x140954454 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140954510 (EtwpWriteAppStateChangeWithStats.c)
 *     NtTerminateProcess @ 0x1409566C0 (NtTerminateProcess.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14096F92C (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteProcessStarted @ 0x140AB66AC (EtwpWriteProcessStarted.c)
 *     EtwpWriteUserEvent @ 0x140B7D098 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1656) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
