/*
 * XREFs of NtMITUpdateInputGlobals @ 0x140163340
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D36E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UpconvertTime @ 0x14012E240 (UpconvertTime.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtMITUpdateInputGlobals(unsigned int a1, int a2, int a3, unsigned int a4, int a5)
{
  unsigned __int16 v6; // bp
  _QWORD *UserSessionState; // rbx
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  unsigned __int64 v20; // rax

  v6 = a3;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v14 = 0LL;
  UserSessionState[3] = v10;
  if ( v10 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v11, v13);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( IsInputThread(v12, v11, v13) )
  {
    v19 = *(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 3056);
    v20 = UpconvertTime(a1);
    CInputGlobals::UpdateInputGlobals(v19, v20, a2, v6, a4, a5);
    v14 = 1LL;
  }
  UserSessionSwitchLeaveCritWithNonPaged(v16, v15, v17, v18);
  return v14;
}
