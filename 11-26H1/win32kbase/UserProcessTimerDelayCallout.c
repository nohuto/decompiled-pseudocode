/*
 * XREFs of UserProcessTimerDelayCallout @ 0x1401CAD8C
 * Callers:
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UserProcessTimerDelayCallout(__int64 a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v8; // edx
  int v9; // r8d
  _QWORD *ProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rbx
  unsigned int v16; // esi
  unsigned int v17; // edi
  __int64 (__fastcall *v18)(_QWORD *, _QWORD, _QWORD); // rax
  unsigned int v19; // ebx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  if ( v5 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v5 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1200) == 1 )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v8, v9);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
        }
      }
    }
  }
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 16));
  v15 = ProcessWin32Process;
  if ( ProcessWin32Process && *ProcessWin32Process )
  {
    v16 = *(_DWORD *)(a1 + 28);
    v17 = *(_DWORD *)(a1 + 24);
    v14 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 48);
    v18 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v14 + 1024);
    if ( v18 )
      v19 = v18(v15, v17, v16);
    else
      v19 = -1073741637;
  }
  else
  {
    v19 = -1073741558;
  }
  UserSessionSwitchLeaveCritWithNonPaged(v12, v11, v13, v14);
  return v19;
}
