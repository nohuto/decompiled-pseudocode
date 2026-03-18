/*
 * XREFs of FreeHook @ 0x1400C8710
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     FreeThreadsWindowHooks @ 0x1400C9110 (FreeThreadsWindowHooks.c)
 *     ?zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z @ 0x1400C95C8 (-zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x1400C7A00 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400C8A34 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1400C8A58 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     RemoveHmodDependency @ 0x1400C8E18 (RemoveHmodDependency.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1400C90A0 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1400C91F0 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1400C92D4 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x1400C9768 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1400C9B8C (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x1402865C0 (-DeBoostHook@@YAXPEAUtagHOOK@@@Z.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x14028694C (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall FreeHook(PETHREAD **a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  tagDomLock *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  tagDomLock *v7; // rcx
  struct tagTHREADINFO *v8; // rcx
  int v9; // edx
  char v10; // r14
  bool v11; // r15
  unsigned __int8 ThreadId; // al
  PETHREAD *v13; // rcx
  char v14; // di
  int v15; // ebx
  __int64 v16; // rdx
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  _BYTE v20[8]; // [rsp+50h] [rbp-39h] BYREF
  tagDomLock *v21; // [rsp+58h] [rbp-31h] BYREF
  char v22; // [rsp+60h] [rbp-29h]
  char v23; // [rsp+80h] [rbp-9h]
  tagDomLock *v24; // [rsp+88h] [rbp-1h] BYREF
  char v25; // [rsp+90h] [rbp+7h]
  char v26; // [rsp+B0h] [rbp+27h]

  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v24);
  if ( ((_DWORD)a1[8] & 0x2000) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
      || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v10 = 0;
    }
    v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      ThreadId = (unsigned __int8)PsGetThreadId(*a1[2]);
      v13 = a1[2];
      v14 = ThreadId;
      v15 = *((_DWORD *)v13[58] + 14);
      UserSessionState = W32GetUserSessionState(v13, v16);
      LOBYTE(v18) = v11;
      LOBYTE(v19) = v10;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v18,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        5,
        36,
        (__int64)&WPP_ee71345fc15630358c6b50546088a96d_Traceguids,
        v15,
        v14);
    }
    *((_BYTE *)a1 + 96) = 1;
    DeBoostHook((struct tagHOOK *)a1);
  }
  v4 = (tagDomLock *)(W32GetUserSessionState(v3, v2) + 42312);
  if ( !tagDomLock::IsLockedShared(v4) || tagDomLock::IsLockedExclusive(v4) )
  {
    IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)v20, (struct _HEAD *)a1);
    v5 = *((_DWORD *)a1 + 16);
    if ( (v5 & 0x80u) == 0 )
    {
      v8 = (struct tagTHREADINFO *)a1[9];
      v9 = *((_DWORD *)a1 + 12);
      *((_DWORD *)a1 + 16) = v5 | 0x80;
      if ( !v8 )
        v8 = (struct tagTHREADINFO *)a1[2];
      CheckWHFBits(v8, v9);
    }
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v21);
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>(&v21);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( v23 && v21 )
      {
        if ( v22 )
          tagDomLock::UnLockExclusive(v21);
        else
          tagDomLock::UnLockShared(v21);
      }
      UnlinkHook((struct tagHOOK *)a1);
      if ( *((int *)a1 + 17) >= 0 )
        RemoveHmodDependency();
      DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v21);
      DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>(&v21);
      HMFreeObject(a1);
      if ( v23 )
      {
        v7 = v21;
        if ( v21 )
        {
          if ( v22 )
            tagDomLock::UnLockExclusive(v21);
          else
            tagDomLock::UnLockShared(v21);
        }
      }
    }
    else if ( v23 )
    {
      v7 = v21;
      if ( v21 )
      {
        if ( v22 )
          tagDomLock::UnLockExclusive(v21);
        else
          tagDomLock::UnLockShared(v21);
      }
      v23 = 0;
    }
    if ( v20[0] )
      *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19768) = 0LL;
  }
  else
  {
    DelayHookFree((struct tagHOOK *)a1);
  }
  if ( v26 && v24 )
  {
    if ( v25 )
      tagDomLock::UnLockExclusive(v24);
    else
      tagDomLock::UnLockShared(v24);
  }
}
