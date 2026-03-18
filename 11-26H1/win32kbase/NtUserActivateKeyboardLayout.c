/*
 * XREFs of NtUserActivateKeyboardLayout @ 0x1401E1FF0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x14003B90C (ApiSetEditionGetProcessWindowStation.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxActivateKeyboardLayout @ 0x140086FD0 (xxxActivateKeyboardLayout.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401C9CF0 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

struct tagKL *__fastcall NtUserActivateKeyboardLayout(__int64 a1, unsigned int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  struct tagKL *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  struct tagWINDOWSTATION *ProcessWindowStation; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9 = 0LL;
  UserSessionState[3] = v6;
  v10 = v6;
  if ( v6 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    v13 = !tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v10 + 456), 1);
  }
  else
  {
    v14 = (__int64)PtiCurrent(v12, v11);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v14 + 520), 0, 0) & 0x20000000) == 0 )
      goto LABEL_9;
    v14 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v14, v19) + 57) + 752LL) + 32LL);
    v13 = (v14 & 1) == 0;
  }
  if ( v13 )
  {
LABEL_9:
    ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation(v14);
    v9 = xxxActivateKeyboardLayout(ProcessWindowStation, a1, a2, 0LL);
    goto LABEL_10;
  }
  UserSetLastError(5);
LABEL_10:
  UserSessionSwitchLeaveCritWithNonPaged(v16, v15, v17, v18);
  return v9;
}
