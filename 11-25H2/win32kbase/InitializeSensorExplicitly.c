/*
 * XREFs of InitializeSensorExplicitly @ 0x140216570
 * Callers:
 *     ActivateKSTInputProcessingHelper @ 0x140218E00 (ActivateKSTInputProcessingHelper.c)
 * Callees:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1400E12CC (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1402158DC (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InitializeSensorExplicitly(__int64 a1, struct IRegisterInputDispatcherObjects *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // esi
  __int64 v7; // rdx
  char v8; // di
  bool v9; // bp
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  __int16 v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-28h]
  char v16; // [rsp+48h] [rbp-20h]

  v3 = a1;
  v4 = W32GetUserSessionState(a1, a2) + 48LL * (int)a1;
  if ( !*(_QWORD *)(v4 + 3136) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1113);
  v6 = anonymous_namespace_::InitializeInputSensorPass1Worker(v3, a2);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v8 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = v6;
      v15 = *(_QWORD *)(v4 + 3152);
      v12 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v5) + 69144);
      v14 = 14;
      goto LABEL_19;
    }
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 3136) + 16LL))(*(_QWORD *)(v4 + 3136));
    if ( v6 < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v8 = 0;
      }
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = v6;
        v15 = *(_QWORD *)(v4 + 3152);
        v12 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v7) + 69144);
        v14 = 13;
LABEL_19:
        LOBYTE(v11) = v9;
        LOBYTE(v10) = v8;
        WPP_RECORDER_AND_TRACE_SF_sd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v10,
          v11,
          v12,
          2,
          2,
          v14,
          (__int64)&WPP_51e501ad297337bf06db4013da11b196_Traceguids,
          v15,
          v16);
      }
    }
  }
  return (unsigned int)v6;
}
