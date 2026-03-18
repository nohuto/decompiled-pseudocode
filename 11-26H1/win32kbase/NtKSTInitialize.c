/*
 * XREFs of NtKSTInitialize @ 0x14018CFE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsKSTThread @ 0x1400659B0 (IsKSTThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserKSTInitialize @ 0x140181AD0 (UserKSTInitialize.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtKSTInitialize(void *a1, void *a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  unsigned int v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  HANDLE v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v10 = 0;
  UserSessionState[3] = v6;
  if ( v6 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v9);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( ((unsigned int)IsCurrentProcessDwm(v8)
     || (v14 = *(HANDLE *)(W32GetUserSessionState(v12, v11, v13) + 63536), PsGetCurrentProcessId() == v14))
    && *(_DWORD *)(W32GetUserSessionState(v12, v11, v13) + 19136) )
  {
    if ( !IsKSTThread(v12, v11, v13) )
    {
      v10 = UserKSTInitialize(a1, a2);
      goto LABEL_11;
    }
  }
  else if ( !*(_DWORD *)(W32GetUserSessionState(v12, v11, v13) + 19136) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5056LL);
  }
  UserSetLastError(5);
LABEL_11:
  UserSessionSwitchLeaveCritWithNonPaged(v16, v15, v17, v18);
  return v10;
}
