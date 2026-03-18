/*
 * XREFs of xxxTimersProc_Old @ 0x14028C0D0
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 * Callees:
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14002EA3C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1400337A0 (-xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140050410 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x14010FFF0 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x14016F5B0 (-SetDelayableTimer@@YAXKK@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAA@XZ @ 0x140188FB0 (--1-$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAAXPEAUtagTIMER@@@Z @ 0x14028BB34 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAAXPEAUtagTIMER@@@Z.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x14028BBF4 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall xxxTimersProc_Old(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebp
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rdi
  int v23; // esi
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD **v31; // rcx
  _QWORD *v32; // rdx
  _QWORD *v33; // rcx
  _QWORD *v34; // rdi
  int v35; // ecx
  __int64 v36; // r8
  int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  int v40; // ecx
  _QWORD *v41; // rax
  _QWORD *v42; // rcx
  _QWORD *v43; // rcx
  _QWORD *v44; // rdi
  __int64 v45; // rdx
  _QWORD *v46; // rsi
  int v47; // r8d
  int v48; // ecx
  bool v49; // zf
  unsigned int v50; // ecx
  unsigned int v51; // eax
  _QWORD *v52; // rbx
  _QWORD **v53; // rax
  _QWORD **v54; // r8
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  ULONG_PTR BugCheckParameter3[9]; // [rsp+20h] [rbp-48h] BYREF

  *(_BYTE *)(W32GetUserSessionState(a1, a2) + 62720) = 1;
  *(_BYTE *)(W32GetUserSessionState(v3, v2) + 18664) = 0;
  while ( 1 )
  {
    *(_BYTE *)(W32GetUserSessionState(v5, v4) + 18665) = 0;
    v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v9 = v6 - *(_DWORD *)(W32GetUserSessionState(v8, v7) + 57584);
    v12 = 0x7FFFFFFF;
    v13 = 0x7FFFFFFF;
    *(_DWORD *)(W32GetUserSessionState(v11, v10) + 57584) = v6;
    v16 = W32GetUserSessionState(v15, v14) + 57544;
    v17 = *(_QWORD **)v16;
    v20 = PtiCurrent(v19, v18);
    Win32HM_LockIntoThread<1>((__int64)v20, 0LL, (__int64 *)BugCheckParameter3);
    while ( v17 != (_QWORD *)v16 )
    {
      v22 = v17 - 9;
      Win32HM_ExchangeThreadLock<1>((__int64)(v17 - 9), (__int64)BugCheckParameter3);
      v23 = *((_DWORD *)v17 - 6);
      if ( (v23 & 0x20) != 0 || (v24 = *(_DWORD *)(v17 - 3) & 0xC00, v24 == 1024) )
      {
        v17 = (_QWORD *)*v17;
      }
      else if ( (v23 & 0x1000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1537);
        v17 = (_QWORD *)*v17;
      }
      else
      {
        _m_prefetchw((char *)v22 + 52);
        if ( (v23 & 8) != 0 || v24 == 2048 )
        {
          *((_DWORD *)v22 + 12) = v23 & 0xFFFFF7F7;
          LOWORD(v23) = -2049;
        }
        else
        {
          v25 = *((_DWORD *)v22 + 13);
          *((_DWORD *)v22 + 13) = v25 - v9;
          if ( v25 <= v9 )
            xxxReadyTimer((struct tagTIMER *)(v17 - 9), v6);
        }
        v17 = (_QWORD *)*v17;
        if ( (v22[6] & 0x1000) != 0 || (*(_BYTE *)(_HMPheFromObjectWorker(v22) + 25) & 1) != 0 )
        {
          if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( (v22[6] & 0x1000) == 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1591);
            if ( (*(_BYTE *)(_HMPheFromObjectWorker(v22) + 25) & 1) == 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1593);
          }
        }
        else
        {
          if ( (v23 & 0x800) != 0 )
            *((_DWORD *)v22 + 12) &= ~0x800u;
          if ( *((_DWORD *)v22 + 13) < v12 )
            v12 = *((_DWORD *)v22 + 13);
          v27 = CoalescableDueTime((const struct tagTIMER *)v22, v26);
          if ( v27 < v13 )
            v13 = v27;
        }
      }
    }
    Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v21);
    if ( !*(_BYTE *)(W32GetUserSessionState(v29, v28) + 18665) )
      break;
    Win32HMThreadLockBase<tagTIMER,1,1>::~Win32HMThreadLockBase<tagTIMER,1,1>(BugCheckParameter3, v30);
  }
  v32 = *(_QWORD **)(v16 + 16);
  if ( v32 != (_QWORD *)(v16 + 16) )
  {
    do
    {
      v33 = v32;
      v32 = (_QWORD *)*v32;
      *((_DWORD *)v33 - 5) += *((_DWORD *)v33 - 3);
    }
    while ( v32 != (_QWORD *)(v16 + 16) );
    v34 = *(_QWORD **)v16;
    while ( v34 != (_QWORD *)v16 )
    {
      v32 = v34;
      v34 = (_QWORD *)*v34;
      v35 = *((_DWORD *)v32 - 6);
      if ( (v35 & 0x20) == 0 )
      {
        v36 = *(_QWORD *)(*(v32 - 6) + 464LL);
        v37 = *(_DWORD *)(v36 + 1028);
        if ( v37 )
        {
          if ( (v35 & 0x1000) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1680);
          }
          else
          {
            v38 = *((_DWORD *)v32 - 5);
            if ( v37 <= 0 )
            {
              if ( v38 <= -v37 )
                *(_DWORD *)(v36 + 1028) = -v38;
            }
            else
            {
              v39 = v38 + v37;
              v40 = 0x7FFFFFFF;
              if ( v39 < 0x7FFFFFFF )
                v40 = v39;
              *((_DWORD *)v32 - 5) = v40;
            }
          }
        }
      }
    }
    v41 = *(_QWORD **)(v16 + 16);
    while ( v41 != (_QWORD *)(v16 + 16) )
    {
      v42 = v41;
      v32 = v41;
      v41 = (_QWORD *)*v41;
      if ( *((int *)v42 - 3) > 0 )
      {
        *((_DWORD *)v42 - 3) = 0;
        if ( (_QWORD *)v41[1] != v42 )
          goto LABEL_69;
        v43 = (_QWORD *)v42[1];
        if ( (_QWORD *)*v43 != v32 )
          goto LABEL_69;
        *v43 = v41;
        v41[1] = v43;
      }
    }
    if ( *(_QWORD *)(v16 + 16) != v16 + 16 )
    {
      v44 = *(_QWORD **)v16;
      Win32HMThreadLockBase<tagTIMER,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, (__int64)v32);
      while ( v44 != (_QWORD *)v16 )
      {
        v46 = v44 - 9;
        Win32HM_ExchangeThreadLock<1>((__int64)(v44 - 9), (__int64)BugCheckParameter3);
        v45 = *((unsigned int *)v44 - 6);
        if ( (v45 & 0x20) == 0 )
        {
          v47 = *(_DWORD *)(*(_QWORD *)(v46[3] + 464LL) + 1028LL);
          if ( v47 )
          {
            if ( (v45 & 0x1000) != 0 )
            {
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1745);
            }
            else
            {
              v48 = *((_DWORD *)v46 + 13);
              v49 = v47 + v48 == 0;
              v50 = v47 + v48;
              *((_DWORD *)v46 + 13) = v50;
              if ( v49 )
              {
                xxxReadyTimer((struct tagTIMER *)(v44 - 9), v6);
                _HMPheFromObjectWorker(v44 - 9);
              }
              else
              {
                if ( v50 < v12 )
                  v12 = v50;
                v51 = CoalescableDueTime((const struct tagTIMER *)(v44 - 9), v45);
                if ( v51 < v13 )
                  v13 = v51;
              }
            }
          }
        }
        v44 = (_QWORD *)*v44;
      }
      Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v45);
    }
    v31 = *(_QWORD ***)(v16 + 16);
    v52 = (_QWORD *)(v16 + 16);
    if ( v31 != v52 )
    {
      while ( 1 )
      {
        v32 = *v31;
        v53 = v31;
        v54 = v31;
        v31 = (_QWORD **)v32;
        *((_DWORD *)v53 - 3) = 0;
        if ( (_QWORD **)v32[1] != v53 )
          break;
        v55 = v53[1];
        if ( (_QWORD **)*v55 != v54 )
          break;
        *v55 = v32;
        v32[1] = v55;
        if ( v32 == v52 )
          goto LABEL_68;
      }
LABEL_69:
      __fastfail(3u);
    }
  }
LABEL_68:
  *(_DWORD *)(W32GetUserSessionState(v31, v32) + 62736) = v12;
  *(_DWORD *)(W32GetUserSessionState(v57, v56) + 62744) = v13;
  SetDelayableTimer(v12, v13);
  *(_BYTE *)(W32GetUserSessionState(v59, v58) + 62720) = 0;
  Win32HMThreadLockBase<tagTIMER,1,1>::~Win32HMThreadLockBase<tagTIMER,1,1>(BugCheckParameter3, v60);
}
