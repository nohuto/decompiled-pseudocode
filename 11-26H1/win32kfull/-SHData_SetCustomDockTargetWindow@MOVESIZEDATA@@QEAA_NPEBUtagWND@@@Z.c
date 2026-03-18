/*
 * XREFs of ?SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z @ 0x14019D39C
 * Callers:
 *     NtUserRegisterForCustomDockTargets @ 0x14019D020 (NtUserRegisterForCustomDockTargets.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsMessageOnlyWindow @ 0x14019D910 (IsMessageOnlyWindow.c)
 *     ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x14019D930 (-SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

bool __fastcall MOVESIZEDATA::SHData_SetCustomDockTargetWindow(MOVESIZEDATA *this, struct tagTHREADINFO **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // bl
  bool v7; // di
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r9
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // rcx
  int v14; // esi
  bool v15; // bl
  bool v16; // di
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  struct tagTHREADINFO *v20; // rax
  int v21; // esi
  bool v22; // bl
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  const struct tagWND *CustomDockTargetWindow; // rax
  __int64 v28; // rdx
  bool v29; // si
  bool v30; // bp
  struct tagTHREADINFO *v31; // rbx
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  bool result; // al
  __int16 v36; // [rsp+30h] [rbp-28h]

  if ( !(unsigned int)IsMessageOnlyWindow(a2) )
  {
    v6 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v4) + 69152);
    v36 = 16;
    goto LABEL_84;
  }
  v11 = PtiCurrent(v5);
  v13 = a2[2];
  if ( v13 != v11 )
  {
    v6 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v12) + 69152);
    v36 = 17;
    goto LABEL_84;
  }
  v14 = *((_DWORD *)a2[5] + 72);
  if ( (v14 & 0xF) != 2 )
  {
    v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(UserSessionState + 69152),
        3,
        1,
        18,
        (__int64)&WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids,
        v14);
    }
    return 0;
  }
  v20 = *(struct tagTHREADINFO **)(*((_QWORD *)this + 2) + 16LL);
  if ( v13 == v20 )
  {
    v6 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v12) + 69152);
    v36 = 19;
    goto LABEL_84;
  }
  if ( *((_QWORD *)v13 + 61) != *((_QWORD *)v20 + 61) )
  {
    v6 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v12) + 69152);
    v36 = 20;
    goto LABEL_84;
  }
  v21 = *((_DWORD *)this + 44);
  if ( v21 != 9 )
  {
    v22 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(v24 + 69152),
        3,
        1,
        21,
        (__int64)&WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids,
        v21);
    }
    return 0;
  }
  if ( (*((_DWORD *)this + 50) & 0x200) == 0 )
  {
    v6 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v12) + 69152);
    v36 = 22;
    goto LABEL_84;
  }
  if ( (*((_DWORD *)this + 50) & 0x8008) != 0x8000 )
  {
    v6 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v12) + 69152);
    v36 = 23;
LABEL_84:
    LOBYTE(v9) = v7;
    LOBYTE(v8) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v9,
      v10,
      3,
      1,
      v36,
      (__int64)&WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids);
    return 0;
  }
  CustomDockTargetWindow = MOVESIZEDATA::SHData_GetCustomDockTargetWindow(this);
  if ( !CustomDockTargetWindow || CustomDockTargetWindow == (const struct tagWND *)a2 )
  {
    *((_QWORD *)this + 48) = *a2;
    result = 1;
    *((_BYTE *)this + 393) = 1;
    return result;
  }
  v29 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v31 = *a2;
    v32 = W32GetUserSessionState(WPP_GLOBAL_Control, v28);
    LOBYTE(v33) = v30;
    LOBYTE(v34) = v29;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v34,
      v33,
      *(_QWORD *)(v32 + 69152),
      3,
      1,
      24,
      (__int64)&WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids,
      (char)v31);
  }
  return 0;
}
