/*
 * XREFs of NtMITActivateInputProcessing @ 0x1401E09C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserActivateMITInputProcessing @ 0x1401101FC (UserActivateMITInputProcessing.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtMITActivateInputProcessing(__int64 a1, __int64 a2, int a3)
{
  _QWORD *UserSessionState; // rdi
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // esi
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 CurrentThreadWin32Thread; // rdi
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v36; // [rsp+40h] [rbp+18h] BYREF

  v36 = 0LL;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  if ( v6 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( IsInputThread(v10, v9, v11) )
    {
      v12 = UserActivateMITInputProcessing(a1, &v36);
    }
    else
    {
      v12 = 0;
      UserSetLastError(5);
    }
  }
  else
  {
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      KeEnterCriticalRegion();
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v17, v16);
      v22 = W32GetUserSessionState(v20, v19, v21);
      LOBYTE(v23) = 1;
      ExAcquireFastResourceExclusive(*(_QWORD *)(v22 + 16), CurrentThreadWin32Thread + 176, v23);
    }
    if ( IsInputThread(v14, v13, v15) )
    {
      v12 = UserActivateMITInputProcessing(a1, &v36);
    }
    else
    {
      v12 = 0;
      UserSetLastError(5);
    }
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      v26 = PsGetCurrentThreadWin32Thread(v25, v24);
      v30 = W32GetUserSessionState(v28, v27, v29);
      ExReleaseFastResource(*(_QWORD *)(v30 + 16), v26 + 176);
      KeLeaveCriticalRegion();
    }
  }
  RtlWriteULong64ToUser(a2, v36);
  UserSessionSwitchLeaveCritWithNonPaged(v32, v31, v33, v34);
  return v12;
}
