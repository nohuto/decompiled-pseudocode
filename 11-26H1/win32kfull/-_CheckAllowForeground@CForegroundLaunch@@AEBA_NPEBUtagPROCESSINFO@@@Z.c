/*
 * XREFs of ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402ABE40
 * Callers:
 *     ?ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A5358 (-ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x140208A94 (-ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1402140B4 (-TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_sD @ 0x140159EDC (WPP_RECORDER_AND_TRACE_SF_sD.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsShellProcess @ 0x1401A1AF8 (IsShellProcess.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A1D34 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401A3E8C (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?_HasLegacyForegroundActivateRight@CForegroundLaunch@@AEBA_NPEAU_EPROCESS@@@Z @ 0x1401A44E8 (-_HasLegacyForegroundActivateRight@CForegroundLaunch@@AEBA_NPEAU_EPROCESS@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     LockProcessByClientIdEx @ 0x1401EA0EC (LockProcessByClientIdEx.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402AB32C (-_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 */

char __fastcall CForegroundLaunch::_CheckAllowForeground(CForegroundLaunch *this, const struct tagPROCESSINFO *a2)
{
  char v4; // di
  __int64 v5; // r14
  int v6; // r12d
  unsigned int v7; // r13d
  int v8; // esi
  __int64 v9; // rcx
  void *ProcessInheritedFromUniqueProcessId; // rbx
  char v11; // r14
  bool v12; // r15
  int v13; // ebx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int CurrentWin32kSessionId; // eax
  __int64 v20; // rdx
  const struct tagPROCESSINFO *ProcessWin32Process; // rax
  __int64 v22; // rdx
  const struct tagPROCESSINFO *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int8 v26; // al
  __int64 v27; // rdx
  tagTHREADINFO *v28; // rcx
  char v29; // si
  bool v30; // r15
  int v31; // ebx
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  char v35; // bl
  bool v36; // r15
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  __int64 v40; // rdx
  char v41; // bl
  bool v42; // r15
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  bool v46; // r15
  PACCESS_TOKEN v47; // rax
  void *v48; // r13
  bool v49; // r12
  int v50; // ebx
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  __int64 v54; // rdx
  unsigned int v55; // eax
  struct MOVESIZEDATA *v56; // rcx
  char v57; // bl
  bool v58; // si
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  __int64 v62; // rcx
  __int64 v63; // rax
  char v64; // bl
  bool v65; // si
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  char v69; // bl
  bool v70; // si
  __int64 v71; // rax
  int v72; // r8d
  int v73; // edx
  char v74; // bl
  bool v75; // si
  __int64 v76; // rax
  int v77; // r8d
  int v78; // edx
  struct MOVESIZEDATA *v79; // rcx
  char v80; // bl
  bool v81; // r14
  __int64 v82; // rax
  int v83; // r8d
  int v84; // edx
  CInputGlobals *v85; // rbx
  unsigned int *v86; // rax
  __int64 v87; // rdx
  char v88; // bl
  bool v89; // si
  __int64 v90; // rax
  int v91; // edx
  int v92; // r8d
  char v93; // bl
  bool v94; // r14
  __int64 v95; // rax
  int v96; // r8d
  int v97; // edx
  char v98; // bl
  bool v99; // si
  __int64 v100; // rax
  int v101; // r8d
  int v102; // edx
  bool v103; // r14
  int v104; // ebx
  __int64 v105; // rax
  int v106; // r8d
  int v107; // edx
  __int64 v108; // r9
  const char *v109; // rax
  int v111; // [rsp+20h] [rbp-49h]
  __int16 v112; // [rsp+30h] [rbp-39h]
  int v113; // [rsp+50h] [rbp-19h] BYREF
  PEPROCESS Process; // [rsp+58h] [rbp-11h] BYREF
  __int64 v115; // [rsp+60h] [rbp-9h]
  struct _LUID AuthenticationId; // [rsp+68h] [rbp-1h] BYREF
  struct _EPROCESS *v117; // [rsp+70h] [rbp+7h]
  unsigned int v120; // [rsp+E0h] [rbp+77h]

  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
    return CForegroundLaunch::_CheckAllowForeground2(this, a2);
  v4 = 1;
  v5 = *(_QWORD *)a2;
  v6 = 1;
  v117 = *(struct _EPROCESS **)a2;
  v7 = 0;
  AuthenticationId = 0LL;
  v8 = 0;
  Process = 0LL;
  v120 = 0;
  v113 = -1;
  if ( *((_BYTE *)this + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1241);
  ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(v5);
  v115 = (__int64)ProcessInheritedFromUniqueProcessId;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (v9 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v9 & 2) == 0)
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v11 = 0;
  }
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v13 = *((_DWORD *)a2 + 14);
    UserSessionState = W32GetUserSessionState(v9, WPP_GLOBAL_Control);
    LOBYTE(v15) = v12;
    LOBYTE(v16) = v11;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      2,
      69,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
      v13);
    ProcessInheritedFromUniqueProcessId = (void *)v115;
  }
  while ( 1 )
  {
    if ( (int)LockProcessByClientIdEx(ProcessInheritedFromUniqueProcessId, &Process, &v113) < 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v98 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v98 = 0;
      }
      v99 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v98 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v100 = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
        LOBYTE(v101) = v99;
        LOBYTE(v102) = v98;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v102,
          v101,
          *(_QWORD *)(v100 + 69152),
          4,
          2,
          74,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
      }
LABEL_136:
      if ( !CForegroundLaunch::_HasLegacyForegroundActivateRight(this, v117) )
        goto LABEL_61;
LABEL_137:
      v8 = 1;
      goto LABEL_139;
    }
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v18);
    if ( v113 != CurrentWin32kSessionId )
      break;
    ProcessWin32Process = (const struct tagPROCESSINFO *)PsGetProcessWin32Process(Process);
    v23 = ProcessWin32Process;
    if ( !ProcessWin32Process || !*(_QWORD *)ProcessWin32Process )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v74 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v74 = 0;
      }
      v75 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v74 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v76 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
        LOBYTE(v77) = v75;
        LOBYTE(v78) = v74;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v78,
          v77,
          *(_QWORD *)(v76 + 69152),
          4,
          2,
          75,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
      }
      ObfDereferenceObject(Process);
      goto LABEL_136;
    }
    if ( !v6
      && ((unsigned int)IsShellProcess((__int64)ProcessWin32Process)
       || (v25 = *(_QWORD *)(v24 + 656)) != 0 && (*(_DWORD *)(v25 + 32) & 4) != 0) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v69 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v69 = 0;
      }
      v70 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v69 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v71 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
        LOBYTE(v72) = v70;
        LOBYTE(v73) = v69;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v73,
          v72,
          *(_QWORD *)(v71 + 69152),
          4,
          2,
          76,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
      }
      ObfDereferenceObject(Process);
      goto LABEL_61;
    }
    v26 = CanForceForeground(v23, v22);
    v8 = v26;
    if ( !v26 )
    {
      v28 = (tagTHREADINFO *)*((_QWORD *)v23 + 41);
      if ( v28 && tagTHREADINFO::ComputeAndTestForegroundActivate(v28) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v29 = 0;
        }
        v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v31 = *((_DWORD *)v23 + 14);
          v32 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
          LOBYTE(v33) = v30;
          LOBYTE(v34) = v29;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v34,
            v33,
            *(_QWORD *)(v32 + 69152),
            4,
            2,
            77,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
            v31);
          ProcessInheritedFromUniqueProcessId = (void *)v115;
        }
        v8 = 1;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v35 = 0;
        }
        v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
          LOBYTE(v38) = v36;
          LOBYTE(v39) = v35;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v39,
            v38,
            *(_QWORD *)(v37 + 69152),
            4,
            2,
            78,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
        }
        v115 = PsGetProcessInheritedFromUniqueProcessId(Process);
        ProcessInheritedFromUniqueProcessId = (void *)v115;
        if ( v6 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v41 = 0;
          }
          v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v41 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v40);
            LOBYTE(v44) = v42;
            LOBYTE(v45) = v41;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v45,
              v44,
              *(_QWORD *)(v43 + 69152),
              4,
              2,
              79,
              (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
          }
          v46 = 0;
          v6 = 0;
          v47 = PsReferencePrimaryToken(Process);
          v48 = v47;
          if ( v47 )
          {
            if ( SeQueryAuthenticationIdToken(v47, &AuthenticationId) >= 0 )
            {
              if ( AuthenticationId.LowPart == luidSystem[0] && AuthenticationId.HighPart == luidSystem[1] )
              {
                v8 = 1;
                if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0 )
                {
                  v46 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
                }
                v49 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v46 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v50 = *((_DWORD *)v23 + 14);
                  v51 = W32GetUserSessionState(WPP_GLOBAL_Control, luidSystem[0]);
                  LOBYTE(v52) = v49;
                  LOBYTE(v53) = v46;
                  WPP_RECORDER_AND_TRACE_SF_d(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v53,
                    v52,
                    *(_QWORD *)(v51 + 69152),
                    4,
                    2,
                    80,
                    (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
                    v50);
                }
                *((_DWORD *)v23 + 3) |= 0x80000u;
                v6 = 0;
              }
              else
              {
                v8 = 0;
              }
            }
            ObfDereferenceObject(v48);
          }
          ProcessInheritedFromUniqueProcessId = (void *)v115;
          v7 = v120;
        }
      }
    }
    ObfDereferenceObject(Process);
    if ( v8 )
      goto LABEL_139;
    v55 = v7++;
    v120 = v7;
    if ( v55 >= 5 )
      goto LABEL_61;
  }
  v79 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v80 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v80 = 0;
  }
  v81 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v80 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v82 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
    LOBYTE(v83) = v81;
    LOBYTE(v84) = v80;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v84,
      v83,
      *(_QWORD *)(v82 + 69152),
      4,
      2,
      70,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
  }
  v85 = *(CInputGlobals **)(W32GetUserSessionState(v79, v20) + 3056);
  v86 = (unsigned int *)UPDWORDPointer(0x2000LL);
  if ( CInputGlobals::IsTimeFromLastInputEvent(v85, *v86) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v88 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v88 = 0;
    }
    v89 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v88 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v90 = W32GetUserSessionState(WPP_GLOBAL_Control, v87);
      v112 = 71;
      goto LABEL_118;
    }
    goto LABEL_119;
  }
  if ( v6 )
  {
    if ( (*((_DWORD *)a2 + 3) & 1) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v88 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v88 = 0;
      }
      v89 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v88 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v90 = W32GetUserSessionState(WPP_GLOBAL_Control, v87);
        v112 = 72;
LABEL_118:
        LOBYTE(v92) = v89;
        LOBYTE(v91) = v88;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v91,
          v92,
          *(_QWORD *)(v90 + 69152),
          4,
          2,
          v112,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
      }
LABEL_119:
      v8 = 1;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v93 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v93 = 0;
      }
      v94 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v93 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v95 = W32GetUserSessionState(WPP_GLOBAL_Control, v87);
        LOBYTE(v96) = v94;
        LOBYTE(v97) = v93;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v97,
          v96,
          *(_QWORD *)(v95 + 69152),
          4,
          2,
          73,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
      }
    }
  }
  ObfDereferenceObject(Process);
  if ( v8 )
    goto LABEL_139;
LABEL_61:
  v56 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v57 = 0;
  }
  v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v57 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v59 = W32GetUserSessionState(WPP_GLOBAL_Control, v54);
    LOBYTE(v60) = v58;
    LOBYTE(v61) = v57;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v61,
      v60,
      *(_QWORD *)(v59 + 69152),
      4,
      2,
      81,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v56, v54) + 18944) )
  {
    v63 = *(_QWORD *)(W32GetUserSessionState(v62, v54) + 18944);
    if ( *(_DWORD *)(v63 + 664) <= 0x400u && (*(_DWORD *)(v63 + 680) & 0x40) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v64 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v64 = 0;
      }
      v65 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v64 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v66 = W32GetUserSessionState(WPP_GLOBAL_Control, v54);
        LOBYTE(v67) = v65;
        LOBYTE(v68) = v64;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v68,
          v67,
          *(_QWORD *)(v66 + 69152),
          4,
          2,
          113,
          (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
      }
      goto LABEL_137;
    }
  }
  v8 = 0;
LABEL_139:
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v103 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v104 = *((_DWORD *)a2 + 14);
    v105 = W32GetUserSessionState(WPP_GLOBAL_Control, v54);
    LOBYTE(v106) = v103;
    LOBYTE(v107) = v4;
    v108 = *(_QWORD *)(v105 + 69152);
    v109 = "Yes";
    if ( !v8 )
      v109 = "No";
    WPP_RECORDER_AND_TRACE_SF_sD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v107,
      v106,
      v108,
      v111,
      2,
      82,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
      (__int64)v109,
      v104);
  }
  return v8 != 0;
}
