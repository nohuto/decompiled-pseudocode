/*
 * XREFs of InitializeInputSensorsOnSharedThread @ 0x14021B944
 * Callers:
 *     UserActivateMITInputProcessingHelper @ 0x14021D720 (UserActivateMITInputProcessingHelper.c)
 * Callees:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x140111118 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x14021ADC0 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InitializeInputSensorsOnSharedThread(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // r14
  unsigned int v8; // ebx
  char v9; // di
  __int64 v10; // rax
  int v11; // r8d
  char v12; // bp
  char v13; // r15
  int v14; // ecx
  const char *v15; // rbx
  __int64 v16; // rax
  unsigned int i; // ebx
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r8d
  char v21; // bp
  int v22; // ecx
  const char *v23; // rbx
  __int64 v24; // rax
  __int64 v26; // [rsp+48h] [rbp-30h]

  v3 = -1073741823;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v8 = 0;
  v9 = 1;
  while ( v8 < 3 )
  {
    if ( (unsigned int)(*(_DWORD *)(UserSessionState + 48LL * v8 + 3128) - 1) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1179);
    if ( *(_DWORD *)(UserSessionState + 48LL * v8 + 3128) == 2 )
    {
      v10 = W32GetUserSessionState(v5, v4, v6);
      v3 = anonymous_namespace_::InitializeInputSensorPass1Worker(
             v8,
             *(struct IRegisterInputDispatcherObjects **)(v10 + 19248),
             v11);
      if ( v3 < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v12 = 0;
        }
        v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 6 * v8;
          v15 = *(const char **)(UserSessionState + 48LL * v8 + 3152);
          v16 = W32GetUserSessionState(v14, v4, v6);
          WPP_RECORDER_AND_TRACE_SF_sd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v12,
            v13,
            *(_QWORD *)(v16 + 69136),
            2u,
            2u,
            0xFu,
            (__int64)&WPP_0539362c288c3a963381b4e36ac00da1_Traceguids,
            v15,
            v3);
        }
        break;
      }
    }
    ++v8;
  }
  for ( i = 0; i < 3; ++i )
  {
    if ( *(_DWORD *)(UserSessionState + 48LL * i + 3128) == 2 )
    {
      v18 = *(_QWORD *)(UserSessionState + 48LL * i + 3136);
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      if ( v3 < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v9 = 0;
        }
        v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = 6 * i;
          v23 = *(const char **)(UserSessionState + 48LL * i + 3152);
          v24 = W32GetUserSessionState(v22, v19, v20);
          LODWORD(v26) = v3;
          WPP_RECORDER_AND_TRACE_SF_sd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v9,
            v21,
            *(_QWORD *)(v24 + 69136),
            2u,
            2u,
            0x10u,
            (__int64)&WPP_0539362c288c3a963381b4e36ac00da1_Traceguids,
            v23,
            v26);
        }
        return (unsigned int)v3;
      }
    }
  }
  return (unsigned int)v3;
}
