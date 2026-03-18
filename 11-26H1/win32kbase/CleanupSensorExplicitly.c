/*
 * XREFs of CleanupSensorExplicitly @ 0x140196C90
 * Callers:
 *     UninitializeInputSensorsOnSharedThread @ 0x14021C3F4 (UninitializeInputSensorsOnSharedThread.c)
 *     DeactivateKSTInputProcessingHelper @ 0x14021DE70 (DeactivateKSTInputProcessingHelper.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UninitializeSensor@CBaseInput@@QEAAXXZ @ 0x14021896C (-UninitializeSensor@CBaseInput@@QEAAXXZ.c)
 */

void __fastcall CleanupSensorExplicitly(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 UserSessionState; // rdi
  __int64 v5; // rbx

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v5 = 6 * v3;
  if ( !*(_QWORD *)(UserSessionState + 8 * v5 + 3136) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1045LL);
  CBaseInput::UninitializeSensor(*(CBaseInput **)(UserSessionState + 8 * v5 + 3136));
}
