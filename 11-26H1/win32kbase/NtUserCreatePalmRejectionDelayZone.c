/*
 * XREFs of NtUserCreatePalmRejectionDelayZone @ 0x1401E2810
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     AddPalmRejectionDelayZone @ 0x14021AD2C (AddPalmRejectionDelayZone.c)
 */

__int64 __fastcall NtUserCreatePalmRejectionDelayZone(void *a1, void *Src, __int64 a3, void *a4, int a5)
{
  _QWORD *UserSessionState; // rsi
  __int64 v10; // rax
  int v11; // edx
  int v12; // r8d
  __int128 v13; // xmm6
  __int128 v14; // xmm7
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v21; // [rsp+50h] [rbp-58h] BYREF
  __int128 v22; // [rsp+60h] [rbp-48h]

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)a1, (_DWORD)Src, a3);
  v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v10;
  if ( v10 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v11, v12);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  v13 = 0LL;
  v21 = 0LL;
  RtlCopyFromUser(&v21, Src, 0x10uLL);
  v14 = v21;
  v22 = v21;
  if ( a3 )
  {
    v21 = 0LL;
    RtlCopyFromUser(&v21, a4, 0x10uLL);
    v13 = v21;
    v22 = v21;
  }
  v21 = v13;
  v22 = v14;
  v15 = AddPalmRejectionDelayZone(a1, a5);
  UserSessionSwitchLeaveCritWithNonPaged(v17, v16, v18, v19);
  return v15;
}
