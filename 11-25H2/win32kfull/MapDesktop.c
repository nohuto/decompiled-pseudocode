/*
 * XREFs of MapDesktop @ 0x140172F80
 * Callers:
 *     xxxSetThreadDesktop @ 0x14011499C (xxxSetThreadDesktop.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 *     UserCommitDesktopMemory @ 0x1401D8B80 (UserCommitDesktopMemory.c)
 *     xxxResolveDesktop @ 0x140244080 (xxxResolveDesktop.c)
 *     NtUserBuildHwndList @ 0x140248160 (NtUserBuildHwndList.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1400C79AC (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x1400C9768 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400C9B3C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     GetDesktopView @ 0x14019C310 (GetDesktopView.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140271CD8 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall MapDesktop(__int64 a1)
{
  __int64 v1; // r13
  NTSTATUS v2; // edi
  __int64 v4; // rcx
  char v5; // bl
  _QWORD *ProcessWin32Process; // rax
  __int64 v7; // rcx
  _QWORD *v8; // r15
  __int64 UserGdiSessionState; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  unsigned int DLT; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 v22; // [rsp+58h] [rbp-39h] BYREF
  __int64 v23; // [rsp+60h] [rbp-31h] BYREF
  __int64 v24; // [rsp+68h] [rbp-29h] BYREF
  PERESOURCE v25; // [rsp+70h] [rbp-21h] BYREF
  __int64 v26; // [rsp+78h] [rbp-19h] BYREF
  __int64 DomainLockRef; // [rsp+80h] [rbp-11h] BYREF
  char v28; // [rsp+88h] [rbp-9h]
  __int64 v29; // [rsp+90h] [rbp-1h]
  char v30; // [rsp+98h] [rbp+7h]
  __int64 v31; // [rsp+A0h] [rbp+Fh]
  char v32; // [rsp+A8h] [rbp+17h]
  char v33; // [rsp+B0h] [rbp+1Fh]

  v1 = *(_QWORD *)(a1 + 32);
  v26 = 0LL;
  v2 = 0;
  v22 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION() )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    EnterCrit(1LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 16) != 3 )
  {
    ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 24));
    v8 = ProcessWin32Process;
    if ( ProcessWin32Process && *ProcessWin32Process )
    {
      UserGdiSessionState = W32GetUserGdiSessionState(v7);
      v10 = *(_QWORD *)(a1 + 24);
      if ( (v10 == *(_QWORD *)(UserGdiSessionState + 40)
         || (unsigned int)IsProcessDwm(v10)
         || (unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 24), v1, ExDesktopObjectType, 0LL, &v24))
        && (v11 = *(_QWORD *)(v1 + 128), (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 24)) == *(_DWORD *)v1) )
      {
        DLT = DLT_DESKTOP::getDLT();
        DomainLockRef = GetDomainLockRef(DLT);
        v28 = 1;
        UserSessionState = W32GetUserSessionState(v14, v13);
        v30 = 0;
        v29 = UserSessionState + 42360;
        v31 = 0LL;
        v32 = 0;
        v33 = 0;
        if ( IS_USERCRIT_OWNED_SHAREDONLY() )
        {
          v33 = 1;
          DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)&DomainLockRef);
        }
        v25 = *(PERESOURCE *)(W32GetUserSessionState(v17, v16) + 42400);
        LockRefactorStagingAssertOwned(&v25, v18);
        if ( GetDesktopView(v8, v1) )
        {
          SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
          goto LABEL_25;
        }
        v19 = (_QWORD *)Win32AllocPoolWithQuotaZInit(24LL, 1768977237LL);
        if ( v19 )
        {
          v20 = *(_QWORD *)(a1 + 24);
          v22 = 4096LL;
          v2 = MmMapViewOfSection(v11, v20, &v23, 0LL, 0LL, &v22, &v26, 2, 0x400000, 2);
          if ( v2 >= 0 )
          {
            v19[1] = v1;
            v19[2] = v23;
            *v19 = v8[86];
            v8[86] = v19;
          }
          else
          {
            Win32FreePool(v19);
          }
          SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
          if ( v2 >= 0 )
            goto LABEL_25;
        }
        else
        {
          v2 = -1073741801;
          SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
        }
      }
      else
      {
        v2 = -1073741790;
      }
    }
    else
    {
      v2 = -1073741811;
    }
    SetLastNtError(v2);
  }
LABEL_25:
  if ( v5 )
    UserSessionSwitchLeaveCrit(v4);
  return (unsigned int)v2;
}
