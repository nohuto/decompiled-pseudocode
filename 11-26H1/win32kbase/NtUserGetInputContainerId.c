/*
 * XREFs of NtUserGetInputContainerId @ 0x1401E4380
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ValidateHbwnd @ 0x1400533C0 (ValidateHbwnd.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ResolveContainerId @ 0x1401BED74 (ResolveContainerId.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetInputContainerId(void *Src, int a2, __int64 a3, __int64 a4)
{
  _QWORD *UserSessionState; // rsi
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r14d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rsi
  int v19; // ecx
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r8d
  int v25; // edx
  int v26; // r8d
  __int64 v27; // rbx
  _OWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  _DWORD v32[12]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v33; // [rsp+50h] [rbp-48h] BYREF
  __int128 v34; // [rsp+60h] [rbp-38h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)Src, a2, a3);
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v9;
  v13 = 0;
  if ( v9 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v10, v12);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  v34 = 0LL;
  v32[0] = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  v18 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v16 = -*(_QWORD *)CurrentProcessWin32Process;
    v15 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v18 = v15 & CurrentProcessWin32Process;
  }
  if ( !isChildPartition(v16, v15, v17) )
  {
    v33 = 0LL;
    RtlCopyFromUser(&v33, Src, 0x10uLL);
    v34 = v33;
    if ( !ResolveContainerId((__int64)&v34, (__int64)v32, v24) || (v27 = ValidateHbwnd(a2, v25, v26)) == 0 || !a3 )
    {
      v19 = 87;
      goto LABEL_7;
    }
    if ( !*(_WORD *)(v18 + 1072) && !*(_WORD *)(v18 + 1074) || *(_DWORD *)(v18 + 1072) == v32[0] )
    {
      if ( !*(_QWORD *)(v27 + 136) )
      {
        v28 = (_OWORD *)Win32AllocPoolZInitImpl(256LL, 0x14uLL, 0x64636755u);
        *(_QWORD *)(v27 + 136) = v28;
        if ( !v28 )
        {
          v19 = 8;
          goto LABEL_7;
        }
        *v28 = 0LL;
      }
      v29 = *(_QWORD *)(v27 + 136);
      v30 = *(_QWORD *)(v29 + 8);
      if ( (!v30 || v30 == a3) && (!*(_WORD *)v29 && !*(_WORD *)(v29 + 2) || *(_DWORD *)v29 == v32[0]) )
      {
        RtlWriteULongToUser(a4, v32[0]);
        v21 = *(_DWORD **)(v27 + 136);
        *v21 = v32[0];
        *(_QWORD *)(*(_QWORD *)(v27 + 136) + 8LL) = a3;
        *(_DWORD *)(v18 + 1072) = v32[0];
        v13 = 1;
        goto LABEL_25;
      }
    }
  }
  v19 = 5;
LABEL_7:
  UserSetLastError(v19);
LABEL_25:
  UserSessionSwitchLeaveCritWithNonPaged((__int64)v21, v20, v22, v23);
  return v13;
}
