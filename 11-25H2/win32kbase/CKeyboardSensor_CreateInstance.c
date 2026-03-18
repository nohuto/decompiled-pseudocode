/*
 * XREFs of CKeyboardSensor_CreateInstance @ 0x140214480
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x140152C60 (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CKeyboardSensor_CreateInstance(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 UserSessionState; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 12928) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 531);
  UserSessionState = W32GetUserSessionState(v3, v2);
  *(_QWORD *)(UserSessionState + 12928) = 0LL;
  v6 = Win32AllocPoolZInitImpl(256LL, 0x548uLL, 0x43486970u);
  v7 = v6;
  if ( v6 )
  {
    CBaseInput::CBaseInput(v6, 2, 1u, 1);
    *(_QWORD *)(v7 + 1336) = 0LL;
    *(_QWORD *)v7 = &CKeyboardSensor::`vftable';
    *(_DWORD *)(v7 + 1344) = 0;
    *(_QWORD *)(UserSessionState + 12928) = v7;
    return *(_QWORD *)(W32GetUserSessionState(v9, v8) + 12928);
  }
  return v4;
}
