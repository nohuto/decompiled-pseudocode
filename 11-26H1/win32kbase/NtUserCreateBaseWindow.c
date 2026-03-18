/*
 * XREFs of NtUserCreateBaseWindow @ 0x1401E26A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCreateBaseWindowHandle @ 0x1401EA460 (UserCreateBaseWindowHandle.c)
 */

__int64 __fastcall NtUserCreateBaseWindow(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 CurrentProcessWin32Process; // rax
  int v11; // edx
  int v12; // r8d
  __int64 BaseWindowHandle; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v7;
  v9 = v7;
  if ( v7 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v7 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1200) == 1 )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v11, v12);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
        }
      }
    }
  }
  BaseWindowHandle = UserCreateBaseWindowHandle(a1, a2, a3, v9);
  UserSessionSwitchLeaveCritWithNonPaged(v15, v14, v16, v17);
  return BaseWindowHandle;
}
