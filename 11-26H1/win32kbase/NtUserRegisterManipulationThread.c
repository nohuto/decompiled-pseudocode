/*
 * XREFs of NtUserRegisterManipulationThread @ 0x1401E8180
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     SetThreadBasePriority @ 0x140189260 (SetThreadBasePriority.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserRegisterManipulationThread(int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagTHREADINFO *v15; // rbx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v8 = 0LL;
  UserSessionState[3] = v4;
  if ( v4 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v5, v7);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( (unsigned int)IsCurrentProcessDwm(v6) )
  {
    v15 = PtiCurrent(v10, v9);
    *(_QWORD *)(W32GetUserSessionState(v17, v16, v18) + 18872) = v15;
    if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      v19 = W32GetUserSessionState(v12, v11, v13);
      SetThreadBasePriority(**(PETHREAD **)(v19 + 18872), 16);
    }
    v8 = 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v12, v11, v13, v14);
  return v8;
}
