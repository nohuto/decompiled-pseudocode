/*
 * XREFs of ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x14015C858
 * Callers:
 *     NtUserAllowSetForegroundWindow @ 0x14015C5F0 (NtUserAllowSetForegroundWindow.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x14018E130 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018EA74 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ProcessInfoFromPID @ 0x1401EE4B0 (ProcessInfoFromPID.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14023A1A0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027745C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x14027A188 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall _AllowSetForegroundWindow(__int64 a1, __int64 a2)
{
  char v2; // r13
  __int64 v3; // rbp
  char v4; // si
  bool v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 CurrentProcessWin32Process; // rax
  LastWokenThread *v11; // rcx
  const struct tagPROCESSINFO *v12; // r14
  unsigned int v13; // edi
  __int64 v14; // rdx
  bool v15; // bl
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  bool v21; // bp
  bool v22; // r15
  int v23; // ebx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  struct tagPROCESSINFO *ProcessInfo; // rbp
  bool v28; // bl
  bool v29; // bp
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  LastWokenThread *v33; // rcx
  bool v34; // r15
  bool v35; // r12
  int v36; // ebx
  int v37; // edi
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  bool v41; // r14
  bool v42; // r15
  int v43; // ebx
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  bool v47; // r15
  bool v48; // r12
  int v49; // ebx
  int v50; // edi
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  bool v54; // bl
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int16 v59; // [rsp+30h] [rbp-98h]
  _BYTE v60[80]; // [rsp+50h] [rbp-78h] BYREF

  v2 = a2;
  v3 = (int)a1;
  v4 = 1;
  v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      2,
      58,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
      v3,
      v2);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v12 = (const struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v11 = (LastWokenThread *)-*(_QWORD *)CurrentProcessWin32Process;
    v12 = (const struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  }
  v13 = 2;
  if ( (v2 & 1) != 0 || CanForceForeground(v12) )
  {
    if ( (_DWORD)v3 == -1 )
    {
      LastWokenThread::Clear(v11);
      v13 = 0;
      v20 = *(_QWORD *)&WPP_GLOBAL_Control;
      v21 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *((_DWORD *)v12 + 14);
        v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
        LOBYTE(v25) = v22;
        LOBYTE(v26) = v21;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v26,
          v25,
          *(_QWORD *)(v24 + 69160),
          4,
          2,
          60,
          (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
          v23);
      }
    }
    else
    {
      if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v11) )
      {
        CLockProcessByPid::CLockProcessByPid(v60, v3, 0LL);
        ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v60);
        CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v60);
      }
      else
      {
        ProcessInfo = (struct tagPROCESSINFO *)ProcessInfoFromPID((unsigned int)v3);
      }
      if ( ProcessInfo )
      {
        v33 = *(LastWokenThread **)&WPP_GLOBAL_Control;
        v34 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v36 = *((_DWORD *)ProcessInfo + 14);
          v37 = *((_DWORD *)v12 + 14);
          v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
          LOBYTE(v39) = v35;
          LOBYTE(v40) = v34;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v40,
            v39,
            *(_QWORD *)(v38 + 69160),
            4,
            2,
            62,
            (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
            v37,
            v36);
        }
        if ( *((_QWORD *)ProcessInfo + 40) )
        {
          v47 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
          v48 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v47 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v49 = *((_DWORD *)ProcessInfo + 14);
            v50 = *((_DWORD *)v12 + 14);
            v51 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
            LOBYTE(v52) = v48;
            LOBYTE(v53) = v47;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v53,
              v52,
              *(_QWORD *)(v51 + 69160),
              4,
              2,
              64,
              (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
              v50,
              v49);
          }
          v54 = 0;
          if ( (unsigned int)IsDesktopApp(v12, v19) )
          {
            LOBYTE(v55) = 1;
            v54 = (unsigned int)LastWokenThread::Test(ProcessInfo, v55) == 3;
          }
          LOBYTE(v56) = v54;
          LastWokenThread::Set(*((_QWORD *)ProcessInfo + 40), 1LL, v56);
          v13 = 1;
        }
        else
        {
          LastWokenThread::Clear(v33);
          v13 = 0;
          v20 = *(_QWORD *)&WPP_GLOBAL_Control;
          v41 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
          v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v41 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v43 = *((_DWORD *)ProcessInfo + 14);
            v44 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
            LOBYTE(v45) = v42;
            LOBYTE(v46) = v41;
            WPP_RECORDER_AND_TRACE_SF_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v46,
              v45,
              *(_QWORD *)(v44 + 69160),
              4,
              2,
              63,
              (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
              v43);
          }
        }
      }
      else
      {
        v20 = *(_QWORD *)&WPP_GLOBAL_Control;
        v13 = 3;
        v28 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v28 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
          LOBYTE(v31) = v29;
          LOBYTE(v32) = v28;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v32,
            v31,
            *(_QWORD *)(v30 + 69160),
            3,
            2,
            61,
            (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
        }
      }
    }
    if ( (v2 & 2) != 0 )
    {
      *(_QWORD *)(W32GetUserSessionState(v20, v19) + 18840) = 0LL;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v4 = 0;
      }
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v57);
        v59 = 65;
        goto LABEL_78;
      }
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v4 = 0;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      v59 = 59;
LABEL_78:
      LOBYTE(v18) = v15;
      LOBYTE(v17) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v17,
        v18,
        *(_QWORD *)(v16 + 69160),
        4,
        2,
        v59,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    }
  }
  return v13;
}
