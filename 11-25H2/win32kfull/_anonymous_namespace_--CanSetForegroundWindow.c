/*
 * XREFs of _anonymous_namespace_::CanSetForegroundWindow @ 0x140239944
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsNonImmersiveBand @ 0x14014C24C (IsNonImmersiveBand.c)
 *     IsDebuggerAttached @ 0x140151D14 (IsDebuggerAttached.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016C5AC (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x14018DBC4 (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     IsForegroundLocked @ 0x14018E0E8 (IsForegroundLocked.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019D61C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x140277714 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 */

__int64 __fastcall anonymous_namespace_::CanSetForegroundWindow(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rbp
  __int64 v7; // r14
  char v8; // bp
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  bool v14; // di
  bool v15; // bp
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  char v39; // r14
  bool v40; // r15
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  int v44; // eax
  __int64 v46; // rcx
  char v47; // r15
  __int64 v48; // rdx
  bool v49; // r14
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  __int64 v53; // r9
  const char *v54; // rax
  int v55; // eax
  __int16 v56; // [rsp+30h] [rbp-38h]

  v2 = a2;
  v6 = PtiCurrent((__int64)a1, a2);
  v7 = *((_QWORD *)v6 + 58);
  if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) == 15 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v8 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        2,
        36,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    }
    return 1LL;
  }
  if ( *(int *)(v7 + 12) < 0 )
  {
    *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18840) = 0LL;
    v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 2LL;
    v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13) + 69160);
    v56 = 37;
LABEL_87:
    LOBYTE(v17) = v15;
    LOBYTE(v16) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v16,
      v17,
      v18,
      4,
      2,
      v56,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    return 2LL;
  }
  v20 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19144);
  if ( *((_QWORD *)v6 + 62) == v20 && v2 == 31 )
  {
    *(_QWORD *)(W32GetUserSessionState(v20, v19) + 18840) = 0LL;
    v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 2LL;
    v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21) + 69160);
    v56 = 38;
    goto LABEL_87;
  }
  if ( (unsigned int)IsCurrentProcessDwm(v20) && !IsGhostWindowClass(a1, v22) )
  {
    v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 2LL;
    v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22) + 69160);
    v56 = 39;
    goto LABEL_87;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v23, v22) + 18852) )
  {
    if ( (unsigned int)IsDebuggerAttached((__int64 *)v7) && IsNonImmersiveBand((__int64)a1) )
    {
      v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 2LL;
      v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26) + 69160);
      v56 = 40;
      goto LABEL_87;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18888) )
    {
      v25 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18888);
      if ( *(_QWORD *)(v25 + 128) )
      {
        v28 = W32GetUserSessionState(v25, v24);
        if ( (unsigned int)IsDebuggerAttached(*(__int64 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 18888) + 128LL)
                                                                      + 16LL)
                                                          + 464LL)) )
        {
          if ( IsNonImmersiveBand((__int64)a1) )
          {
            v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
               && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
               && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
            v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              return 2LL;
            v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24) + 69160);
            v56 = 41;
            goto LABEL_87;
          }
        }
      }
    }
  }
  v29 = W32GetUserSessionState(v25, v24);
  v14 = 1;
  if ( v6 == (struct tagTHREADINFO *)GetProp((__int64)a1, *(unsigned __int16 *)(v29 + 41354), 1u) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v14 = 0;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 2LL;
    v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v30) + 69160);
    v56 = 42;
    goto LABEL_87;
  }
  if ( v7 == *(_QWORD *)(W32GetUserSessionState(v31, v30) + 62824) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v14 = 0;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 2LL;
    v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v32) + 69160);
    v56 = 43;
    goto LABEL_87;
  }
  if ( !(unsigned int)IsForegroundLocked(v33, v32) )
  {
    if ( (unsigned int)IsDesktopApp(*((_QWORD *)v6 + 58), v34) )
    {
      LOBYTE(v35) = 1;
      if ( (unsigned int)LastWokenThread::Test(v7, v35) == 3 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v14 = 0;
        }
        v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 2LL;
        v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v36) + 69160);
        v56 = 44;
        goto LABEL_87;
      }
    }
  }
  if ( !(unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(a1, v2) )
  {
    v38 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v39 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v39 = 0;
    }
    v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v39 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v41 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v37);
      LOBYTE(v42) = v40;
      LOBYTE(v43) = v39;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v43,
        v42,
        *(_QWORD *)(v41 + 69160),
        4,
        2,
        45,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    }
    if ( *((_QWORD *)v6 + 62) == *(_QWORD *)(W32GetUserSessionState(v38, v37) + 19144) )
    {
      LOBYTE(v44) = IAMThreadAccessGranted(v6);
      if ( v44 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1724LL);
    }
    return 1LL;
  }
  v47 = anonymous_namespace_::CheckCanonicalForegroundAccess(v2, v37);
  v48 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v46 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v46 & 2) == 0)
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v14 = 0;
  }
  v49 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v50 = W32GetUserSessionState(v46, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v51) = v49;
    LOBYTE(v52) = v14;
    v53 = *(_QWORD *)(v50 + 69160);
    v54 = "HasRight";
    if ( !v47 )
      v54 = "NoRights";
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v52,
      v51,
      v53,
      4,
      2,
      46,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
      (__int64)v54);
  }
  if ( v47 )
    return 2LL;
  if ( *((_QWORD *)v6 + 62) == *(_QWORD *)(W32GetUserSessionState(v46, v48) + 19144) )
  {
    LOBYTE(v55) = IAMThreadAccessGranted(v6);
    if ( v55 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1742LL);
  }
  return 0LL;
}
