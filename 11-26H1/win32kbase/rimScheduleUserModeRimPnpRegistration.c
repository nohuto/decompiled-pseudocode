/*
 * XREFs of rimScheduleUserModeRimPnpRegistration @ 0x14018A614
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1401101FC (UserActivateMITInputProcessing.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimScheduleUserModeRimPnpRegistration(__int64 a1, int a2, int a3)
{
  int v3; // ecx
  char v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  __int64 **v15; // rdi
  int v16; // r8d
  __int64 *i; // rbx
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  char v21; // bl
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx

  v3 = (int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      53,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids);
  }
  v9 = W32GetUserSessionState(v3, a2, a3);
  RIMLockExclusive(v9 + 56);
  v15 = (__int64 **)(W32GetUserSessionState(v11, v10, v12) + 120);
  for ( i = *v15; i != (__int64 *)v15; i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 65) && !*((_BYTE *)i + 64) && *((_BYTE *)i + 376) )
    {
      if ( *((_DWORD *)i + 260) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1779LL);
      if ( (*((_DWORD *)i + 17) & 0x20) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1780LL);
      ZwSetEvent((HANDLE)i[41], 0LL);
    }
  }
  v18 = W32GetUserSessionState(v14, v13, v16);
  RIMUnlockExclusive(v18 + 56);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v21 = 0;
  }
  v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v20);
    LOBYTE(v24) = v22;
    LOBYTE(v25) = v21;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      v24,
      *(_QWORD *)(v23 + 19368),
      4,
      1,
      54,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids);
  }
}
