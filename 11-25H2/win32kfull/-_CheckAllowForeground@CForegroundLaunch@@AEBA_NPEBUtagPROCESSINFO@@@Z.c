/*
 * XREFs of ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402904D0
 * Callers:
 *     ?ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x14018ED6C (-ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401D9F64 (-ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028F334 (-TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x14018E130 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?_HasLegacyForegroundActivateRight@CForegroundLaunch@@AEBA_NPEAU_EPROCESS@@@Z @ 0x14018EAB0 (-_HasLegacyForegroundActivateRight@CForegroundLaunch@@AEBA_NPEAU_EPROCESS@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_sD @ 0x1401A4C78 (WPP_RECORDER_AND_TRACE_SF_sD.c)
 *     IsShellProcess @ 0x1401A7FD8 (IsShellProcess.c)
 *     LockProcessByClientIdEx @ 0x1401BCBA0 (LockProcessByClientIdEx.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x14027A188 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x14028F9BC (-_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 */

char __fastcall CForegroundLaunch::_CheckAllowForeground(CForegroundLaunch *this, const struct tagPROCESSINFO *a2)
{
  struct _EPROCESS *v4; // r14
  char v5; // di
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
  __int64 v18; // rdx
  const struct tagPROCESSINFO *ProcessWin32Process; // rax
  __int64 v20; // rdx
  const struct tagPROCESSINFO *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int8 v24; // al
  __int64 v25; // rdx
  tagTHREADINFO *v26; // rcx
  char v27; // si
  bool v28; // r15
  int v29; // ebx
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  char v33; // bl
  bool v34; // r15
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rdx
  char v39; // bl
  bool v40; // r15
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  bool v44; // r15
  PACCESS_TOKEN v45; // rax
  void *v46; // r13
  bool v47; // r12
  int v48; // ebx
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  __int64 v52; // rdx
  unsigned int v53; // eax
  char v54; // bl
  bool v55; // r14
  __int64 v56; // rax
  int v57; // edx
  int v58; // r8d
  char v59; // bl
  bool v60; // r14
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  __int64 v64; // rcx
  char v65; // bl
  bool v66; // r14
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  CInputGlobals *v70; // rbx
  unsigned int *v71; // rax
  __int64 v72; // rdx
  char v73; // bl
  bool v74; // si
  __int64 v75; // rax
  int v76; // edx
  int v77; // r8d
  char v78; // bl
  bool v79; // r14
  __int64 v80; // rax
  int v81; // r8d
  int v82; // edx
  __int64 v83; // rcx
  char v84; // bl
  bool v85; // si
  __int64 v86; // rax
  int v87; // r8d
  int v88; // edx
  __int64 v89; // rcx
  __int64 v90; // rax
  char v91; // bl
  bool v92; // si
  __int64 v93; // rax
  int v94; // r8d
  int v95; // edx
  bool v96; // r14
  int v97; // ebx
  __int64 v98; // rax
  int v99; // r8d
  int v100; // edx
  __int64 v101; // r9
  const char *v102; // rax
  int v104; // [rsp+20h] [rbp-49h]
  __int16 v105; // [rsp+30h] [rbp-39h]
  __int16 v106; // [rsp+30h] [rbp-39h]
  int v107; // [rsp+50h] [rbp-19h] BYREF
  PEPROCESS Process; // [rsp+58h] [rbp-11h] BYREF
  __int64 v109; // [rsp+60h] [rbp-9h]
  struct _LUID AuthenticationId; // [rsp+68h] [rbp-1h] BYREF
  struct _EPROCESS *v111; // [rsp+70h] [rbp+7h]
  unsigned int v114; // [rsp+E0h] [rbp+77h]

  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
    return CForegroundLaunch::_CheckAllowForeground2(this, a2);
  v4 = *(struct _EPROCESS **)a2;
  v5 = 1;
  v107 = -1;
  v6 = 1;
  v7 = 0;
  AuthenticationId = 0LL;
  v8 = 0;
  v111 = v4;
  Process = 0LL;
  v114 = 0;
  if ( *((_BYTE *)this + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1168);
  ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(v4);
  v109 = (__int64)ProcessInheritedFromUniqueProcessId;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v9 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v9 & 2) == 0)
    || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v11 = 0;
  }
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v13 = *((_DWORD *)a2 + 14);
    UserSessionState = W32GetUserSessionState(v9, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v15) = v12;
    LOBYTE(v16) = v11;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      2,
      64,
      (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
      v13);
    ProcessInheritedFromUniqueProcessId = (void *)v109;
  }
  while ( 1 )
  {
    if ( (int)LockProcessByClientIdEx(ProcessInheritedFromUniqueProcessId, &Process, &v107) < 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v78 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v78 = 0;
      }
      v79 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v78 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v80 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v17);
        LOBYTE(v81) = v79;
        LOBYTE(v82) = v78;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v82,
          v81,
          *(_QWORD *)(v80 + 69160),
          4,
          2,
          69,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
      }
      goto LABEL_119;
    }
    if ( v107 != (unsigned int)W32GetCurrentWin32kSessionId() )
    {
      v64 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v65 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v65 = 0;
      }
      v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v65 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v67 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v18);
        LOBYTE(v68) = v66;
        LOBYTE(v69) = v65;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v69,
          v68,
          *(_QWORD *)(v67 + 69160),
          4,
          2,
          65,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
      }
      v70 = *(CInputGlobals **)(W32GetUserSessionState(v64, v18) + 3056);
      v71 = (unsigned int *)UPDWORDPointer(0x2000LL);
      if ( CInputGlobals::IsTimeFromLastInputEvent(v70, *v71) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v73 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v73 = 0;
        }
        v74 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v73 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_102;
        v75 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v72);
        v106 = 66;
      }
      else
      {
        if ( !v6 )
        {
LABEL_111:
          ObfDereferenceObject(Process);
          goto LABEL_121;
        }
        if ( (*((_DWORD *)a2 + 3) & 1) == 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
            || (v54 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v54 = 0;
          }
          v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v54 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_111;
          v56 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v72);
          v105 = 68;
LABEL_110:
          LOBYTE(v58) = v55;
          LOBYTE(v57) = v54;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v57,
            v58,
            *(_QWORD *)(v56 + 69160),
            4,
            2,
            v105,
            (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
          goto LABEL_111;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v73 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v73 = 0;
        }
        v74 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v73 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        {
LABEL_102:
          v8 = 1;
          goto LABEL_111;
        }
        v75 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v72);
        v106 = 67;
      }
      LOBYTE(v77) = v74;
      LOBYTE(v76) = v73;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v76,
        v77,
        *(_QWORD *)(v75 + 69160),
        4,
        2,
        v106,
        (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
      goto LABEL_102;
    }
    ProcessWin32Process = (const struct tagPROCESSINFO *)PsGetProcessWin32Process(Process);
    v21 = ProcessWin32Process;
    if ( !ProcessWin32Process || !*(_QWORD *)ProcessWin32Process )
      break;
    if ( !v6
      && ((unsigned int)IsShellProcess((__int64)ProcessWin32Process)
       || (v23 = *(_QWORD *)(v22 + 648)) != 0 && (*(_DWORD *)(v23 + 64) & 4) != 0) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v54 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v54 = 0;
      }
      v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v54 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_111;
      v56 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
      v105 = 71;
      goto LABEL_110;
    }
    v24 = CanForceForeground(v21, v20);
    v8 = v24;
    if ( !v24 )
    {
      v26 = (tagTHREADINFO *)*((_QWORD *)v21 + 40);
      if ( v26 && tagTHREADINFO::ComputeAndTestForegroundActivate(v26) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v27 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v27 = 0;
        }
        v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v29 = *((_DWORD *)v21 + 14);
          v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
          LOBYTE(v31) = v28;
          LOBYTE(v32) = v27;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v32,
            v31,
            *(_QWORD *)(v30 + 69160),
            4,
            2,
            72,
            (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
            v29);
          ProcessInheritedFromUniqueProcessId = (void *)v109;
        }
        v8 = 1;
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v33 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v33 = 0;
        }
        v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
          LOBYTE(v36) = v34;
          LOBYTE(v37) = v33;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v37,
            v36,
            *(_QWORD *)(v35 + 69160),
            4,
            2,
            73,
            (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
        }
        v109 = PsGetProcessInheritedFromUniqueProcessId(Process);
        ProcessInheritedFromUniqueProcessId = (void *)v109;
        if ( v6 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
            || (v39 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v39 = 0;
          }
          v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v39 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v41 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v38);
            LOBYTE(v42) = v40;
            LOBYTE(v43) = v39;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v43,
              v42,
              *(_QWORD *)(v41 + 69160),
              4,
              2,
              74,
              (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
          }
          v44 = 0;
          v6 = 0;
          v45 = PsReferencePrimaryToken(Process);
          v46 = v45;
          if ( v45 )
          {
            if ( SeQueryAuthenticationIdToken(v45, &AuthenticationId) >= 0 )
            {
              if ( AuthenticationId.LowPart == luidSystem[0] && AuthenticationId.HighPart == luidSystem[1] )
              {
                v8 = 1;
                if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                  && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0 )
                {
                  v44 = *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
                }
                v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v44 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v48 = *((_DWORD *)v21 + 14);
                  v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, luidSystem[0]);
                  LOBYTE(v50) = v47;
                  LOBYTE(v51) = v44;
                  WPP_RECORDER_AND_TRACE_SF_d(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v51,
                    v50,
                    *(_QWORD *)(v49 + 69160),
                    4,
                    2,
                    75,
                    (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
                    v48);
                }
                *((_DWORD *)v21 + 3) |= 0x80000u;
                v6 = 0;
              }
              else
              {
                v8 = 0;
              }
            }
            ObfDereferenceObject(v46);
          }
          ProcessInheritedFromUniqueProcessId = (void *)v109;
          v7 = v114;
        }
      }
    }
    ObfDereferenceObject(Process);
    if ( v8 )
      goto LABEL_141;
    v53 = v7++;
    v114 = v7;
    if ( v53 >= 5 )
      goto LABEL_122;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v59 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v59 = 0;
  }
  v60 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v59 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v61 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
    LOBYTE(v62) = v60;
    LOBYTE(v63) = v59;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v63,
      v62,
      *(_QWORD *)(v61 + 69160),
      4,
      2,
      70,
      (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
  }
  ObfDereferenceObject(Process);
LABEL_119:
  if ( CForegroundLaunch::_HasLegacyForegroundActivateRight(this, v111) )
    v8 = 1;
LABEL_121:
  if ( v8 )
    goto LABEL_141;
LABEL_122:
  v83 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v84 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v84 = 0;
  }
  v85 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v84 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v86 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v52);
    LOBYTE(v87) = v85;
    LOBYTE(v88) = v84;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v88,
      v87,
      *(_QWORD *)(v86 + 69160),
      4,
      2,
      76,
      (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v83, v52) + 18904)
    && (v90 = *(_QWORD *)(W32GetUserSessionState(v89, v52) + 18904), *(_DWORD *)(v90 + 672) <= 0x400u)
    && (*(_DWORD *)(v90 + 688) & 0x40) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v91 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v91 = 0;
    }
    v92 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v91 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v93 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v52);
      LOBYTE(v94) = v92;
      LOBYTE(v95) = v91;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v95,
        v94,
        *(_QWORD *)(v93 + 69160),
        4,
        2,
        114,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    }
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
LABEL_141:
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v5 = 0;
  }
  v96 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v97 = *((_DWORD *)a2 + 14);
    v98 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v52);
    LOBYTE(v99) = v96;
    LOBYTE(v100) = v5;
    v101 = *(_QWORD *)(v98 + 69160);
    v102 = "Yes";
    if ( !v8 )
      v102 = "No";
    WPP_RECORDER_AND_TRACE_SF_sD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v100,
      v99,
      v101,
      v104,
      2,
      77,
      (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
      (__int64)v102,
      v97);
  }
  return v8 != 0;
}
