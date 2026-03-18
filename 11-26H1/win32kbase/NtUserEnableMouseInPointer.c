/*
 * XREFs of NtUserEnableMouseInPointer @ 0x140177A70
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     GetAppCompatFlags2QuadWord @ 0x1401452E4 (GetAppCompatFlags2QuadWord.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserEnableMouseInPointer(int a1, int a2, int a3)
{
  __int64 v3; // rsi
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rdi
  int v10; // ecx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagTHREADINFO *v15; // rax

  v3 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9 = 0LL;
  UserSessionState[3] = v5;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v6, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( ((_DWORD)v3 != 0) == (_DWORD)v3 )
  {
    if ( !(_DWORD)v3
      || (v15 = PtiCurrent(v7, v6), ((unsigned __int64)GetAppCompatFlags2QuadWord((__int64)v15) & 0x80000000000LL) == 0) )
    {
      v13 = *((_QWORD *)PtiCurrent(v7, v6) + 57);
      v11 = *(_QWORD *)(v13 + 808);
      if ( (_DWORD)v3 == ((v11 >> 2) & 1) || (v11 & 8) == 0 )
      {
        v9 = 1LL;
        v12 = (4 * v3) ^ (v11 ^ (4 * v3)) & 0xFFFFFFFFFFFFFFFBuLL | 8;
        *(_QWORD *)(v13 + 808) = v12;
        goto LABEL_12;
      }
    }
    v10 = 5;
  }
  else
  {
    v10 = 87;
  }
  UserSetLastError(v10);
LABEL_12:
  UserSessionSwitchLeaveCritWithNonPaged(v12, v11, v13, v14);
  return v9;
}
