/*
 * XREFs of CleanupSensorExplicitly @ 0x140215F30
 * Callers:
 *     UninitializeInputSensorsOnSharedThread @ 0x140216EDC (UninitializeInputSensorsOnSharedThread.c)
 *     DeactivateKSTInputProcessingHelper @ 0x140218FA0 (DeactivateKSTInputProcessingHelper.c)
 * Callees:
 *     ?UninitializeSensor@CBaseInput@@QEAAXXZ @ 0x14018AB08 (-UninitializeSensor@CBaseInput@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CleanupSensorExplicitly(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 UserSessionState; // rdi
  __int64 v4; // rbx

  v2 = (int)a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = 6 * v2;
  if ( !*(_QWORD *)(UserSessionState + 8 * v4 + 3136) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1027);
  CBaseInput::UninitializeSensor(*(CBaseInput **)(UserSessionState + 8 * v4 + 3136));
}
