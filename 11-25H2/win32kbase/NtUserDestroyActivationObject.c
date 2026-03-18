/*
 * XREFs of NtUserDestroyActivationObject @ 0x14014B970
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1400E37C0 (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtUserDestroyActivationObject(void *Src, __int64 a2)
{
  _QWORD *UserSessionState; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  ULONG v13; // eax
  struct _LUID v15; // [rsp+68h] [rbp+10h] BYREF
  struct _LUID v16; // [rsp+70h] [rbp+18h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(Src, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v6 = 1;
  }
  else
  {
    v6 = 1;
    LOBYTE(v4) = 1;
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v4);
  }
  v7 = v5;
  UserSessionState[3] = v5;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v7 )
      goto LABEL_9;
    *(_BYTE *)(v7 + 1708) = 1;
  }
  if ( v7 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  v16 = 0LL;
  v15 = 0LL;
  RtlCopyFromUser(&v15, Src, 8uLL);
  v16 = v15;
  v10 = W32GetUserSessionState(v9, v8);
  v11 = CActivationObjectManager::DestroyActivationObject(*(CActivationObjectManager **)(v10 + 18864), &v16);
  if ( v11 < 0 )
  {
    v6 = 0;
    v13 = RtlNtStatusToDosError(v11);
    UserSetLastError(v13);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
  return v6;
}
