/*
 * XREFs of NtUserRegisterSessionPort @ 0x140193A10
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1401ADDE8 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserRegisterSessionPort(HANDLE Handle, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rdi
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG v14; // eax

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)Handle, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v8 = 0LL;
  UserSessionState[3] = v5;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v6, v7);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  v9 = xxxDwmProcessStartup(Handle);
  if ( v9 >= 0 )
  {
    v8 = 1LL;
  }
  else
  {
    v14 = RtlNtStatusToDosError(v9);
    UserSetLastError(v14);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v11, v10, v12, v13);
  return v8;
}
