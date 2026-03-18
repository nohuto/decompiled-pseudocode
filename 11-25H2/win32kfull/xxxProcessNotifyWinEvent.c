/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x14002F920
 * Callers:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxFlushDeferredWindowEvents @ 0x14005F9D0 (xxxFlushDeferredWindowEvents.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 * Callees:
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1400C7AB4 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     DestroyNotify @ 0x1400CA3C0 (DestroyNotify.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxClientCallWinEventProc @ 0x14015EE80 (xxxClientCallWinEventProc.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_WINEVENT@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x140170A34 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_WINEVENT@@@-$UnlockDomainShared@$$V@@QEAA.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140271CD8 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // r15d
  int v7; // ebp
  __int64 UserSessionState; // rax
  ULONG_PTR v9; // rdi
  bool v10; // zf
  UIPrivilegeIsolation *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int16 v15; // bx
  const struct tagUIPI_INFO *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r13
  struct tagQ *v19; // r12
  _QWORD *v20; // rcx
  __int16 ProcessMachine; // bx
  const struct tagUIPI_INFO *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // rbx
  unsigned int v28; // ebp
  int v29; // esi
  _BYTE *v30; // rbx
  tagDomLock *v31; // rcx
  ULONG_PTR *v32; // rax
  ULONG_PTR v33; // rax
  ULONG_PTR *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  signed __int32 v41; // ecx
  __int16 v42; // bx
  __int64 ProcessInformation; // [rsp+40h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v45[8]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v46[40]; // [rsp+68h] [rbp-60h] BYREF

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  v6 = 0;
  v7 = 0;
  UserSessionState = W32GetUserSessionState(v4, v3);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42320)) != 1 )
    __int2c();
  v9 = *(_QWORD *)(a1 + 16);
  v10 = (unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline() == 0;
  v12 = *(_DWORD *)(a1 + 56);
  if ( !v10 )
  {
    if ( (v12 & 0xC) == 4 )
    {
      v7 = 1;
    }
    else if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 0xD) != 0 )
    {
      v7 = 1;
    }
    else
    {
      v20 = *(_QWORD **)(v9 + 16);
      if ( v20[58] == *(_QWORD *)(v5 + 464) || !(unsigned __int8)IsRestricted(*v20) )
      {
        ProcessMachine = PsGetProcessMachine(**(_QWORD **)(*(_QWORD *)(v9 + 16) + 464LL));
        if ( (unsigned __int16)PsGetProcessMachine(**(_QWORD **)(v5 + 464)) == ProcessMachine )
        {
          if ( !UIPrivilegeIsolation::CheckAccess(
                  (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 464LL) + 864LL),
                  (const struct tagUIPI_INFO *)(*(_QWORD *)(v5 + 464) + 864LL),
                  v22) )
          {
            v7 = 1;
            v6 = 1;
          }
        }
        else
        {
          v7 = 1;
        }
      }
      else
      {
        v7 = 1;
      }
    }
    if ( !v7 )
      goto LABEL_30;
LABEL_60:
    v17 = *(_QWORD *)(v9 + 16);
    v18 = *(_QWORD *)(v9 + 24);
    v19 = *(struct tagQ **)(v17 + 472);
    if ( !v6 )
      goto LABEL_62;
    goto LABEL_61;
  }
  if ( (v12 & 0xC) == 4 || (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 0xD) != 0 )
    goto LABEL_60;
  if ( !UIPrivilegeIsolation::Enforced(v11) )
  {
    v13 = *(_QWORD *)(v5 + 464);
    v11 = *(UIPrivilegeIsolation **)(*(_QWORD *)(v9 + 16) + 464LL);
    if ( (*((_DWORD *)v11 + 191) != *(_DWORD *)(v13 + 764) || *((_DWORD *)v11 + 192) != *(_DWORD *)(v13 + 768))
      && (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 0x400000) == 0 )
    {
      goto LABEL_60;
    }
  }
  v14 = *(_QWORD **)(v9 + 16);
  if ( v14[58] != *(_QWORD *)(v5 + 464) )
  {
    if ( (unsigned __int8)IsRestricted(*v14) )
      goto LABEL_60;
  }
  v15 = PsGetProcessMachine(**(_QWORD **)(*(_QWORD *)(v9 + 16) + 464LL));
  if ( (unsigned __int16)PsGetProcessMachine(**(_QWORD **)(v5 + 464)) != v15 )
    goto LABEL_60;
  if ( !UIPrivilegeIsolation::CheckAccess(
          (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 464LL) + 864LL),
          (const struct tagUIPI_INFO *)(*(_QWORD *)(v5 + 464) + 864LL),
          v16) )
  {
    v17 = *(_QWORD *)(v9 + 16);
    v18 = *(_QWORD *)(v9 + 24);
    v19 = *(struct tagQ **)(v17 + 472);
LABEL_61:
    EtwTraceUIPIEventHookError(a1, v17, v5);
LABEL_62:
    if ( !*(_QWORD *)W32GetUserSessionState(v11, v17) || !(unsigned int)GET_USERCRIT_DISPOSITION() )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    v37 = PsGetCurrentThreadWin32Thread();
    ++*(_DWORD *)(v37 + 28);
    *(_DWORD *)(a1 + 56) |= 0xCu;
    if ( !v19
      || (v38 = W32GetUserSessionState(v36, v35), v39 = *(_QWORD *)(v9 + 16), v39 == *(_QWORD *)(v38 + 18648))
      || (v40 = *(_DWORD *)(v9 + 40), (v40 & 1) != 0)
      || (v40 & 0x10) != 0
      && ((v41 = _InterlockedCompareExchange((volatile signed __int32 *)(v39 + 528), 0, 0),
           ((v41 ^ _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0)) & 0x100) != 0)
       || (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 0x100) != 0
       && (v42 = PsWow64GetProcessMachine(**(_QWORD **)(*(_QWORD *)(v9 + 16) + 464LL)),
           (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v5 + 464)) != v42))
      || !(unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v9 + 16), v19, 0xCu, 0LL, 0, 0LL, a1, 0LL) )
    {
      DestroyNotify(a1);
    }
    --*(_DWORD *)(v37 + 28);
    return v18;
  }
LABEL_30:
  if ( (!*(_DWORD *)(v9 + 56) || !*(_QWORD *)(v9 + 48))
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 464LL)) )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 464LL);
    if ( *(int *)(v23 + 12) >= 0 )
    {
      v24 = *(_QWORD *)(v5 + 464);
      if ( v23 != v24 && (*(_DWORD *)(v23 + 808) & 0x100LL) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v24) )
          goto LABEL_60;
        ProcessInformation = 6LL;
        if ( ZwQueryInformationProcess(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               ProcessCookie|ProcessUserModeIOPL,
               &ProcessInformation,
               8u,
               0LL) < 0
          || (ProcessInformation & 0x100000000LL) != 0 )
        {
          goto LABEL_60;
        }
      }
    }
  }
  if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
  {
    v25 = *(_QWORD *)(v9 + 24);
  }
  else
  {
    BugCheckParameter3[0] = *(_QWORD *)(v5 + 456);
    *(_QWORD *)(v5 + 456) = BugCheckParameter3;
    BugCheckParameter3[1] = v9;
    HMLockObject(v9);
    *(_QWORD *)(a1 + 64) = v5;
    if ( (*(_DWORD *)(v9 + 40) & 8) != 0 )
      EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v9);
    else
      EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v9 + 64);
    if ( EventProc )
    {
      v28 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v9 + 76));
      UnlockDomainShared<>::UnlockDomainExclusive<DLT_WINEVENT>::UnlockObjectLock<>::UnlockObjectLock<>(v45);
      xxxClientCallWinEventProc(EventProc, v9, a1);
      if ( v46[32] )
      {
        v29 = 0;
        v30 = v46;
        do
        {
          v31 = (tagDomLock *)*((_QWORD *)v30 - 1);
          if ( v31 )
          {
            if ( *v30 )
              tagDomLock::LockExclusive(v31);
            else
              tagDomLock::LockShared(v31);
          }
          ++v29;
          v30 += 16;
        }
        while ( !v29 );
      }
      W32SetCurrentThreadDpiAwarenessContext(v28);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    v25 = *(_QWORD *)(v9 + 24);
    v32 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread();
    if ( v32 )
      v33 = *v32;
    else
      v33 = 0LL;
    v34 = *(ULONG_PTR **)(v33 + 456);
    if ( v34 != BugCheckParameter3 )
      KeBugCheckEx(0x164u, 0x3BuLL, v33, (ULONG_PTR)BugCheckParameter3, 0LL);
    *(_QWORD *)(v33 + 456) = *v34;
    HMUnlockObject(v34[1]);
  }
  DestroyNotify(a1);
  return v25;
}
