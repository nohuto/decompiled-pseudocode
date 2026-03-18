/*
 * XREFs of ?_LockSetForegroundWindow@@YA_NI@Z @ 0x14018F8B0
 * Callers:
 *     NtUserLockSetForegroundWindow @ 0x14018F870 (NtUserLockSetForegroundWindow.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x14018E130 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDdD @ 0x14018FC4C (WPP_RECORDER_AND_TRACE_SF_DDdD.c)
 */

char __fastcall _LockSetForegroundWindow(__int64 a1)
{
  int v1; // r14d
  __int64 CurrentProcessWin32Process; // rax
  const struct tagPROCESSINFO *v3; // rsi
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  char v7; // bp
  bool v8; // r15
  bool v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // rdx
  bool v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  bool v25; // di
  bool v26; // r14
  int v27; // ebx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  bool v32; // di
  int v33; // ebx
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = (const struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v3 = (const struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v5 = IsImmersiveAppRestricted(v3);
  v6 = *(_QWORD *)&WPP_GLOBAL_Control;
  v7 = 1;
  v8 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    v4 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
    if ( (v4 & 2) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
      v8 = 1;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v4, *(_QWORD *)&WPP_GLOBAL_Control) + 18840) )
      v11 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 18840);
    UserSessionState = W32GetUserSessionState(v11, v10);
    LOBYTE(v13) = v9;
    LOBYTE(v14) = v8;
    WPP_RECORDER_AND_TRACE_SF_DDdD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69160));
  }
  v15 = v1 - 1;
  if ( v15 )
  {
    if ( v15 == 1 && v3 == *(const struct tagPROCESSINFO **)(W32GetUserSessionState(v4, v6) + 18840) )
    {
      *(_QWORD *)(W32GetUserSessionState(v16, v6) + 18840) = 0LL;
      v18 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v17);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v18;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v22,
          v21,
          *(_QWORD *)(v20 + 69160),
          4,
          2,
          68,
          (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
      }
      return 1;
    }
  }
  else if ( !*(_QWORD *)(W32GetUserSessionState(v4, v6) + 18840) && !v5 && CanForceForeground(v3, v6) )
  {
    *(_QWORD *)(W32GetUserSessionState(v23, v6) + 18840) = v3;
    v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v27 = *((_DWORD *)v3 + 14);
      v28 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
      LOBYTE(v29) = v26;
      LOBYTE(v30) = v25;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v30,
        v29,
        *(_QWORD *)(v28 + 69160),
        4,
        2,
        67,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
        v27);
    }
    return 1;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v7 = 0;
  }
  v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v33 = *((_DWORD *)v3 + 14);
    v34 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
    LOBYTE(v35) = v32;
    LOBYTE(v36) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v36,
      v35,
      *(_QWORD *)(v34 + 69160),
      4,
      2,
      69,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
      v33);
  }
  UserSetLastError(5);
  return 0;
}
