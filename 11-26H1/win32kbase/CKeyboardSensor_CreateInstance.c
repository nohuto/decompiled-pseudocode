/*
 * XREFs of CKeyboardSensor_CreateInstance @ 0x14021A140
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z @ 0x140191A3C (-CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CKeyboardSensor_CreateInstance(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rbx
  __int64 UserSessionState; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  v6 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 12920) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 375);
  UserSessionState = W32GetUserSessionState(v4, v3, v5);
  if ( (int)CKeyboardSensor::CreateInstance((struct CKeyboardSensor **)(UserSessionState + 12920)) >= 0 )
    return *(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 12920);
  return v6;
}
