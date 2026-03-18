/*
 * XREFs of VideoPortCallout @ 0x140091F00
 * Callers:
 *     Win32kBaseVideoPortCallout @ 0x1400904D0 (Win32kBaseVideoPortCallout.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x140166A38 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 *     CreateKernelEvent @ 0x14016CAE0 (CreateKernelEvent.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     CSTRemove @ 0x1401D5270 (CSTRemove.c)
 */

void __fastcall VideoPortCallout(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // edx
  int v6; // r8d
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  int v12; // ecx
  __int64 UserSessionState; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  PVOID Buffer; // [rsp+48h] [rbp-18h]
  PVOID Object[2]; // [rsp+50h] [rbp-10h] BYREF
  int v30; // [rsp+80h] [rbp+20h] BYREF

  v27 = a1;
  v30 = 0;
  Buffer = (PVOID)CreateKernelEvent(SynchronizationEvent);
  if ( Buffer )
  {
    if ( *(_BYTE *)(v27 + 31)
      && (!*(_DWORD *)(W32GetUserGdiSessionState() + 32) || !*(_QWORD *)(W32GetUserSessionState(v3, v2, v4) + 71272)) )
    {
      Object[0] = *(PVOID *)(W32GetUserSessionState(v3, v2, v4) + 68376);
      Object[1] = *(PVOID *)(W32GetUserSessionState(Object[0], v5, v6) + 68384);
      KeWaitForMultipleObjects(2u, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
    }
    if ( *(_DWORD *)(W32GetUserGdiSessionState() + 32) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 71272) )
      {
        UserSessionState = W32GetUserSessionState(v12, v7, v9);
        v14 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                UserSessionState,
                1LL,
                0LL,
                _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
        *(_QWORD *)(UserSessionState + 24) = v14;
        if ( v14 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v14) )
        {
          DestroySharedUserCritDeferredUnlockList(UserSessionState + 19720);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19776);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19760);
        }
        v11 = SendVideoPortCalloutRequest((struct _POWER_INIT *)&v27, &v30);
        UserSessionSwitchLeaveCritWithNonPaged(v16, v15, v17, v18);
        if ( v11 < 0 )
        {
          if ( v30 )
          {
            v20 = W32GetUserSessionState(v19, v7, v9);
            v21 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                    v20,
                    1LL,
                    0LL,
                    _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            *(_QWORD *)(v20 + 24) = v21;
            if ( v21 )
            {
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v21 + 520), 0, 0) & 0x1000000) != 0
                && *(char *)(v21 + 1360) >= 0 )
              {
                CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
                if ( CurrentProcessWin32Process )
                {
                  if ( *(_QWORD *)CurrentProcessWin32Process )
                  {
                    if ( *(_BYTE *)(CurrentProcessWin32Process + 1200) == 1 )
                    {
                      DestroySharedUserCritDeferredUnlockList(v20 + 19720);
                      DestroyDeferredUnlockObjectAssignmentList(v20 + 19776);
                      DestroyDeferredUnlockObjectAssignmentList(v20 + 19760);
                    }
                  }
                }
              }
            }
            CSTRemove(4LL, &v27);
            UserSessionSwitchLeaveCritWithNonPaged(v24, v23, v25, v26);
          }
        }
        else
        {
          KeWaitForSingleObject(Buffer, WrUserRequest, 0, 0, 0LL);
          v11 = *(_DWORD *)(a1 + 24);
        }
      }
      else
      {
        v11 = -1073741816;
      }
    }
    else
    {
      v11 = -2143420409;
    }
    GreDeleteFastMutex((char *)Buffer, v7, v9, v10);
    *(_DWORD *)(a1 + 24) = v11;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = -1073741801;
  }
}
