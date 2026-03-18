/*
 * XREFs of _anonymous_namespace_::FAllowForegroundActivate @ 0x140277D84
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140187CB8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401BB244 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     IsImmersiveBandOrShellManaged @ 0x140025D98 (IsImmersiveBandOrShellManaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     IsForegroundLocked @ 0x14018E0E8 (IsForegroundLocked.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401D11CC (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x140277714 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x14027847C (_anonymous_namespace_--RemoveForegroundActivate.c)
 */

char __fastcall anonymous_namespace_::FAllowForegroundActivate(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // si
  bool v8; // bl
  int v9; // edx
  int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // si
  bool v17; // r14
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  char v21; // bl
  bool v22; // di
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  int v27; // eax
  __int64 v28; // rdx
  char v29; // si
  bool v30; // di
  int v31; // edx
  int v32; // r8d
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rdx
  char v46; // si
  bool v47; // r15
  __int64 UserSessionState; // rax
  int v49; // r8d
  int v50; // edx
  __int16 v51; // [rsp+30h] [rbp-48h]
  __int16 v52; // [rsp+30h] [rbp-48h]
  __int16 v53; // [rsp+30h] [rbp-48h]
  __int16 v54; // [rsp+30h] [rbp-48h]
  __int64 v55; // [rsp+40h] [rbp-38h]
  int v56; // [rsp+40h] [rbp-38h]

  v3 = PtiCurrent(a1, a2);
  v4 = *((_QWORD *)v3 + 58);
  if ( !(unsigned __int8)anonymous_namespace_::RemoveForegroundActivate() )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v11 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5) + 69160);
    v51 = 27;
    goto LABEL_89;
  }
  v13 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19144);
  if ( *((_QWORD *)v3 + 62) != v13
    || (v14 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18888), v14 == *((_QWORD *)v3 + 59))
    || (unsigned int)IsForegroundLocked(v14, v12) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v11 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12) + 69160);
    v51 = 28;
LABEL_89:
    LOBYTE(v10) = v8;
    LOBYTE(v9) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v10,
      v11,
      4,
      2,
      v51,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    return 0;
  }
  v15 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v15 + 27) & 8) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v16 = 0;
    }
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v16 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v55 = *(_QWORD *)a1;
    v20 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12) + 69160);
    v52 = 29;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v15 + 236) != 15 )
  {
    if ( *(int *)(v4 + 12) < 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v21 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v21 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 1;
      v25 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12) + 69160);
      v53 = 31;
      goto LABEL_37;
    }
    if ( (unsigned int)IsImmersiveBroker(v4)
      && (unsigned int)IsImmersiveBandOrShellManaged(a1)
      && (*(_DWORD *)(a1 + 384) & 4) == 0 )
    {
      LOBYTE(v27) = IAMThreadAccessGranted(v3);
      if ( v27 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1464);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v29 = 0;
      }
      v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v29 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v56 = *(_DWORD *)(v4 + 12);
      v33 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v28) + 69160);
      v54 = 32;
    }
    else
    {
      if ( !(unsigned int)IsImmersiveBroker(v4)
        || !*(_QWORD *)(W32GetUserSessionState(v35, v34) + 18888)
        || (v39 = *(_QWORD *)(W32GetUserSessionState(v37, v36) + 18888), !*(_QWORD *)(v39 + 128))
        || (v40 = W32GetUserSessionState(v39, v38),
            !(unsigned int)IsImmersiveBandOrShellManaged(*(_QWORD *)(*(_QWORD *)(v40 + 18888) + 128LL))) )
      {
        if ( !anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2) )
        {
          LOBYTE(v44) = IAMThreadAccessGranted(v3);
          if ( v44 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1484);
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
            || (v46 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v46 = 0;
          }
          v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v46 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
            LOBYTE(v49) = v47;
            LOBYTE(v50) = v46;
            WPP_RECORDER_AND_TRACE_SF_dq(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v50,
              v49,
              *(_QWORD *)(UserSessionState + 69160));
          }
          return 0;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v21 = 0;
        }
        v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v21 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 1;
        v25 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43) + 69160);
        v53 = 35;
LABEL_37:
        LOBYTE(v24) = v22;
        LOBYTE(v23) = v21;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v23,
          v24,
          v25,
          4,
          2,
          v53,
          (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
        return 1;
      }
      LOBYTE(v41) = IAMThreadAccessGranted(v3);
      if ( v41 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1475);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v29 = 0;
      }
      v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v29 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v56 = *(_DWORD *)(v4 + 56);
      v33 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v42) + 69160);
      v54 = 33;
    }
    LOBYTE(v32) = v30;
    LOBYTE(v31) = v29;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v31,
      v32,
      v33,
      4,
      2,
      v54,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
      v56);
    return 0;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v16 = 0;
  }
  v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v16 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return 0;
  v55 = *(_QWORD *)a1;
  v20 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12) + 69160);
  v52 = 30;
LABEL_28:
  LOBYTE(v19) = v17;
  LOBYTE(v18) = v16;
  WPP_RECORDER_AND_TRACE_SF_q(
    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
    v18,
    v19,
    v20,
    4,
    2,
    v52,
    (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
    v55);
  return 0;
}
