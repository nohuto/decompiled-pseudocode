/*
 * XREFs of ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x14018E130
 * Callers:
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140129E38 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x14015C858 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x14018DBC4 (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     ?_LockSetForegroundWindow@@YA_NI@Z @ 0x14018F8B0 (-_LockSetForegroundWindow@@YA_NI@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     ?_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x14028F9BC (-_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402904D0 (-_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x140291180 (EditionAllowProcessLaunchForegroundPolicy.c)
 *     ?ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z @ 0x1402DEF64 (-ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

char __fastcall CanForceForeground(const struct tagPROCESSINFO *a1, __int64 a2)
{
  char v3; // di
  bool v4; // bp
  bool v5; // r14
  int v6; // ebx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // bl
  bool v16; // si
  __int64 v17; // rax
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebp
  bool v23; // bl
  bool v24; // si
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  CInputGlobals *v35; // rbx
  unsigned int *v36; // rax
  __int64 v37; // rdx
  bool v38; // bl
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  __int16 v43; // [rsp+30h] [rbp-38h]

  v3 = 1;
  v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = *((_DWORD *)a1 + 14);
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v8) = v5;
    LOBYTE(v9) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      2,
      47,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
      v6);
  }
  v10 = LastWokenThread::Test(a1, 0LL);
  if ( !v10 )
  {
    v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 1;
    v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
    v43 = 48;
    goto LABEL_100;
  }
  if ( v10 == 3 )
  {
    v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 1;
    v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
    v43 = 49;
    goto LABEL_100;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v12, v11) + 18904) )
  {
    v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 1;
    v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
    v43 = 50;
LABEL_100:
    LOBYTE(v19) = v16;
    LOBYTE(v18) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v18,
      v19,
      *(_QWORD *)(v17 + 69160),
      4,
      2,
      v43,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    return 1;
  }
  v21 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18904);
  if ( *(const struct tagPROCESSINFO **)(v21 + 464) == a1 )
  {
    v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 1;
    v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
    v43 = 51;
    goto LABEL_100;
  }
  v22 = *((_DWORD *)a1 + 3) & 0x80100;
  if ( v22 )
  {
    v23 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v23;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v27,
        v26,
        *(_QWORD *)(v25 + 69160),
        4,
        2,
        52,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
        v22);
    }
    return 1;
  }
  if ( a1 == *(const struct tagPROCESSINFO **)(W32GetUserSessionState(v21, v20) + 18832) )
  {
    v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 1;
    v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v28);
    v43 = 53;
    goto LABEL_100;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v29, v28) + 18888) )
  {
    v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 1;
    v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v30);
    v43 = 54;
    goto LABEL_100;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v31, v30) + 18852) )
  {
    v34 = W32GetUserSessionState(v33, v32);
    if ( PsGetProcessDebugPort(**(_QWORD **)(*(_QWORD *)(v34 + 18904) + 464LL)) || (LastWokenThread::GetKind() & 1) != 0 )
    {
      v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 1;
      v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v32);
      v43 = 55;
      goto LABEL_100;
    }
  }
  v35 = *(CInputGlobals **)(W32GetUserSessionState(v33, v32) + 3056);
  v36 = (unsigned int *)UPDWORDPointer(0x2000LL);
  if ( CInputGlobals::IsTimeFromLastInputEvent(v35, *v36) )
  {
    v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 1;
    v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v37);
    v43 = 56;
    goto LABEL_100;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v3 = 0;
  }
  v38 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v39 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v37);
    LOBYTE(v40) = v38;
    LOBYTE(v41) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v41,
      v40,
      *(_QWORD *)(v39 + 69160),
      4,
      2,
      57,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
  }
  return 0;
}
