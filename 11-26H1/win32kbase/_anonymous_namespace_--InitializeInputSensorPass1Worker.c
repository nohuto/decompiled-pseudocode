/*
 * XREFs of _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x140111118
 * Callers:
 *     InitializeSensorExplicitly @ 0x140110F40 (InitializeSensorExplicitly.c)
 *     InitializeInputSensorsOnSharedThread @ 0x14021B944 (InitializeInputSensorsOnSharedThread.c)
 * Callees:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x140110E30 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1401113F0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x14021ADC0 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 */

__int64 __fastcall anonymous_namespace_::InitializeInputSensorPass1Worker(
        int a1,
        struct IRegisterInputDispatcherObjects *a2,
        int a3)
{
  __int64 v4; // rbx
  __int64 UserSessionState; // r14
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // ebp
  int v9; // r8d
  CTouchProcessor **v10; // rcx
  bool v11; // di
  bool v12; // si
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  int v18; // esi
  int v19; // r8d
  CTouchProcessor **v20; // rcx
  bool v21; // di
  bool v22; // bp
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx

  v4 = a1;
  UserSessionState = W32GetUserSessionState(a1, (_DWORD)a2, a3);
  v6 = 6 * v4;
  v8 = CBaseInput::InitializeSensor(*(CBaseInput **)(UserSessionState + 8 * v6 + 3136), v7);
  if ( v8 >= 0 )
  {
    v18 = CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(UserSessionState + 8 * v6 + 3136), a2);
    if ( v18 < 0 )
    {
      v20 = &WPP_GLOBAL_Control;
      v21 = 0;
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
      {
        LODWORD(v20) = *((_DWORD *)WPP_GLOBAL_Control + 11);
        if ( ((unsigned __int8)v20 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
          v21 = 1;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(UserSessionState + 8 * v6 + 3152);
        v24 = W32GetUserSessionState((_DWORD)v20, (_DWORD)WPP_GLOBAL_Control, v19);
        LOBYTE(v25) = v22;
        LOBYTE(v26) = v21;
        WPP_RECORDER_AND_TRACE_SF_sd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 69136),
          2,
          2,
          11,
          (__int64)&WPP_0539362c288c3a963381b4e36ac00da1_Traceguids,
          v23,
          v18);
      }
    }
    return (unsigned int)v18;
  }
  else
  {
    v10 = &WPP_GLOBAL_Control;
    v11 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      LODWORD(v10) = *((_DWORD *)WPP_GLOBAL_Control + 11);
      if ( ((unsigned __int8)v10 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v11 = 1;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(_QWORD *)(UserSessionState + 8 * v6 + 3152);
      v14 = W32GetUserSessionState((_DWORD)v10, (_DWORD)WPP_GLOBAL_Control, v9);
      LOBYTE(v15) = v12;
      LOBYTE(v16) = v11;
      WPP_RECORDER_AND_TRACE_SF_sd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(v14 + 69136),
        2,
        2,
        10,
        (__int64)&WPP_0539362c288c3a963381b4e36ac00da1_Traceguids,
        v13,
        v8);
    }
    return (unsigned int)v8;
  }
}
