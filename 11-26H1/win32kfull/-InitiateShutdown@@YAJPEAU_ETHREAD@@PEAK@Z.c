/*
 * XREFs of ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x14026BC80
 * Callers:
 *     xxxSetInformationThread @ 0x1400569F0 (xxxSetInformationThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1400574EC (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x140250434 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x140264314 (-NotifyLogon@@YAHK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall InitiateShutdown(PETHREAD Thread, unsigned int *a2)
{
  int v4; // edi
  unsigned int v5; // edi
  PEPROCESS ThreadProcess; // rax
  _QWORD *ProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r14
  __int64 v11; // r13
  HANDLE v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // si
  bool v16; // di
  char ProcessId; // bl
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  bool v24; // di
  char v25; // bl
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  bool v31; // r12
  int v32; // edi
  char ThreadId; // bl
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  bool v39; // di
  char v40; // bl
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  bool v46; // di
  char v47; // bl
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  char v60; // r14
  unsigned int CurrentThreadId; // ebx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  HANDLE v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 ThreadWin32Thread; // rbx
  int v70; // edi
  unsigned int v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 CurrentThreadProcessId; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v86[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v87; // [rsp+60h] [rbp-20h]
  int v88; // [rsp+68h] [rbp-18h]

  v85 = 0LL;
  GetProcessLuid(Thread, &v85);
  v4 = *a2;
  if ( v85 == __PAIR64__(luidSystem[1], luidSystem[0]) )
    v5 = v4 | 0x100;
  else
    v5 = v4 & 0xFFFFFEFF;
  ThreadProcess = PsGetThreadProcess(Thread);
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(ThreadProcess);
  v10 = ProcessWin32Process;
  if ( !ProcessWin32Process || !*ProcessWin32Process )
    return 3221225480LL;
  v11 = ProcessWin32Process[82];
  v12 = *(HANDLE *)(W32GetUserSessionState(v9, v8) + 63536);
  v15 = 1;
  if ( PsGetThreadProcessId(Thread) == v12 )
    goto LABEL_53;
  v5 &= ~0x200u;
  *a2 = v5;
  if ( !v11 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v15 = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      ProcessId = (unsigned __int8)PsGetProcessId((PEPROCESS)*v10);
      UserSessionState = W32GetUserSessionState(v19, v18);
      LOBYTE(v21) = v16;
      LOBYTE(v22) = v15;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 69152),
        3,
        11,
        10,
        (__int64)&WPP_16d99dae375038a043ec2d3ce624d2cd_Traceguids,
        ProcessId);
    }
    return 3221225480LL;
  }
  if ( !RtlAreAllAccessesGranted(*((_DWORD *)v10 + 168), 0x40u) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v15 = 0;
    }
    v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v25 = (unsigned __int8)PsGetProcessId((PEPROCESS)*v10);
      v28 = W32GetUserSessionState(v27, v26);
      LOBYTE(v29) = v24;
      LOBYTE(v30) = v15;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(v28 + 69152),
        3,
        11,
        11,
        (__int64)&WPP_16d99dae375038a043ec2d3ce624d2cd_Traceguids,
        v25);
    }
    return 3221225506LL;
  }
  if ( (v5 & 1) != 0 )
  {
    v86[0] = 1;
    v88 = 0;
    v86[1] = 1;
    v87 = 19LL;
    if ( (unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !(unsigned __int8)IsPrivilegedEx(*v10, Thread, v86) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v15 = 0;
        }
        v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v32 = *((_DWORD *)v10 + 14);
          ThreadId = (unsigned __int8)PsGetThreadId(Thread);
          v36 = W32GetUserSessionState(v35, v34);
          LOBYTE(v37) = v31;
          LOBYTE(v38) = v15;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v38,
            v37,
            *(_QWORD *)(v36 + 69152),
            3,
            11,
            12,
            (__int64)&WPP_16d99dae375038a043ec2d3ce624d2cd_Traceguids,
            ThreadId,
            v32);
        }
        return 3221225569LL;
      }
    }
    else if ( !(unsigned int)IsPrivileged(v86) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v15 = 0;
      }
      v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v40 = (unsigned __int8)PsGetProcessId((PEPROCESS)*v10);
        v43 = W32GetUserSessionState(v42, v41);
        LOBYTE(v44) = v39;
        LOBYTE(v45) = v15;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v45,
          v44,
          *(_QWORD *)(v43 + 69152),
          3,
          11,
          13,
          (__int64)&WPP_16d99dae375038a043ec2d3ce624d2cd_Traceguids,
          v40);
      }
      return 3221225569LL;
    }
LABEL_53:
    if ( *(_DWORD *)(W32GetUserSessionState(v14, v13) + 63464) )
    {
      v56 = *(_QWORD *)(W32GetUserSessionState(v54, v53) + 63504);
      if ( (_DWORD)v85 != *(_DWORD *)(v56 + 144)
        || (v56 = *(_QWORD *)(W32GetUserSessionState(v56, v55) + 63504), HIDWORD(v85) != *(_DWORD *)(v56 + 148)) )
      {
        v57 = *(_QWORD *)(W32GetUserSessionState(v56, v55) + 63496);
        if ( v57 != *(_QWORD *)(W32GetUserSessionState(v59, v58) + 63536) )
          return 3221226029LL;
      }
      v60 = v5 & ~(unsigned __int8)*(_DWORD *)(W32GetUserSessionState(v56, v55) + 63492) & 7;
      if ( v60 )
      {
        CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
        if ( CurrentThreadId != *(_DWORD *)(W32GetUserSessionState(v63, v62) + 63464) )
        {
          if ( (v5 & 1) == 0 && v11 != *(_QWORD *)(W32GetUserSessionState(v65, v64) + 63504) )
            return 2147483665LL;
          if ( (v60 & 4) != 0 )
            return 3221226029LL;
        }
      }
      return 259LL;
    }
    v66 = *(HANDLE *)(W32GetUserSessionState(v54, v53) + 63536);
    if ( PsGetThreadProcessId(Thread) != v66 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
      if ( (v5 & 0x8000) != 0 )
      {
        v5 &= ~0x8000u;
        *a2 = v5;
      }
      if ( (unsigned int)NotifyLogon(v5) )
        return 259LL;
      if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 932) )
        return 3221225688LL;
    }
    v70 = v5 | 0x200;
    *a2 = v70;
    *(_DWORD *)(W32GetUserSessionState(v68, v67) + 63492) = v70;
    v71 = (unsigned int)PsGetCurrentThreadId();
    *(_DWORD *)(W32GetUserSessionState(v73, v72) + 63464) = v71;
    v76 = W32GetUserSessionState(v75, v74);
    *(_DWORD *)(*(_QWORD *)(v76 + 19904) + 2236LL) |= 1u;
    CurrentThreadProcessId = PsGetCurrentThreadProcessId();
    *(_QWORD *)(W32GetUserSessionState(v79, v78) + 63496) = CurrentThreadProcessId;
    v82 = W32GetUserSessionState(v81, v80);
    LockObjectAssignment(v82 + 63504, v11);
    LODWORD(CurrentThreadProcessId) = *(_DWORD *)(v11 + 32);
    *(_QWORD *)(v11 + 144) = v85;
    *(_DWORD *)(W32GetUserSessionState(v84, v83) + 63488) = CurrentThreadProcessId & 3;
    *(_DWORD *)(v11 + 32) |= 0xAu;
    return 0LL;
  }
  if ( (*(_DWORD *)(v11 + 32) & 4) == 0 )
    goto LABEL_53;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
  {
    v15 = 0;
  }
  v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v47 = (unsigned __int8)PsGetProcessId((PEPROCESS)*v10);
    v50 = W32GetUserSessionState(v49, v48);
    LOBYTE(v51) = v46;
    LOBYTE(v52) = v15;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v52,
      v51,
      *(_QWORD *)(v50 + 69152),
      3,
      11,
      14,
      (__int64)&WPP_16d99dae375038a043ec2d3ce624d2cd_Traceguids,
      v47,
      v11);
  }
  return 3221225488LL;
}
