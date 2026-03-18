/*
 * XREFs of NtUserPostKeyboardInputMessage @ 0x1401E7FB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x140123A60 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ApiSetEditionPostKeyboardInputMessage @ 0x140227BD4 (ApiSetEditionPostKeyboardInputMessage.c)
 */

__int64 __fastcall NtUserPostKeyboardInputMessage(int a1, void *a2, __int64 a3)
{
  _QWORD *UserSessionState; // rsi
  char v7; // di
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // edx
  int v20; // r8d
  __int16 v21; // r9
  __int16 v22; // r10
  __int16 v23; // r11
  unsigned int v24; // ebx
  ULONG v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int128 v30; // [rsp+60h] [rbp-58h] BYREF
  int v31; // [rsp+70h] [rbp-48h]
  __int128 v32; // [rsp+78h] [rbp-40h]
  int v33; // [rsp+88h] [rbp-30h]

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, (_DWORD)a2, a3);
  v7 = 1;
  v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v11 = v8;
  UserSessionState[3] = v8;
  if ( !v8 )
    goto LABEL_11;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 520), 0, 0) & 0x1000000) != 0
    && *(char *)(v8 + 1360) >= 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( !CurrentProcessWin32Process )
      goto LABEL_11;
    v11 = -*(_QWORD *)CurrentProcessWin32Process;
    v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v13 = v9 & CurrentProcessWin32Process;
    if ( !v13 || *(_BYTE *)(v13 + 1200) != 1 )
      goto LABEL_11;
  }
  else
  {
    v7 = 0;
  }
  if ( v7 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v9, v10);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
LABEL_11:
  if ( (unsigned int)IsCurrentProcessDwm(v11) )
  {
    v30 = 0LL;
    v31 = 0;
    RtlCopyFromUser(&v30, a2, 0x14uLL);
    v32 = v30;
    v33 = v31;
    LOBYTE(v19) = CKeyboardProcessor::HandleLeftRightVKs(BYTE8(v30));
    v24 = ApiSetEditionPostKeyboardInputMessage(a1, v19, v20, (unsigned __int16)v30, v23, v21, v31, v20, v22, a3);
    v25 = RtlNtStatusToDosError(v24);
    UserSetLastError(v25);
    UserSessionSwitchLeaveCritWithNonPaged(v27, v26, v28, v29);
    return v24;
  }
  else
  {
    UserSessionSwitchLeaveCritWithNonPaged(v15, v14, v16, v17);
    return 3221225506LL;
  }
}
