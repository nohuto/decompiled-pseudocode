/*
 * XREFs of GetCursorUpdateHandle @ 0x14021B574
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x14019C080 (NtMITGetCursorUpdateHandle.c)
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x14021A1BC (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 */

void *__fastcall GetCursorUpdateHandle(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax
  int v8; // edx
  int v9; // r8d
  CMouseSensor *v10; // rcx

  v3 = -1LL;
  if ( !IsInputThread(a1, a2, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1055);
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  if ( UserSessionState != -3112 )
  {
    v10 = *(CMouseSensor **)(UserSessionState + 3136);
    if ( v10 )
      return CMouseSensor::GetCursorUpdateHandle(v10, v8, v9);
  }
  return (void *)v3;
}
