/*
 * XREFs of GetCursorUpdateHandle @ 0x1402160F4
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1400BD110 (NtMITGetCursorUpdateHandle.c)
 * Callees:
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x140214564 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 */

void *__fastcall GetCursorUpdateHandle(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  CMouseSensor *v7; // rcx

  v2 = -1LL;
  if ( !IsInputThread(a1, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1037);
  v5 = W32GetUserSessionState(v4, v3) + 3112;
  if ( v5 )
  {
    v7 = *(CMouseSensor **)(v5 + 24);
    if ( v7 )
      return CMouseSensor::GetCursorUpdateHandle(v7, v6);
  }
  return (void *)v2;
}
