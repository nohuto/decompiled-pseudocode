/*
 * XREFs of NtUserGetKeyState @ 0x140117EE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x14001F3E0 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     PostUpdateKeyStateEvent @ 0x1400419B0 (PostUpdateKeyStateEvent.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x14006C780 (IsKeyboardDelegationEnabledForThread.c)
 *     EtwTraceUIPIInputError @ 0x14006F600 (EtwTraceUIPIInputError.c)
 *     _GetKeyState @ 0x140087680 (_GetKeyState.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x1400D300C (ApiSetEditionIsGetKeyStateBlocked.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400E5470 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1400E5830 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     UpdateDirtyVisRgnTrackers @ 0x1400E6E80 (UpdateDirtyVisRgnTrackers.c)
 *     IsKeyStateCached @ 0x1400E8580 (IsKeyStateCached.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1400E8CE0 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  int v2; // ecx
  int v3; // r8d
  InputDelegation *v4; // rbx
  int v5; // edx
  __int64 UserSessionState; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 CurrentThreadWin32Thread; // rdi
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rcx
  unsigned int Count; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rcx
  int v27; // r8d
  __int64 v28; // rdx
  int v29; // r8d
  __int16 KeyState; // di
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // edx
  int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // ecx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v43; // [rsp+50h] [rbp-28h] BYREF
  int v44; // [rsp+58h] [rbp-20h]
  InputDelegation *v45; // [rsp+88h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v45);
  v4 = v45;
  v5 = *(_DWORD *)(*((_QWORD *)v45 + 58) + 436LL);
  if ( (v5 & 1) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v2, v5, v3);
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v8, v7);
    v11 = *(unsigned int *)(CurrentThreadWin32Thread + 24);
    LOBYTE(v11) = v11 & 0xC;
    if ( (_BYTE)v11 == 8 )
    {
      UpdateDirtyVisRgnTrackers(v11);
      *(_DWORD *)(UserSessionState + 19820) = 0;
      *(_QWORD *)(UserSessionState + 19800) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(UserSessionState + 19720, v12, v13);
      *(_QWORD *)(UserSessionState + 24) = 0LL;
    }
    v14 = *(_QWORD *)CurrentThreadWin32Thread;
    if ( *(_QWORD *)CurrentThreadWin32Thread && (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 2) == 0 )
      *(_BYTE *)(v14 + 1708) = 0;
    Count = AtomicExecutionCheck::GetCount(v14, v9);
    if ( Count )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    EtwTraceReleaseUserCrit();
    *(_DWORD *)(CurrentThreadWin32Thread + 24) &= 0xFFFFFFF1;
    if ( (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 0x10) != 0 )
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
    ExReleaseFastResource(*(_QWORD *)UserSessionState, CurrentThreadWin32Thread + 32);
    KeLeaveCriticalRegion();
    v19 = (_QWORD *)W32GetUserSessionState(v17, v16, v18);
    v20 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v19,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v19[3] = v20;
    if ( v20 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v20) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v19 + 2465), v21, v22);
      DestroyDeferredUnlockObjectAssignmentList(v19 + 2472);
      DestroyDeferredUnlockObjectAssignmentList(v19 + 2470);
    }
    v24 = *((_QWORD *)v4 + 58);
    if ( (*(_DWORD *)(v24 + 436) & 1) != 0 )
      PostUpdateKeyStateEvent(v24, v21, v22, v23);
  }
  if ( IsKeyStateCached(a1) )
    goto LABEL_29;
  if ( (unsigned int)ApiSetEditionIsGetKeyStateBlocked(v26) )
  {
LABEL_18:
    KeyState = 0;
    goto LABEL_23;
  }
  if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
  {
LABEL_29:
    if ( IsKeyboardDelegationEnabledForThread(v4, v25, v27) )
      goto LABEL_18;
    KeyState = GetKeyState(a1, v28);
  }
  else
  {
    v32 = *(_QWORD *)(W32GetUserSessionState(v31, v25, v27) + 18928);
    v33 = *(_DWORD *)(v32 + 480);
    v43 = *(_QWORD *)(v32 + 472);
    v44 = v33;
    v36 = W32GetUserSessionState(v32, v34, v35);
    EtwTraceUIPIInputError((__int64)v4, 0LL, *(_QWORD *)(v36 + 18928), &v43, 3);
    KeyState = 0;
  }
LABEL_23:
  if ( IsKeyboardDelegationEnabledForThread(v4, v28, v29) )
  {
    *(_DWORD *)(*((_QWORD *)v4 + 64) + 112LL) = 0;
    v41 = 0LL;
    *(_QWORD *)(*((_QWORD *)v4 + 64) + 116LL) = 0LL;
  }
  else
  {
    v37 = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v38, v37, v39) + 19904) + 6984LL);
    *(_DWORD *)(*((_QWORD *)v4 + 64) + 112LL) = v37;
    v41 = *(_QWORD *)(*((_QWORD *)v4 + 58) + 280LL);
    *(_QWORD *)(*((_QWORD *)v4 + 64) + 116LL) = v41;
  }
  UserSessionSwitchLeaveCritWithNonPaged(v41, v37, v39, v40);
  return KeyState;
}
