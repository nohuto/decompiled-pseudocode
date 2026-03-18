/*
 * XREFs of NtMITActivateInputProcessing @ 0x14016E560
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserActivateMITInputProcessing @ 0x14018D99C (UserActivateMITInputProcessing.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtMITActivateInputProcessing(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  _QWORD *UserSessionState; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  v25 = 0LL;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v5) = 1;
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v5);
  }
  v7 = v6;
  UserSessionState[3] = v6;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v7 )
      goto LABEL_9;
    *(_BYTE *)(v7 + 1708) = 1;
  }
  if ( v7 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( IsInputThread(v10, v9) )
    {
      v11 = UserActivateMITInputProcessing(a1, &v25);
    }
    else
    {
      v11 = 0;
      UserSetLastError(5);
    }
  }
  else
  {
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      KeEnterCriticalRegion();
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
      v18 = W32GetUserSessionState(v17, v16);
      LOBYTE(v19) = 1;
      ExAcquireFastResourceExclusive(*(_QWORD *)(v18 + 16), CurrentThreadWin32Thread + 176, v19);
    }
    if ( IsInputThread(v14, v13) )
    {
      v11 = UserActivateMITInputProcessing(a1, &v25);
    }
    else
    {
      v11 = 0;
      UserSetLastError(5);
    }
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      v20 = PsGetCurrentThreadWin32Thread();
      v23 = W32GetUserSessionState(v22, v21);
      ExReleaseFastResource(*(_QWORD *)(v23 + 16), v20 + 176);
      KeLeaveCriticalRegion();
    }
  }
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v2 = (_QWORD *)MmUserProbeAddress;
  *v2 = v25;
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
  return v11;
}
