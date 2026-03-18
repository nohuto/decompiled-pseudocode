/*
 * XREFs of InitializeInputSensorsOnSharedThread @ 0x140216318
 * Callers:
 *     UserActivateMITInputProcessingHelper @ 0x140218850 (UserActivateMITInputProcessingHelper.c)
 * Callees:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1400E12CC (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1402158DC (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InitializeInputSensorsOnSharedThread(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // r14
  unsigned int v6; // ebp
  _DWORD *v7; // rbx
  char v8; // di
  __int64 v9; // rax
  char v10; // r15
  bool v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  unsigned int v16; // ebp
  _QWORD *i; // rbx
  __int64 v18; // rdx
  bool v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx

  v2 = -1073741823;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = 0;
  v7 = (_DWORD *)(UserSessionState + 3128);
  v8 = 1;
  while ( 1 )
  {
    if ( (unsigned int)(*v7 - 1) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1161);
    if ( *v7 == 2 )
    {
      v9 = W32GetUserSessionState(v4, v3);
      v2 = anonymous_namespace_::InitializeInputSensorPass1Worker(
             v6,
             *(struct IRegisterInputDispatcherObjects **)(v9 + 19216));
      if ( v2 < 0 )
        break;
    }
    ++v6;
    v7 += 12;
    if ( v6 >= 3 )
      goto LABEL_15;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v10 = 0;
  }
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = *(_QWORD *)(UserSessionState + 48LL * v6 + 3152);
    v13 = W32GetUserSessionState(6LL * v6, v3);
    LOBYTE(v14) = v11;
    LOBYTE(v15) = v10;
    WPP_RECORDER_AND_TRACE_SF_sd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(v13 + 69144),
      2,
      2,
      15,
      (__int64)&WPP_51e501ad297337bf06db4013da11b196_Traceguids,
      v12,
      v2);
  }
LABEL_15:
  v16 = 0;
  for ( i = (_QWORD *)(UserSessionState + 3136); ; i += 6 )
  {
    if ( *((_DWORD *)i - 2) == 2 )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 16LL))(*i);
      if ( v2 < 0 )
        break;
    }
    if ( ++v16 >= 3 )
      return (unsigned int)v2;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v8 = 0;
  }
  v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = *(_QWORD *)(UserSessionState + 48LL * v16 + 3152);
    v21 = W32GetUserSessionState(6LL * v16, v18);
    LOBYTE(v22) = v19;
    LOBYTE(v23) = v8;
    WPP_RECORDER_AND_TRACE_SF_sd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v22,
      *(_QWORD *)(v21 + 69144),
      2,
      2,
      16,
      (__int64)&WPP_51e501ad297337bf06db4013da11b196_Traceguids,
      v20,
      v2);
  }
  return (unsigned int)v2;
}
