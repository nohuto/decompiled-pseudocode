/*
 * XREFs of EditionAllowProcessLaunchForegroundPolicy @ 0x140291180
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsCurrentSessionServiceSession @ 0x1400D8C14 (IsCurrentSessionServiceSession.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x14018E130 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall EditionAllowProcessLaunchForegroundPolicy(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // bl
  bool v5; // si
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  char v9; // si
  bool v10; // bp
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  const struct tagPROCESSINFO **v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // rdx
  __int16 v19; // [rsp+30h] [rbp-28h]
  __int16 v20; // [rsp+30h] [rbp-28h]

  if ( !IsCurrentSessionServiceSession() )
  {
    v4 = 1;
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v9 = 0;
        }
        v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 1LL;
        v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v2) + 69160);
        v20 = 80;
        goto LABEL_29;
      }
      if ( a1 != 3 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1440);
      v14 = (const struct tagPROCESSINFO **)PtiCurrent(v3, v2);
      LOBYTE(v15) = IAMThreadAccessGranted((const struct tagTHREADINFO *)v14);
      if ( v15 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v9 = 0;
        }
        v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 1LL;
        v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16) + 69160);
        v20 = 81;
        goto LABEL_29;
      }
      if ( !CanForceForeground(v14[58], v16) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v4 = 0;
        }
        v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v8 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v18) + 69160);
        v19 = 83;
        goto LABEL_46;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v9 = 0;
      }
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v18) + 69160);
        v20 = 82;
LABEL_29:
        LOBYTE(v12) = v10;
        LOBYTE(v11) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v11,
          v12,
          v13,
          4,
          2,
          v20,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
      }
    }
    return 1LL;
  }
  v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return 0LL;
  v8 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v2) + 69160);
  v19 = 79;
LABEL_46:
  LOBYTE(v7) = v5;
  LOBYTE(v6) = v4;
  WPP_RECORDER_AND_TRACE_SF_(
    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
    v6,
    v7,
    v8,
    3,
    2,
    v19,
    (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
  return 0LL;
}
