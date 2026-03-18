/*
 * XREFs of InitializeSensorExplicitly @ 0x140110F40
 * Callers:
 *     ActivateKSTInputProcessingHelper @ 0x14021DCD0 (ActivateKSTInputProcessingHelper.c)
 * Callees:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x140111118 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x14021ADC0 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InitializeSensorExplicitly(int a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 UserSessionState; // r14
  int v7; // edx
  int v8; // esi
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  char v12; // di
  bool v13; // bp
  int v14; // edx
  int v15; // r8d
  __int64 v16; // r9
  __int16 v18; // [rsp+30h] [rbp-48h]
  __int64 v19; // [rsp+40h] [rbp-38h]
  char v20; // [rsp+48h] [rbp-30h]

  v4 = a1;
  v5 = 6LL * a1;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( !*(_QWORD *)(UserSessionState + 48 * v4 + 3136) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1131LL);
  v8 = anonymous_namespace_::InitializeInputSensorPass1Worker((unsigned int)v4, a2);
  if ( v8 < 0 )
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
      v20 = v8;
      v19 = *(_QWORD *)(UserSessionState + 8 * v5 + 3152);
      v16 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v9) + 69136);
      v18 = 14;
      goto LABEL_19;
    }
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(UserSessionState + 48 * v4 + 3136) + 16LL))(*(_QWORD *)(UserSessionState + 48 * v4 + 3136));
    if ( v8 < 0 )
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
        v20 = v8;
        v19 = *(_QWORD *)(UserSessionState + 8 * v5 + 3152);
        v16 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11) + 69136);
        v18 = 13;
LABEL_19:
        LOBYTE(v15) = v13;
        LOBYTE(v14) = v12;
        WPP_RECORDER_AND_TRACE_SF_sd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v15,
          v16,
          2,
          2,
          v18,
          (__int64)&WPP_0539362c288c3a963381b4e36ac00da1_Traceguids,
          v19,
          v20);
      }
    }
  }
  return (unsigned int)v8;
}
