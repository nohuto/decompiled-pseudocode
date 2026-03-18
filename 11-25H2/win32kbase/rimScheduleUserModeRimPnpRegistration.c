/*
 * XREFs of rimScheduleUserModeRimPnpRegistration @ 0x140181FB8
 * Callers:
 *     UserActivateMITInputProcessing @ 0x14018D99C (UserActivateMITInputProcessing.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimScheduleUserModeRimPnpRegistration(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  char v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 **v13; // rdi
  __int64 *i; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // bl
  bool v18; // di
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v3 = 0;
  }
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      53,
      (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids);
  }
  v8 = W32GetUserSessionState(v2, a2);
  RIMLockExclusive(v8 + 56);
  v13 = (__int64 **)(W32GetUserSessionState(v10, v9) + 120);
  for ( i = *v13; i != (__int64 *)v13; i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 65) && !*((_BYTE *)i + 64) && *((_BYTE *)i + 376) )
    {
      if ( *((_DWORD *)i + 260) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1767LL);
      if ( (*((_DWORD *)i + 17) & 0x20) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1768LL);
      ZwSetEvent((HANDLE)i[41], 0LL);
    }
  }
  v15 = W32GetUserSessionState(v12, v11);
  RIMUnlockExclusive(v15 + 56);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v17 = 0;
  }
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(v19 + 19336),
      4,
      1,
      54,
      (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids);
  }
}
