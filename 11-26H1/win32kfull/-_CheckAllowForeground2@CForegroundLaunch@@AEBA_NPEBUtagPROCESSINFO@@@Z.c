/*
 * XREFs of ?_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402AB32C
 * Callers:
 *     ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402ABE40 (-_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_sD @ 0x140159EDC (WPP_RECORDER_AND_TRACE_SF_sD.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsShellProcess @ 0x1401A1AF8 (IsShellProcess.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401A3E8C (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?_HasLegacyForegroundActivateRight@CForegroundLaunch@@AEBA_NPEAU_EPROCESS@@@Z @ 0x1401A44E8 (-_HasLegacyForegroundActivateRight@CForegroundLaunch@@AEBA_NPEAU_EPROCESS@@@Z.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  const struct tagPROCESSINFO *ProcessWin32Process; // rax
  __int64 v21; // rdx
  const struct tagPROCESSINFO *v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
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
  __int64 v46; // rdx
  bool v47; // r12
  int v48; // ebx
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  __int64 v52; // rdx
  unsigned int v53; // eax
  struct MOVESIZEDATA *v54; // rcx
  char v55; // bl
  bool v56; // si
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  __int64 v60; // rcx
  __int64 v61; // rax
  char v62; // bl
  bool v63; // si
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  char v67; // bl
  bool v68; // si
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx
  char v72; // bl
  bool v73; // r14
  __int64 v74; // rax
  int v75; // edx
  int v76; // r8d
  struct MOVESIZEDATA *v77; // rcx
  char v78; // bl
  bool v79; // r14
  __int64 v80; // rax
  int v81; // r8d
  int v82; // edx
  CInputGlobals *v83; // rbx
  unsigned int *v84; // rax
  __int64 v85; // rdx
  char v86; // bl
  bool v87; // si
  __int64 v88; // rax
  int v89; // edx
  int v90; // r8d
  char v91; // bl
  bool v92; // r14
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
  int v104; // [rsp+20h] [rbp-79h]
  __int16 v105; // [rsp+30h] [rbp-69h]
  __int16 v106; // [rsp+30h] [rbp-69h]
  struct _LUID AuthenticationId; // [rsp+50h] [rbp-49h] BYREF
  char v108[8]; // [rsp+60h] [rbp-39h] BYREF
  int v109; // [rsp+68h] [rbp-31h]
  PEPROCESS Process; // [rsp+78h] [rbp-21h]
  int v111; // [rsp+88h] [rbp-11h]
  unsigned int v114; // [rsp+110h] [rbp+77h]
  __int64 v115; // [rsp+118h] [rbp+7Fh]

  v2 = 0;
  if ( *((_BYTE *)this + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1064);
  v4 = 1;
  v5 = 1;
  v114 = 0;
  v6 = 0;
  v7 = 0;
  ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)a2);
  v115 = ProcessInheritedFromUniqueProcessId;
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
  {
    v8 = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (v8 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v2 = 1;
  }
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = *((_DWORD *)a2 + 14);
    UserSessionState = W32GetUserSessionState(v8, WPP_GLOBAL_Control);
    LOBYTE(v14) = v11;
    LOBYTE(v15) = v2;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      2,
      55,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
      v12);
    ProcessInheritedFromUniqueProcessId = v115;
  }
  while ( 1 )
  {
    CLockProcessByPid::CLockProcessByPid((__int64)v108, ProcessInheritedFromUniqueProcessId, 0, v10, 0);
    if ( v109 < 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v72 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v72 = 0;
      }
      v73 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v72 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v74 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
        v105 = 60;
LABEL_132:
        LOBYTE(v76) = v73;
        LOBYTE(v75) = v72;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v75,
          v76,
          *(_QWORD *)(v74 + 69152),
          4,
          2,
          v105,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
      }
LABEL_133:
      if ( CForegroundLaunch::_HasLegacyForegroundActivateRight(this, *(struct _EPROCESS **)a2) )
        v7 = 1;
      goto LABEL_135;
    }
    v18 = v111;
    if ( (unsigned int)W32GetCurrentWin32kSessionId(v17) != v18 )
      break;
    ProcessWin32Process = (const struct tagPROCESSINFO *)PsGetProcessWin32Process(Process);
    v22 = ProcessWin32Process;
    if ( !ProcessWin32Process || !*(_QWORD *)ProcessWin32Process )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v72 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v72 = 0;
      }
      v73 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v72 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v74 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
        v105 = 61;
        goto LABEL_132;
      }
      goto LABEL_133;
    }
    if ( !v5
      && ((unsigned int)IsShellProcess((__int64)ProcessWin32Process)
       || (v24 = *(_QWORD *)(v23 + 656)) != 0 && (*(_DWORD *)(v24 + 32) & 4) != 0) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v67 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v67 = 0;
      }
      v68 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v67 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v69 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
        LOBYTE(v70) = v68;
        LOBYTE(v71) = v67;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v71,
          v70,
          *(_QWORD *)(v69 + 69152),
          4,
          2,
          62,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
      }
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v108);
      goto LABEL_59;
    }
    v7 = CanForceForeground(v22, v21);
    if ( !v7 )
    {
      v26 = (tagTHREADINFO *)*((_QWORD *)v22 + 41);
      if ( v26 && tagTHREADINFO::ComputeAndTestForegroundActivate(v26) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v27 = 0;
        }
        v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v29 = *((_DWORD *)v22 + 14);
          v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
          LOBYTE(v31) = v28;
          LOBYTE(v32) = v27;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v31,
            *(_QWORD *)(v30 + 69152),
            4,
            2,
            63,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
            v29);
        }
        v7 = 1;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v33 = 0;
        }
        v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
          LOBYTE(v36) = v34;
          LOBYTE(v37) = v33;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v37,
            v36,
            *(_QWORD *)(v35 + 69152),
            4,
            2,
            64,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
        }
        v115 = PsGetProcessInheritedFromUniqueProcessId(Process);
        ProcessInheritedFromUniqueProcessId = v115;
        if ( !v5 )
          goto LABEL_57;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v39 = 0;
        }
        v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v39 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v41 = W32GetUserSessionState(WPP_GLOBAL_Control, v38);
          LOBYTE(v42) = v40;
          LOBYTE(v43) = v39;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v43,
            v42,
            *(_QWORD *)(v41 + 69152),
            4,
            2,
            65,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
        }
        v44 = 0;
        v5 = 0;
        v45 = PsReferencePrimaryToken(Process);
        if ( v45 )
        {
          AuthenticationId = 0LL;
          if ( SeQueryAuthenticationIdToken(v45, &AuthenticationId) >= 0 )
          {
            if ( AuthenticationId.LowPart == luidSystem[0] && AuthenticationId.HighPart == luidSystem[1] )
            {
              v7 = 1;
              if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0 )
              {
                v44 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
              }
              v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v44 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v48 = *((_DWORD *)v22 + 14);
                v49 = W32GetUserSessionState(WPP_GLOBAL_Control, v46);
                LOBYTE(v50) = v47;
                LOBYTE(v51) = v44;
                WPP_RECORDER_AND_TRACE_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v51,
                  v50,
                  *(_QWORD *)(v49 + 69152),
                  4,
                  2,
                  66,
                  (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
                  v48);
              }
              *((_DWORD *)v22 + 3) |= 0x80000u;
              v6 = v114;
            }
            else
            {
              v7 = 0;
            }
          }
        }
      }
    }
    ProcessInheritedFromUniqueProcessId = v115;
LABEL_57:
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v108);
    if ( v7 )
      goto LABEL_138;
    v53 = v6++;
    v114 = v6;
    if ( v53 >= 5 )
      goto LABEL_59;
  }
  v77 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v78 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v78 = 0;
  }
  v79 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v78 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v80 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
    LOBYTE(v81) = v79;
    LOBYTE(v82) = v78;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v82,
      v81,
      *(_QWORD *)(v80 + 69152),
      4,
      2,
      56,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
  }
  v83 = *(CInputGlobals **)(W32GetUserSessionState(v77, v19) + 3056);
  v84 = (unsigned int *)UPDWORDPointer(0x2000LL);
  if ( CInputGlobals::IsTimeFromLastInputEvent(v83, *v84) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v86 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v86 = 0;
    }
    v87 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v86 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v88 = W32GetUserSessionState(WPP_GLOBAL_Control, v85);
      v106 = 57;
      goto LABEL_116;
    }
    goto LABEL_117;
  }
  if ( !v5 )
    goto LABEL_135;
  if ( (*((_DWORD *)a2 + 3) & 1) != 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v86 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v86 = 0;
    }
    v87 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v86 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v88 = W32GetUserSessionState(WPP_GLOBAL_Control, v85);
      v106 = 58;
LABEL_116:
      LOBYTE(v90) = v87;
      LOBYTE(v89) = v86;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v89,
        v90,
        *(_QWORD *)(v88 + 69152),
        4,
        2,
        v106,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
    }
LABEL_117:
    v7 = 1;
    goto LABEL_135;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v91 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v91 = 0;
  }
  v92 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v91 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v93 = W32GetUserSessionState(WPP_GLOBAL_Control, v85);
    LOBYTE(v94) = v92;
    LOBYTE(v95) = v91;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v95,
      v94,
      *(_QWORD *)(v93 + 69152),
      4,
      2,
      59,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
  }
LABEL_135:
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v108);
  if ( v7 )
    goto LABEL_138;
LABEL_59:
  v54 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v55 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v55 = 0;
  }
  v56 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v55 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v57 = W32GetUserSessionState(WPP_GLOBAL_Control, v52);
    LOBYTE(v58) = v56;
    LOBYTE(v59) = v55;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v59,
      v58,
      *(_QWORD *)(v57 + 69152),
      4,
      2,
      67,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v54, v52) + 18944)
    && (v61 = *(_QWORD *)(W32GetUserSessionState(v60, v52) + 18944), *(_DWORD *)(v61 + 664) <= 0x400u)
    && (*(_DWORD *)(v61 + 680) & 0x40) != 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v62 = 0;
    }
    v63 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v62 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v64 = W32GetUserSessionState(WPP_GLOBAL_Control, v52);
      LOBYTE(v65) = v63;
      LOBYTE(v66) = v62;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v66,
        v65,
        *(_QWORD *)(v64 + 69152),
        4,
        2,
        113,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
LABEL_138:
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v96 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v97 = *((_DWORD *)a2 + 14);
    v98 = W32GetUserSessionState(WPP_GLOBAL_Control, v52);
    LOBYTE(v99) = v96;
    LOBYTE(v100) = v4;
    v101 = *(_QWORD *)(v98 + 69152);
    v102 = "Yes";
    if ( !v7 )
      v102 = "No";
    WPP_RECORDER_AND_TRACE_SF_sD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v100,
      v99,
      v101,
      v104,
      2,
      68,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
      (__int64)v102,
      v97);
  }
  return v7;
}
