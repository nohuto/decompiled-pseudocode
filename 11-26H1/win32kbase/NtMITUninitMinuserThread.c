/*
 * XREFs of NtMITUninitMinuserThread @ 0x1401E1950
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ProtectHandle @ 0x140133808 (ProtectHandle.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtMITUninitMinuserThread(int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  void *v16; // rcx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v6 = 0LL;
  UserSessionState[3] = v4;
  v7 = v4;
  if ( v4 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v4 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1200) == 1 )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v5, v9);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
        }
      }
    }
  }
  v12 = PtiCurrent(v7, v5);
  v15 = *((_QWORD *)v12 + 170);
  if ( (v15 & 0x1000000) != 0 )
  {
    v16 = (void *)*((_QWORD *)v12 + 94);
    *((_QWORD *)v12 + 170) = v15 & 0xFFFFFFFFFEFFFFFFuLL;
    ProtectHandle(v16, v10, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
    ObfDereferenceObject(*((PVOID *)v12 + 95));
    *((_QWORD *)v12 + 94) = 0LL;
    *((_QWORD *)v12 + 95) = 0LL;
    v6 = 1LL;
  }
  UserSessionSwitchLeaveCritWithNonPaged(v11, v10, v13, v14);
  return v6;
}
