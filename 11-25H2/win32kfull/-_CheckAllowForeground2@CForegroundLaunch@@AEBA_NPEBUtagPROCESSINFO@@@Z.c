/*
 * XREFs of ?_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x14028F9BC
 * Callers:
 *     ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402904D0 (-_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x14018E130 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018EA74 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?_HasLegacyForegroundActivateRight@CForegroundLaunch@@AEBA_NPEAU_EPROCESS@@@Z @ 0x14018EAB0 (-_HasLegacyForegroundActivateRight@CForegroundLaunch@@AEBA_NPEAU_EPROCESS@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_sD @ 0x1401A4C78 (WPP_RECORDER_AND_TRACE_SF_sD.c)
 *     IsShellProcess @ 0x1401A7FD8 (IsShellProcess.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027745C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 */

char __fastcall CForegroundLaunch::_CheckAllowForeground2(CForegroundLaunch *this, const struct tagPROCESSINFO *a2)
{
  char v2; // r14
  char v4; // di
  char v5; // r13
  unsigned int v6; // r12d
  char v7; // si
  __int64 v8; // rcx
  __int64 ProcessInheritedFromUniqueProcessId; // rbx
  __int64 v10; // r9
  bool v11; // r15
  int v12; // ebx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // rdx
  const struct tagPROCESSINFO *ProcessWin32Process; // rax
  __int64 v20; // rdx
  const struct tagPROCESSINFO *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  tagTHREADINFO *v25; // rcx
  char v26; // si
  bool v27; // r15
  int v28; // ebx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  char v32; // bl
  bool v33; // r15
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  char v37; // bl
  bool v38; // r15
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  bool v42; // r15
  PACCESS_TOKEN v43; // rax
  bool v44; // r12
  int v45; // ebx
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  __int64 v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rcx
  char v52; // bl
  bool v53; // si
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  __int64 v57; // rcx
  __int64 v58; // rax
  char v59; // bl
  bool v60; // si
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  char v64; // bl
  bool v65; // si
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  char v69; // bl
  bool v70; // r14
  __int64 v71; // rax
  int v72; // edx
  int v73; // r8d
  __int64 v74; // rcx
  char v75; // bl
  bool v76; // r14
  __int64 v77; // rax
  int v78; // r8d
  int v79; // edx
  CInputGlobals *v80; // rbx
  unsigned int *v81; // rax
  __int64 v82; // rdx
  char v83; // bl
  bool v84; // si
  __int64 v85; // rax
  int v86; // edx
  int v87; // r8d
  char v88; // bl
  bool v89; // r14
  __int64 v90; // rax
  int v91; // r8d
  int v92; // edx
  bool v93; // r14
  int v94; // ebx
  __int64 v95; // rax
  int v96; // r8d
  int v97; // edx
  __int64 v98; // r9
  const char *v99; // rax
  int v101; // [rsp+20h] [rbp-79h]
  __int16 v102; // [rsp+30h] [rbp-69h]
  __int16 v103; // [rsp+30h] [rbp-69h]
  struct _LUID AuthenticationId; // [rsp+50h] [rbp-49h] BYREF
  char v105[8]; // [rsp+60h] [rbp-39h] BYREF
  int v106; // [rsp+68h] [rbp-31h]
  PEPROCESS Process; // [rsp+78h] [rbp-21h]
  int v108; // [rsp+88h] [rbp-11h]
  unsigned int v111; // [rsp+110h] [rbp+77h]
  __int64 v112; // [rsp+118h] [rbp+7Fh]

  v2 = 0;
  if ( *((_BYTE *)this + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 991);
  v4 = 1;
  v5 = 1;
  v111 = 0;
  v6 = 0;
  v7 = 0;
  ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)a2);
  v112 = ProcessInheritedFromUniqueProcessId;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    v8 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
    if ( (v8 & 2) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
      v2 = 1;
  }
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = *((_DWORD *)a2 + 14);
    UserSessionState = W32GetUserSessionState(v8, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v14) = v11;
    LOBYTE(v15) = v2;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      2,
      50,
      (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
      v12);
    ProcessInheritedFromUniqueProcessId = v112;
  }
  while ( 1 )
  {
    CLockProcessByPid::CLockProcessByPid((__int64)v105, ProcessInheritedFromUniqueProcessId, 0, v10, 0);
    if ( v106 < 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v69 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v69 = 0;
      }
      v70 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v69 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v71 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
        v102 = 55;
LABEL_132:
        LOBYTE(v73) = v70;
        LOBYTE(v72) = v69;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v72,
          v73,
          *(_QWORD *)(v71 + 69160),
          4,
          2,
          v102,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
      }
LABEL_133:
      if ( CForegroundLaunch::_HasLegacyForegroundActivateRight(this, *(struct _EPROCESS **)a2) )
        v7 = 1;
      goto LABEL_135;
    }
    v17 = v108;
    if ( (unsigned int)W32GetCurrentWin32kSessionId() != v17 )
      break;
    ProcessWin32Process = (const struct tagPROCESSINFO *)PsGetProcessWin32Process(Process);
    v21 = ProcessWin32Process;
    if ( !ProcessWin32Process || !*(_QWORD *)ProcessWin32Process )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v69 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v69 = 0;
      }
      v70 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v69 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v71 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
        v102 = 56;
        goto LABEL_132;
      }
      goto LABEL_133;
    }
    if ( !v5
      && ((unsigned int)IsShellProcess((__int64)ProcessWin32Process)
       || (v23 = *(_QWORD *)(v22 + 648)) != 0 && (*(_DWORD *)(v23 + 64) & 4) != 0) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v64 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v64 = 0;
      }
      v65 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v64 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v66 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
        LOBYTE(v67) = v65;
        LOBYTE(v68) = v64;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v68,
          v67,
          *(_QWORD *)(v66 + 69160),
          4,
          2,
          57,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
      }
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v105, v20);
      goto LABEL_59;
    }
    v7 = CanForceForeground(v21, v20);
    if ( !v7 )
    {
      v25 = (tagTHREADINFO *)*((_QWORD *)v21 + 40);
      if ( v25 && tagTHREADINFO::ComputeAndTestForegroundActivate(v25) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v26 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v26 = 0;
        }
        v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v28 = *((_DWORD *)v21 + 14);
          v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
          LOBYTE(v30) = v27;
          LOBYTE(v31) = v26;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v31,
            v30,
            *(_QWORD *)(v29 + 69160),
            4,
            2,
            58,
            (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
            v28);
        }
        v7 = 1;
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v32 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v32 = 0;
        }
        v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v32 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v34 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
          LOBYTE(v35) = v33;
          LOBYTE(v36) = v32;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v36,
            v35,
            *(_QWORD *)(v34 + 69160),
            4,
            2,
            59,
            (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
        }
        v112 = PsGetProcessInheritedFromUniqueProcessId(Process);
        ProcessInheritedFromUniqueProcessId = v112;
        if ( !v5 )
          goto LABEL_57;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v37 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v37 = 0;
        }
        v38 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v37 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v39 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
          LOBYTE(v40) = v38;
          LOBYTE(v41) = v37;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v41,
            v40,
            *(_QWORD *)(v39 + 69160),
            4,
            2,
            60,
            (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
        }
        v42 = 0;
        v5 = 0;
        v43 = PsReferencePrimaryToken(Process);
        if ( v43 )
        {
          AuthenticationId = 0LL;
          if ( SeQueryAuthenticationIdToken(v43, &AuthenticationId) >= 0 )
          {
            if ( AuthenticationId.LowPart == luidSystem[0] && AuthenticationId.HighPart == luidSystem[1] )
            {
              v7 = 1;
              if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0 )
              {
                v42 = *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
              }
              v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v42 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v45 = *((_DWORD *)v21 + 14);
                v46 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
                LOBYTE(v47) = v44;
                LOBYTE(v48) = v42;
                WPP_RECORDER_AND_TRACE_SF_d(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v48,
                  v47,
                  *(_QWORD *)(v46 + 69160),
                  4,
                  2,
                  61,
                  (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
                  v45);
              }
              *((_DWORD *)v21 + 3) |= 0x80000u;
              v6 = v111;
            }
            else
            {
              v7 = 0;
            }
          }
        }
      }
    }
    ProcessInheritedFromUniqueProcessId = v112;
LABEL_57:
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v105, v24);
    if ( v7 )
      goto LABEL_138;
    v50 = v6++;
    v111 = v6;
    if ( v50 >= 5 )
      goto LABEL_59;
  }
  v74 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v75 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v75 = 0;
  }
  v76 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v75 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v77 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v18);
    LOBYTE(v78) = v76;
    LOBYTE(v79) = v75;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v79,
      v78,
      *(_QWORD *)(v77 + 69160),
      4,
      2,
      51,
      (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
  }
  v80 = *(CInputGlobals **)(W32GetUserSessionState(v74, v18) + 3056);
  v81 = (unsigned int *)UPDWORDPointer(0x2000LL);
  if ( CInputGlobals::IsTimeFromLastInputEvent(v80, *v81) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v83 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v83 = 0;
    }
    v84 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v83 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v85 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v82);
      v103 = 52;
      goto LABEL_116;
    }
    goto LABEL_117;
  }
  if ( !v5 )
    goto LABEL_135;
  if ( (*((_DWORD *)a2 + 3) & 1) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v83 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v83 = 0;
    }
    v84 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v83 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v85 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v82);
      v103 = 53;
LABEL_116:
      LOBYTE(v87) = v84;
      LOBYTE(v86) = v83;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v86,
        v87,
        *(_QWORD *)(v85 + 69160),
        4,
        2,
        v103,
        (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
    }
LABEL_117:
    v7 = 1;
    goto LABEL_135;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v88 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v88 = 0;
  }
  v89 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v88 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v90 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v82);
    LOBYTE(v91) = v89;
    LOBYTE(v92) = v88;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v92,
      v91,
      *(_QWORD *)(v90 + 69160),
      4,
      2,
      54,
      (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
  }
LABEL_135:
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v105, v82);
  if ( v7 )
    goto LABEL_138;
LABEL_59:
  v51 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v52 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v52 = 0;
  }
  v53 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v52 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v54 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v49);
    LOBYTE(v55) = v53;
    LOBYTE(v56) = v52;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v56,
      v55,
      *(_QWORD *)(v54 + 69160),
      4,
      2,
      62,
      (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v51, v49) + 18904)
    && (v58 = *(_QWORD *)(W32GetUserSessionState(v57, v49) + 18904), *(_DWORD *)(v58 + 672) <= 0x400u)
    && (*(_DWORD *)(v58 + 688) & 0x40) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v59 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v59 = 0;
    }
    v60 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v59 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v61 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v49);
      LOBYTE(v62) = v60;
      LOBYTE(v63) = v59;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v63,
        v62,
        *(_QWORD *)(v61 + 69160),
        4,
        2,
        114,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
LABEL_138:
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v4 = 0;
  }
  v93 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v94 = *((_DWORD *)a2 + 14);
    v95 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v49);
    LOBYTE(v96) = v93;
    LOBYTE(v97) = v4;
    v98 = *(_QWORD *)(v95 + 69160);
    v99 = "Yes";
    if ( !v7 )
      v99 = "No";
    WPP_RECORDER_AND_TRACE_SF_sD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v97,
      v96,
      v98,
      v101,
      2,
      63,
      (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
      (__int64)v99,
      v94);
  }
  return v7;
}
