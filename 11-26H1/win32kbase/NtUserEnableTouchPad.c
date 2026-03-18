/*
 * XREFs of NtUserEnableTouchPad @ 0x1401E3C50
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x14006D78C (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     EnablePTPDevices @ 0x1401D7790 (EnablePTPDevices.c)
 *     EtwTraceUIPISystemError @ 0x1401DBAF0 (EtwTraceUIPISystemError.c)
 */

_BOOL8 __fastcall NtUserEnableTouchPad(int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  BOOL v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD v26[6]; // [rsp+30h] [rbp-18h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9 = 0;
  UserSessionState[3] = v5;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v6, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( !*(_QWORD *)W32GetUserSessionState(v7, v6, v8)
    || (v13 = *(unsigned int *)(PsGetCurrentThreadWin32Thread(v11, v10) + 24), (v13 & 0xC) == 0) )
  {
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v13, v12);
  v26[0] = 0x2000;
  v26[1] = -1;
  ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
  v26[2] = 0;
  v17 = PtiCurrent(v16, v15);
  if ( UIPrivilegeIsolation::CheckAccessEx(
         (UIPrivilegeIsolation *)(*((_QWORD *)v17 + 57) + 864LL),
         (const struct tagUIPI_INFO *)v26,
         0LL) )
  {
    LOBYTE(v9) = a1 != 0;
    v9 = EnablePTPDevices(v9);
  }
  else
  {
    v20 = PtiCurrent(v19, v18);
    EtwTraceUIPISystemError(*((PEPROCESS **)v20 + 57), 0LL, 13);
    UserSetLastError(5);
  }
  --*(_DWORD *)(CurrentThreadWin32Thread + 28);
  UserSessionSwitchLeaveCritWithNonPaged(v22, v21, v23, v24);
  return v9;
}
