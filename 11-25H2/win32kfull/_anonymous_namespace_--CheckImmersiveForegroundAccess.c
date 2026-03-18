/*
 * XREFs of _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x140277714
 * Callers:
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x14018D9E0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140239944 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x140277D84 (_anonymous_namespace_--FAllowForegroundActivate.c)
 * Callees:
 *     IsImmersiveBand @ 0x140025E6C (IsImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PtiKbdFromQ @ 0x14014543C (PtiKbdFromQ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::CheckImmersiveForegroundAccess(__int64 a1, char a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  _DWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // r15
  char v10; // di
  bool v11; // r15
  int v12; // ebx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  char v16; // si
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // cl
  char v20; // al
  char v21; // bl
  bool v22; // zf
  __int64 v23; // rax
  unsigned int v24; // edi
  __int64 v25; // r13
  unsigned int v26; // r12d
  unsigned int CurrentWin32kSessionId; // eax
  bool v28; // r15
  int v29; // ebx
  int v30; // edi
  __int64 UserSessionState; // rax
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // edi
  unsigned int v38; // ebx
  unsigned int v39; // eax
  bool v40; // di
  int v41; // edx
  int v42; // r8d
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  char v48; // bl
  bool v49; // di
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  __int16 v53; // [rsp+30h] [rbp-48h]
  int v54; // [rsp+40h] [rbp-38h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = (_DWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v6 = (_DWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v9 = (unsigned int)IsDesktopApp(v6, v5) != 0;
  if ( (v6[202] & 0x100LL) == 0 )
  {
    v16 = 1;
    if ( v6[217] )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(v6) )
      {
        v19 = a2;
        v20 = a2 | 1;
        v21 = a2 & 0xFE;
        v22 = (v19 & 8) == 0;
        v18 = 16LL;
        if ( !v22 )
          v21 = v20;
        if ( (v21 & 0x10) != 0 )
          a2 = v21 | 2;
        else
          a2 = v21 & 0xFD;
      }
      if ( (a2 & 1) == 0 )
      {
        v23 = *(_QWORD *)(a1 + 16);
        v24 = v6[217];
        v25 = *(_QWORD *)(v23 + 464);
        v26 = *(_DWORD *)(v25 + 868);
        if ( v24 != v26 )
        {
          CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
          if ( !(unsigned __int8)SeIsParentOfChildAppContainer(CurrentWin32kSessionId, v24, v26) )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v16 = 0;
            }
            v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v29 = *(_DWORD *)(v25 + 56);
              v30 = v6[14];
              UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v17);
              LOBYTE(v32) = v28;
              LOBYTE(v33) = v16;
              WPP_RECORDER_AND_TRACE_SF_Dd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v33,
                v32,
                *(_QWORD *)(UserSessionState + 69160),
                4,
                2,
                17,
                (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
                v30,
                v29);
            }
            return 0;
          }
        }
      }
      if ( (a2 & 2) != 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v6) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1280);
LABEL_42:
        if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18888) )
        {
          v45 = *(_QWORD *)(W32GetUserSessionState(v44, v7) + 18888);
          if ( *(_QWORD *)(v45 + 128) )
          {
            v46 = W32GetUserSessionState(v45, v7);
            if ( (unsigned int)IsImmersiveBand(*(_QWORD *)(*(_QWORD *)(v46 + 18888) + 128LL)) )
            {
              if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
                || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
              {
                v16 = 0;
              }
              v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !v16 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                return 0;
              v54 = v6[14];
              v43 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7) + 69160);
              v53 = 19;
LABEL_52:
              LOBYTE(v42) = v40;
              LOBYTE(v41) = v16;
              WPP_RECORDER_AND_TRACE_SF_d(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v41,
                v42,
                v43,
                4,
                2,
                v53,
                (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
                v54);
              return 0;
            }
          }
        }
LABEL_54:
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v48 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v48 = 0;
        }
        v49 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v48 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v50 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
          LOBYTE(v51) = v49;
          LOBYTE(v52) = v48;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v52,
            v51,
            *(_QWORD *)(v50 + 69160),
            4,
            2,
            20,
            (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
        }
        return 1;
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v18, v17) + 18888) )
      {
        v34 = W32GetUserSessionState(v8, v7);
        v8 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(v34 + 18888)) + 464);
        if ( *(_DWORD *)(v8 + 868) != v6[217] )
        {
          v35 = W32GetUserSessionState(v8, v7);
          v36 = PtiKbdFromQ(*(_QWORD *)(v35 + 18888));
          v37 = v6[217];
          v38 = *(_DWORD *)(*(_QWORD *)(v36 + 464) + 868LL);
          v39 = W32GetCurrentWin32kSessionId();
          if ( !(unsigned __int8)SeIsParentOfChildAppContainer(v39, v37, v38) )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v16 = 0;
            }
            v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( !v16 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              return 0;
            v54 = v6[14];
            v43 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7) + 69160);
            v53 = 18;
            goto LABEL_52;
          }
        }
      }
    }
    if ( !v9 )
      goto LABEL_54;
    goto LABEL_42;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v10 = 0;
  }
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = v6[14];
    v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
    LOBYTE(v14) = v11;
    LOBYTE(v15) = v10;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(v13 + 69160),
      4,
      2,
      16,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
      v12);
  }
  return 1;
}
