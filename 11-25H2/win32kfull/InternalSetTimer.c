/*
 * XREFs of InternalSetTimer @ 0x140019C44
 * Callers:
 *     NtUserSetTimer @ 0x140019A20 (NtUserSetTimer.c)
 *     _SetTimer @ 0x140019BA8 (_SetTimer.c)
 *     SetDeepDelayableVisRITTimer @ 0x14004CA4C (SetDeepDelayableVisRITTimer.c)
 *     IncrementCompositedCount @ 0x14005A98C (IncrementCompositedCount.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1400D718C (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     xxxSoundSentry @ 0x1401108CC (xxxSoundSentry.c)
 *     _SetSystemTimer @ 0x140158A0C (_SetSystemTimer.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x14019EF1C (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1401A6DDC (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     SetRITTimer @ 0x1401C8EB0 (SetRITTimer.c)
 *     zzzStartFade @ 0x1401E99CC (zzzStartFade.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1402019C0 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1402054B8 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1402BF430 (MNSetTimerToCloseHierarchy.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     GetAppCompatFlags2QuadWord @ 0x140034EB0 (GetAppCompatFlags2QuadWord.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x14010FFF0 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x14016A2F4 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ?ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z @ 0x14016C5EC (-ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x14016F5B0 (-SetDelayableTimer@@YAXKK@Z.c)
 *     ?SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ @ 0x14018687C (-SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x14028BB5C (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x14028BBF4 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall InternalSetTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  int v7; // r15d
  signed __int32 *v9; // rbx
  __int64 result; // rax
  unsigned int v11; // eax
  struct tagTHREADINFO *v12; // rsi
  int v13; // r12d
  unsigned int v14; // r14d
  __int64 v15; // r8
  __int64 v16; // rax
  struct tagTIMER *v17; // rdi
  int v18; // r12d
  __int64 UserSessionState; // rax
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 **v27; // rax
  struct tagTIMER *v28; // rdi
  char *v29; // r8
  __int64 v30; // rax
  __int64 *v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // esi
  unsigned int v36; // r14d
  unsigned int v37; // ebx
  __int64 v38; // rax
  unsigned int v39; // r14d
  int v40; // ebx
  __int64 v41; // rax
  bool v42; // bl
  _QWORD *v43; // rdi
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // [rsp+34h] [rbp-1Ch]
  struct tagTIMER *v49; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v50[2]; // [rsp+40h] [rbp-10h] BYREF

  v49 = 0LL;
  v7 = a2;
  v9 = (signed __int32 *)(W32GetUserSessionState() + 57544);
  if ( *(_DWORD *)(W32GetUserSessionState() + 68436) )
  {
    UserSetLastError(641LL);
    return 0LL;
  }
  v11 = 10;
  if ( a3 >= 0xA )
    v11 = a3;
  if ( v11 > 0x7FFFFFFF )
    v11 = 0x7FFFFFFF;
  v48 = v11;
  v12 = PtiCurrent();
  if ( !v12 || (a6 & 4) != 0 )
  {
    v12 = *(struct tagTHREADINFO **)(W32GetUserSessionState() + 18648);
  }
  else if ( a1 )
  {
    v12 = *(struct tagTHREADINFO **)(a1 + 16);
  }
  v13 = a5;
  if ( a5 == -1 || !a5 && v12 && (GetAppCompatFlags2QuadWord(v12) & 0x800000000LL) != 0 )
    v14 = a6 & 0xFFFFFDFF;
  else
    v14 = a6 | 0x200;
  if ( (unsigned int)FindTimer(a1, v7, v14, 0, (__int64)&v49) )
  {
    v17 = v49;
    if ( (*((_DWORD *)v49 + 12) & 1) != 0 )
    {
      if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
        DecTimerCountAndClearReadyFlag(v17);
      else
        DecTimerCount(v17);
    }
    if ( *((struct tagTHREADINFO **)v17 + 3) != v12 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 132, 0, 0) & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 997LL);
      v17 = v49;
    }
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 132, 0, 0) & 1) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 928LL);
      return 0LL;
    }
    LOBYTE(v15) = 16;
    v16 = HMAllocObject(v12, 0LL, v15, 144LL);
    v49 = (struct tagTIMER *)v16;
    v17 = (struct tagTIMER *)v16;
    if ( !v16 )
      return 0LL;
    *(_QWORD *)(v16 + 104) = 0LL;
    if ( a1 )
    {
      v21 = a2;
    }
    else
    {
      v18 = *(_DWORD *)(W32GetUserSessionState() + 62680);
      while ( 1 )
      {
        UserSessionState = W32GetUserSessionState();
        if ( --*(_DWORD *)(UserSessionState + 62680) < 0 )
          *(_DWORD *)(W32GetUserSessionState() + 62680) = 32511;
        if ( !_bittestandset(v9 + 11, *(_DWORD *)(W32GetUserSessionState() + 62680)) )
          break;
        if ( *(_DWORD *)(W32GetUserSessionState() + 62680) == v18 )
        {
          UserSetLastError(8LL);
          HMFreeObject(v17);
          return 0LL;
        }
      }
      v21 = *(_DWORD *)(W32GetUserSessionState() + 62680) + 256;
    }
    *((_QWORD *)v17 + 14) = v21;
    v22 = (_QWORD *)((char *)v17 + 72);
    v23 = *(_QWORD *)v9;
    if ( *(signed __int32 **)(*(_QWORD *)v9 + 8LL) != v9 )
      goto LABEL_72;
    *v22 = v23;
    v24 = (__int64 *)((char *)v17 + 120);
    *((_QWORD *)v17 + 10) = v9;
    *(_QWORD *)(v23 + 8) = v22;
    *(_QWORD *)v9 = v22;
    v25 = (BYTE1(a1) + (unsigned __int8)*((_QWORD *)v17 + 14)) & 0x3F;
    v26 = 16 * v25 + W32GetUserSessionState() + 61656;
    v27 = *(__int64 ***)(v26 + 8);
    if ( *v27 != (__int64 *)v26 )
      goto LABEL_72;
    *v24 = v26;
    *((_QWORD *)v17 + 16) = v27;
    *v27 = v24;
    *(_QWORD *)(v26 + 8) = v24;
    v13 = a5;
    if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
    {
      *((_QWORD *)v17 + 8) = (char *)v17 + 56;
      *((_QWORD *)v17 + 7) = (char *)v17 + 56;
    }
  }
  v50[1] = a1;
  v50[0] = (char *)v17 + 104;
  HMAssignmentLock(v50, 0LL);
  *((_DWORD *)v17 + 10) = v48;
  *((_DWORD *)v17 + 13) = v48;
  *((_QWORD *)v17 + 4) = a4;
  if ( (v14 & 0x200) != 0 )
    *((_DWORD *)v17 + 11) = v13;
  v28 = v49;
  v29 = (char *)v49 + 24;
  *((_DWORD *)v49 + 34) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_DWORD *)v28 + 12) = v14 | 8;
  v30 = *((_QWORD *)v12 + 58);
  if ( *(_QWORD *)v29 )
  {
    if ( *(_QWORD *)(*(_QWORD *)v29 + 464LL) == v30 )
      goto LABEL_49;
    v43 = (_QWORD *)((char *)v28 + 88);
    v44 = *v43;
    if ( *(_QWORD **)(*v43 + 8LL) == v43 )
    {
      v45 = (_QWORD *)v43[1];
      if ( (_QWORD *)*v45 == v43 )
      {
        *v45 = v44;
        *(_QWORD *)(v44 + 8) = v45;
        v43[1] = v43;
        *v43 = v43;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 132, 0, 0) & 1) != 0 )
        {
LABEL_71:
          v28 = v49;
          goto LABEL_49;
        }
        v46 = *((_QWORD *)v12 + 58) + 1096LL;
        v47 = *(_QWORD *)v46;
        if ( *(_QWORD *)(*(_QWORD *)v46 + 8LL) == v46 )
        {
          *v43 = v47;
          v43[1] = v46;
          *(_QWORD *)(v47 + 8) = v43;
          *(_QWORD *)v46 = v43;
          goto LABEL_71;
        }
      }
    }
LABEL_72:
    __fastfail(3u);
  }
  v31 = (__int64 *)(v30 + 1096);
  v32 = (_QWORD *)((char *)v28 + 88);
  v33 = *v31;
  if ( *(__int64 **)(*v31 + 8) != v31 )
    goto LABEL_72;
  *v32 = v33;
  *((_QWORD *)v28 + 12) = v31;
  *(_QWORD *)(v33 + 8) = v32;
  *v31 = (__int64)v32;
LABEL_49:
  *(_QWORD *)v29 = v12;
  ApplyTimerDelay(v28);
  EtwTraceInternalSetTimer();
  if ( !*(_BYTE *)(W32GetUserSessionState() + 18664) )
  {
    if ( *(_BYTE *)(W32GetUserSessionState() + 62720) )
    {
      *(_BYTE *)(W32GetUserSessionState() + 18665) = 1;
    }
    else
    {
      v34 = W32GetUserSessionState();
      v28 = v49;
      v35 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - *(_DWORD *)(v34 + 57584);
      v36 = CoalescableDueTime(v49);
      if ( v35 <= *(_DWORD *)(W32GetUserSessionState() + 62736)
        && v35 <= *(_DWORD *)(W32GetUserSessionState() + 62744)
        && !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v28 + 3) + 464LL) + 1028LL) )
      {
        v37 = v36 + v35;
        if ( v36 + v35 >= v36 )
        {
          *((_DWORD *)v28 + 12) &= ~8u;
          *((_DWORD *)v28 + 13) += v35;
          if ( *(_DWORD *)(W32GetUserSessionState() + 62736) > *((_DWORD *)v28 + 13)
            || *(_DWORD *)(W32GetUserSessionState() + 62744) > v37 )
          {
            v38 = W32GetUserSessionState();
            v39 = *((_DWORD *)v28 + 13);
            if ( v39 >= *(_DWORD *)(v38 + 62736) )
              v39 = *(_DWORD *)(W32GetUserSessionState() + 62736);
            *(_DWORD *)(W32GetUserSessionState() + 62736) = v39;
            if ( *(_DWORD *)(W32GetUserSessionState() + 62744) < v37 )
              v37 = *(_DWORD *)(W32GetUserSessionState() + 62744);
            *(_DWORD *)(W32GetUserSessionState() + 62744) = v37;
            v40 = *(_DWORD *)(W32GetUserSessionState() + 62744);
            v41 = W32GetUserSessionState();
            SetDelayableTimer(*(_DWORD *)(v41 + 62736) - v35, v40 - v35);
          }
        }
      }
      if ( (*((_DWORD *)v28 + 12) & 8) != 0 )
      {
        v42 = CRitTimerScanWakeSystem::SignalRitTimerScanWakeEvent();
        *(_BYTE *)(W32GetUserSessionState() + 18664) = v42;
        if ( *(_BYTE *)(W32GetUserSessionState() + 18664) != 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1149LL);
      }
    }
  }
  result = *((_QWORD *)v28 + 14);
  if ( !result )
    return 1LL;
  return result;
}
