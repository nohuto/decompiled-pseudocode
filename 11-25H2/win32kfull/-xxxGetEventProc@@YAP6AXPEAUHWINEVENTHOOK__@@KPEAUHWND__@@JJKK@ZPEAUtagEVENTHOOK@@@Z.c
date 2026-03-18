/*
 * XREFs of ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1400C7AB4
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x14002F920 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1400C7330 (xxxLoadHmodIndex.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1400C7D64 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     MakeExportSuppressedPfnValid @ 0x1400C7F24 (MakeExportSuppressedPfnValid.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C8FCC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x14017BB28 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void (*__fastcall xxxGetEventProc(
        struct tagEVENTHOOK *a1,
        __int64 a2))(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  tagDomLock *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 CurrentProcess; // rax
  unsigned int DLT; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r14d
  char *v15; // rsi
  tagDomLock *v16; // rcx
  __int64 v17; // rdx
  tagDomLock *v18; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-40h] BYREF
  char v25; // [rsp+28h] [rbp-38h] BYREF
  __int64 v26; // [rsp+30h] [rbp-30h]
  char v27; // [rsp+38h] [rbp-28h]
  __int64 v28; // [rsp+40h] [rbp-20h]
  char v29; // [rsp+48h] [rbp-18h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42320)) != 1 )
    __int2c();
  DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(&DomainLockRef);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
  {
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(&DomainLockRef, v4, v6);
    return 0LL;
  }
  v7 = 0LL;
  if ( v29 )
  {
    v5 = DomainLockRef;
    if ( DomainLockRef )
    {
      if ( v25 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
  }
  W32GetCurrentThreadNonPaged(v5, v4);
  if ( *((_DWORD *)a1 + 18) != -1 )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( !(unsigned int)PsIsProtectedProcess(CurrentProcess) )
    {
      DLT = DLT_WINEVENT::getDLT();
      DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
      v25 = 1;
      v26 = W32GetUserSessionState(v11, v10) + 42360;
      v27 = 0;
      v28 = 0LL;
      if ( DomainLockRef )
      {
        if ( v25 )
          tagDomLock::UnLockExclusive(DomainLockRef);
        else
          tagDomLock::UnLockShared(DomainLockRef);
      }
      v13 = *((unsigned int *)a1 + 18);
      v29 = 1;
      if ( xxxLoadHmodIndex(v13, v12) )
      {
        if ( v29 )
        {
          v14 = 0;
          v15 = &v25;
          do
          {
            v16 = (tagDomLock *)*((_QWORD *)v15 - 1);
            if ( v16 )
            {
              if ( *v15 )
                tagDomLock::LockExclusive(v16);
              else
                tagDomLock::LockShared(v16);
            }
            ++v14;
            v15 += 16;
          }
          while ( !v14 );
        }
        goto LABEL_20;
      }
      UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::~UnlockObjectLock<>(&DomainLockRef);
    }
    return 0LL;
  }
LABEL_20:
  DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(&DomainLockRef);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
  {
    if ( v29 && DomainLockRef )
    {
      if ( v25 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    return 0LL;
  }
  if ( v29 )
  {
    v18 = DomainLockRef;
    if ( DomainLockRef )
    {
      if ( v25 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
  }
  if ( *((_DWORD *)a1 + 18) == -1 )
    return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))*((_QWORD *)a1 + 8);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v18, v17);
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  v20 = *((int *)a1 + 18);
  v21 = *(_QWORD *)(v7 + 464);
  v22 = *((_QWORD *)a1 + 8) + *(_QWORD *)(v21 + 8 * v20 + 392);
  if ( (_DWORD)v20 != -1 )
    MakeExportSuppressedPfnValid(*((_QWORD *)a1 + 8) + *(_QWORD *)(v21 + 8 * v20 + 392));
  return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))v22;
}
