/*
 * XREFs of xxxTimersProc @ 0x140246B40
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1400337A0 (-xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x14010FFF0 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x14016F5B0 (-SetDelayableTimer@@YAXKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x14028BBF4 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxTimersProc(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  ULONG_PTR v4; // r14
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r15d
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // edi
  _QWORD *v29; // rbx
  int v30; // eax
  unsigned int v31; // ecx
  _QWORD *v32; // rbp
  __int64 v33; // rdx
  unsigned int v34; // eax
  _QWORD *v35; // rax
  ULONG_PTR v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  ULONG_PTR *v41; // rax
  _QWORD *v42; // rdx
  int v43; // eax
  __int64 v44; // rcx
  _QWORD *v45; // rbx
  __int64 v46; // r8
  int v47; // eax
  unsigned int v48; // eax
  _QWORD *v49; // rax
  _QWORD *v50; // r8
  _QWORD *v51; // rdi
  __int64 *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  _QWORD *v57; // rbx
  int v58; // ecx
  bool v59; // zf
  unsigned int v60; // ecx
  _QWORD *v61; // rsi
  unsigned int v62; // eax
  ULONG_PTR *v63; // rax
  ULONG_PTR v64; // rcx
  _QWORD *v65; // rax
  _QWORD *v66; // r8
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 result; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  ULONG_PTR *v77; // rax
  int v78; // [rsp+20h] [rbp-68h]
  ULONG_PTR BugCheckParameter3; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *i; // [rsp+30h] [rbp-58h]
  unsigned int v81; // [rsp+A8h] [rbp+20h]

  *(_BYTE *)(W32GetUserSessionState(a1, a2) + 62720) = 1;
  v4 = 0LL;
  *(_BYTE *)(W32GetUserSessionState(v3, v2) + 18664) = 0;
  while ( 1 )
  {
    *(_BYTE *)(W32GetUserSessionState(v6, v5) + 18665) = 0;
    v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v78 = v7;
    v10 = v7 - *(_DWORD *)(W32GetUserSessionState(v9, v8) + 57584);
    v81 = v10;
    v13 = 0x7FFFFFFF;
    v14 = 0x7FFFFFFF;
    *(_DWORD *)(W32GetUserSessionState(v12, v11) + 57584) = v7;
    v17 = W32GetUserSessionState(v16, v15) + 57544;
    v18 = *(_QWORD **)v17;
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v20, v19, v21, v22);
    if ( CurrentThreadWin32Thread )
      v27 = *CurrentThreadWin32Thread;
    else
      v27 = 0LL;
    BugCheckParameter3 = *(_QWORD *)(v27 + 456);
    *(_QWORD *)(v27 + 456) = &BugCheckParameter3;
    i = 0LL;
    while ( v18 != (_QWORD *)v17 )
    {
      v28 = *((_DWORD *)v18 - 6);
      v29 = v18 - 9;
      if ( (v28 & 0x20) != 0 || (v30 = *(_DWORD *)(v18 - 3) & 0xC00, v30 == 1024) )
      {
        v18 = (_QWORD *)*v18;
      }
      else if ( (v28 & 0x1000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1537LL);
        v18 = (_QWORD *)*v18;
      }
      else
      {
        if ( (v28 & 8) != 0 || v30 == 2048 )
        {
          *((_DWORD *)v29 + 12) = v28 & 0xFFFFF7F7;
          LOWORD(v28) = -2049;
        }
        else
        {
          _m_prefetchw((char *)v29 + 52);
          v31 = *((_DWORD *)v29 + 13);
          *((_DWORD *)v29 + 13) = v31 - v10;
          if ( v31 <= v10 )
          {
            v32 = i;
            i = v18 - 9;
            HMLockObject(v18 - 9);
            if ( v32 )
              HMUnlockObject(v32);
            xxxReadyTimer((struct tagTIMER *)(v18 - 9), v78);
            v10 = v81;
          }
        }
        v18 = (_QWORD *)*v18;
        if ( (v29[6] & 0x1000) != 0 || (*(_BYTE *)(_HMPheFromObjectWorker(v29) + 25) & 1) != 0 )
        {
          if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( (v29[6] & 0x1000) == 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1591LL);
            if ( (*(_BYTE *)(_HMPheFromObjectWorker(v29) + 25) & 1) == 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1593LL);
          }
        }
        else
        {
          if ( (v28 & 0x800) != 0 )
            *((_DWORD *)v29 + 12) &= ~0x800u;
          if ( *((_DWORD *)v29 + 13) < v13 )
            v13 = *((_DWORD *)v29 + 13);
          v34 = CoalescableDueTime((const struct tagTIMER *)v29, v33);
          if ( v34 < v14 )
            v14 = v34;
        }
      }
    }
    v35 = (_QWORD *)PsGetCurrentThreadWin32Thread(v27, v24, v25, v26);
    v36 = v35 ? *v35 : 0LL;
    Win32HM_UnlockFromThread<1>(v36, &BugCheckParameter3);
    i = 0LL;
    BugCheckParameter3 = -1LL;
    if ( !*(_BYTE *)(W32GetUserSessionState(v38, v37) + 18665) )
      break;
    if ( BugCheckParameter3 != -1LL )
    {
      v41 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v6, v5, v39, v40);
      if ( v41 )
        Win32HM_UnlockFromThread<1>(*v41, &BugCheckParameter3);
      else
        Win32HM_UnlockFromThread<1>(0LL, &BugCheckParameter3);
    }
  }
  v42 = *(_QWORD **)(v17 + 16);
  if ( v42 != (_QWORD *)(v17 + 16) )
  {
    do
    {
      v43 = *((_DWORD *)v42 - 3);
      v44 = (__int64)v42;
      v42 = (_QWORD *)*v42;
      *(_DWORD *)(v44 - 20) += v43;
    }
    while ( v42 != (_QWORD *)(v17 + 16) );
    v45 = *(_QWORD **)v17;
    while ( v45 != (_QWORD *)v17 )
    {
      v44 = *((unsigned int *)v45 - 6);
      v42 = v45;
      v45 = (_QWORD *)*v45;
      if ( (v44 & 0x20) == 0 )
      {
        v46 = *(_QWORD *)(*(v42 - 6) + 464LL);
        v47 = *(_DWORD *)(v46 + 1028);
        if ( v47 )
        {
          if ( (v44 & 0x1000) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1680LL);
          }
          else
          {
            v44 = *((unsigned int *)v42 - 5);
            if ( v47 <= 0 )
            {
              if ( (unsigned int)v44 <= -v47 )
              {
                v44 = (unsigned int)-(int)v44;
                *(_DWORD *)(v46 + 1028) = v44;
              }
            }
            else
            {
              v48 = v44 + v47;
              v44 = 0x7FFFFFFFLL;
              if ( v48 < 0x7FFFFFFF )
                v44 = v48;
              *((_DWORD *)v42 - 5) = v44;
            }
          }
        }
      }
    }
    v49 = *(_QWORD **)(v17 + 16);
    v50 = (_QWORD *)(v17 + 16);
    while ( v49 != v50 )
    {
      v44 = (__int64)v49;
      v42 = v49;
      v49 = (_QWORD *)*v49;
      if ( *(int *)(v44 - 12) > 0 )
      {
        *(_DWORD *)(v44 - 12) = 0;
        if ( v49[1] != v44 )
          goto LABEL_91;
        v44 = *(_QWORD *)(v44 + 8);
        if ( *(_QWORD **)v44 != v42 )
          goto LABEL_91;
        *(_QWORD *)v44 = v49;
        v49[1] = v44;
      }
    }
    if ( *(_QWORD *)(v17 + 16) != v17 + 16 )
    {
      v51 = *(_QWORD **)v17;
      v52 = (__int64 *)PsGetCurrentThreadWin32Thread(v44, v42, v50, v40);
      if ( v52 )
        v56 = *v52;
      else
        v56 = 0LL;
      BugCheckParameter3 = *(_QWORD *)(v56 + 456);
      *(_QWORD *)(v56 + 456) = &BugCheckParameter3;
      for ( i = 0LL; v51 != (_QWORD *)v17; v51 = (_QWORD *)*v51 )
      {
        v53 = *((unsigned int *)v51 - 6);
        v57 = v51 - 9;
        if ( (v53 & 0x20) == 0 )
        {
          v56 = *(_QWORD *)(v57[3] + 464LL);
          v54 = *(unsigned int *)(v56 + 1028);
          if ( (_DWORD)v54 )
          {
            if ( (v53 & 0x1000) != 0 )
            {
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1745LL);
            }
            else
            {
              v58 = *((_DWORD *)v57 + 13);
              v59 = (_DWORD)v54 + v58 == 0;
              v60 = v54 + v58;
              *((_DWORD *)v57 + 13) = v60;
              if ( v59 )
              {
                v61 = i;
                i = v51 - 9;
                HMLockObject(v51 - 9);
                if ( v61 )
                  HMUnlockObject(v61);
                xxxReadyTimer((struct tagTIMER *)(v51 - 9), v78);
                _HMPheFromObjectWorker(v51 - 9);
              }
              else
              {
                if ( v60 < v13 )
                  v13 = v60;
                v62 = CoalescableDueTime((const struct tagTIMER *)(v51 - 9), v53);
                if ( v62 < v14 )
                  v14 = v62;
              }
            }
          }
        }
      }
      v63 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v56, v53, v54, v55);
      if ( v63 )
        v64 = *v63;
      else
        v64 = 0LL;
      Win32HM_UnlockFromThread<1>(v64, &BugCheckParameter3);
      i = 0LL;
      BugCheckParameter3 = -1LL;
    }
    v6 = *(_QWORD **)(v17 + 16);
    if ( v6 != (_QWORD *)(v17 + 16) )
    {
      while ( 1 )
      {
        v42 = (_QWORD *)*v6;
        v65 = v6;
        v66 = v6;
        v6 = v42;
        *((_DWORD *)v65 - 3) = 0;
        if ( (_QWORD *)v42[1] != v65 )
          break;
        v67 = (_QWORD *)v65[1];
        if ( (_QWORD *)*v67 != v66 )
          break;
        *v67 = v42;
        v42[1] = v67;
        if ( v42 == (_QWORD *)(v17 + 16) )
          goto LABEL_86;
      }
LABEL_91:
      __fastfail(3u);
    }
  }
LABEL_86:
  *(_DWORD *)(W32GetUserSessionState(v6, v42) + 62736) = v13;
  *(_DWORD *)(W32GetUserSessionState(v69, v68) + 62744) = v14;
  SetDelayableTimer(v13, v14);
  result = W32GetUserSessionState(v71, v70);
  *(_BYTE *)(result + 62720) = 0;
  if ( BugCheckParameter3 != -1LL )
  {
    v77 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v74, v73, v75, v76);
    if ( v77 )
      v4 = *v77;
    return Win32HM_UnlockFromThread<1>(v4, &BugCheckParameter3);
  }
  return result;
}
