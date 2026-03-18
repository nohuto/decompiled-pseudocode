/*
 * XREFs of ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1401A2F28
 * Callers:
 *     NtUserAllowSetForegroundWindow @ 0x1401A2A40 (NtUserAllowSetForegroundWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A1D34 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401A3E8C (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ?_Cleanup@CLockProcessByPid@@AEAAXXZ @ 0x1401A4E94 (-_Cleanup@CLockProcessByPid@@AEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ProcessInfoFromPID @ 0x1402192BC (ProcessInfoFromPID.c)
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
  __int64 v11; // rcx
  const struct tagPROCESSINFO *v12; // r15
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r14
  LastWokenThread *v16; // rcx
  bool v17; // bp
  bool v18; // r12
  int v19; // ebx
  int v20; // edi
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  bool v24; // bp
  bool v25; // r12
  bool v26; // bl
  __int64 v27; // rdx
  __int64 v28; // r8
  struct MOVESIZEDATA *v29; // rcx
  __int64 v31; // rdx
  bool v32; // bl
  __int64 v33; // rax
  int v34; // edx
  int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 ProcessWin32Process; // rax
  bool v39; // bp
  bool v40; // r15
  int v41; // ebx
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  __int64 v45; // rdx
  int v46; // ebx
  int v47; // edi
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  bool v51; // bl
  bool v52; // bp
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  bool v56; // bp
  bool v57; // r14
  int v58; // ebx
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  struct tagTHREADINFO *v62; // rax
  __int16 v63; // [rsp+30h] [rbp-98h]
  _BYTE v64[24]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v65; // [rsp+68h] [rbp-60h]
  __int64 v66; // [rsp+80h] [rbp-48h]

  v2 = a2;
  v3 = (int)a1;
  v4 = 1;
  v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      2,
      58,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
      v3,
      v2);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v12 = (const struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v12 = (const struct tagPROCESSINFO *)(v11 & CurrentProcessWin32Process);
  }
  v13 = 2;
  if ( (v2 & 1) != 0 || CanForceForeground(v12) )
  {
    if ( (_DWORD)v3 == -1 )
    {
      LastWokenThread::Clear((LastWokenThread *)v11);
      v13 = 0;
      v29 = WPP_GLOBAL_Control;
      v56 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v57 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v56 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v58 = *((_DWORD *)v12 + 14);
        v59 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v60) = v57;
        LOBYTE(v61) = v56;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v61,
          v60,
          *(_QWORD *)(v59 + 69152),
          4,
          2,
          60,
          (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
          v58);
      }
    }
    else
    {
      if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
      {
        CLockProcessByPid::CLockProcessByPid(v64, v3, 0LL);
        v37 = v65;
        if ( v65 )
        {
          ProcessWin32Process = PsGetProcessWin32Process(v65);
          v15 = ProcessWin32Process;
          if ( ProcessWin32Process )
          {
            v36 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
            v15 = v36 & ProcessWin32Process;
          }
          v37 = v65;
        }
        else
        {
          v15 = 0LL;
        }
        if ( v37 )
        {
          if ( (v64[20] & 8) != 0 )
          {
            v62 = PtiCurrent(v36);
            *((_QWORD *)v62 + 47) = v66;
          }
          CLockProcessByPid::_Cleanup((CLockProcessByPid *)v64);
        }
      }
      else
      {
        v15 = ProcessInfoFromPID((unsigned int)v3);
      }
      if ( v15 )
      {
        v16 = WPP_GLOBAL_Control;
        v17 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v19 = *(_DWORD *)(v15 + 56);
          v20 = *((_DWORD *)v12 + 14);
          v21 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v22) = v18;
          LOBYTE(v23) = v17;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v23,
            v22,
            *(_QWORD *)(v21 + 69152),
            4,
            2,
            62,
            (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
            v20,
            v19);
        }
        if ( *(_QWORD *)(v15 + 328) )
        {
          v24 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v46 = *(_DWORD *)(v15 + 56);
            v47 = *((_DWORD *)v12 + 14);
            v48 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
            LOBYTE(v49) = v25;
            LOBYTE(v50) = v24;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v50,
              v49,
              *(_QWORD *)(v48 + 69152),
              4,
              2,
              64,
              (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
              v47,
              v46);
          }
          v26 = 0;
          if ( (unsigned int)IsDesktopApp(v12) )
          {
            LOBYTE(v27) = 1;
            v26 = (unsigned int)LastWokenThread::Test(v15, v27) == 3;
          }
          LOBYTE(v28) = v26;
          LastWokenThread::Set(*(_QWORD *)(v15 + 328), 1LL, v28);
          v13 = 1;
        }
        else
        {
          LastWokenThread::Clear(v16);
          v13 = 0;
          v29 = WPP_GLOBAL_Control;
          v39 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v39 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v41 = *(_DWORD *)(v15 + 56);
            v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
            LOBYTE(v43) = v40;
            LOBYTE(v44) = v39;
            WPP_RECORDER_AND_TRACE_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v44,
              v43,
              *(_QWORD *)(v42 + 69152),
              4,
              2,
              63,
              (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
              v41);
          }
        }
      }
      else
      {
        v29 = WPP_GLOBAL_Control;
        v13 = 3;
        v51 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v51 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v53 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
          LOBYTE(v54) = v52;
          LOBYTE(v55) = v51;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v55,
            v54,
            *(_QWORD *)(v53 + 69152),
            3,
            2,
            61,
            (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
        }
      }
    }
    if ( (v2 & 2) != 0 )
    {
      *(_QWORD *)(W32GetUserSessionState(v29, v14) + 18888) = 0LL;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v4 = 0;
      }
      v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v45);
        v63 = 65;
        goto LABEL_39;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v4 = 0;
    }
    v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
      v63 = 59;
LABEL_39:
      LOBYTE(v35) = v32;
      LOBYTE(v34) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v35,
        *(_QWORD *)(v33 + 69152),
        4,
        2,
        v63,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    }
  }
  return v13;
}
