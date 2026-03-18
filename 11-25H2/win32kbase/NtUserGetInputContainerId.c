/*
 * XREFs of NtUserGetInputContainerId @ 0x1401BD5F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ValidateHbwnd @ 0x140121970 (ValidateHbwnd.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ResolveContainerId @ 0x14019F13C (ResolveContainerId.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetInputContainerId(void *Src, __int64 a2, __int64 a3, void *a4)
{
  _QWORD *UserSessionState; // rsi
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int16 v22; // cx
  char v23; // al
  char v24; // al
  _OWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  char v28; // al
  char v29; // al
  _DWORD Srca[8]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v32; // [rsp+40h] [rbp-78h] BYREF
  __int128 v33; // [rsp+60h] [rbp-58h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(Src, a2);
  v9 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            0,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
  v11 = v10;
  UserSessionState[3] = v10;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
LABEL_7:
    if ( v11 )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v12);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
    }
    goto LABEL_9;
  }
  if ( v11 )
  {
    *(_BYTE *)(v11 + 1708) = 1;
    goto LABEL_7;
  }
LABEL_9:
  v33 = 0LL;
  Srca[0] = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  v17 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v16 = -*(_QWORD *)CurrentProcessWin32Process;
    v15 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v17 = v15 & CurrentProcessWin32Process;
  }
  if ( isChildPartition(v16, v15) )
    goto LABEL_12;
  v32 = 0LL;
  RtlCopyFromUser(&v32, Src, 0x10uLL);
  v33 = v32;
  if ( !ResolveContainerId((__int64)&v33, (__int64)Srca) || (v21 = ValidateHbwnd(a2, v20)) == 0 || !a3 )
  {
    v18 = 87;
    goto LABEL_13;
  }
  v22 = *(_WORD *)(v17 + 1072);
  if ( v22 || (v23 = 1, *(_WORD *)(v17 + 1074)) )
    v23 = 0;
  if ( !v23 )
  {
    if ( v22 != LOWORD(Srca[0]) || (v24 = 1, *(_WORD *)(v17 + 1074) != HIWORD(Srca[0])) )
      v24 = 0;
    if ( !v24 )
      goto LABEL_12;
  }
  if ( !*(_QWORD *)(v21 + 136) )
  {
    v25 = (_OWORD *)Win32AllocPoolZInitImpl(256LL, 0x14uLL, 0x64636755u);
    *(_QWORD *)(v21 + 136) = v25;
    if ( !v25 )
    {
      v18 = 8;
      goto LABEL_13;
    }
    *v25 = 0LL;
  }
  v26 = *(_QWORD *)(v21 + 136);
  v27 = *(_QWORD *)(v26 + 8);
  if ( v27 )
  {
    if ( v27 != a3 )
      goto LABEL_12;
  }
  if ( *(_WORD *)v26 || (v28 = 1, *(_WORD *)(v26 + 2)) )
    v28 = 0;
  if ( !v28 )
  {
    if ( *(_WORD *)v26 != LOWORD(Srca[0]) || (v29 = 1, *(_WORD *)(v26 + 2) != HIWORD(Srca[0])) )
      v29 = 0;
    if ( !v29 )
    {
LABEL_12:
      v18 = 5;
LABEL_13:
      UserSetLastError(v18);
      goto LABEL_43;
    }
  }
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(a4, Srca, 4uLL);
  **(_DWORD **)(v21 + 136) = Srca[0];
  *(_QWORD *)(*(_QWORD *)(v21 + 136) + 8LL) = a3;
  *(_DWORD *)(v17 + 1072) = Srca[0];
  v9 = 1;
LABEL_43:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v19);
  return v9;
}
