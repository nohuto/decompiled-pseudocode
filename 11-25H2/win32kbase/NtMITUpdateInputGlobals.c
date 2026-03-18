/*
 * XREFs of NtMITUpdateInputGlobals @ 0x140123D00
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99B0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     UpconvertTime @ 0x1400E7B30 (UpconvertTime.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtMITUpdateInputGlobals(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  _QWORD *UserSessionState; // rsi
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  unsigned __int64 v19; // rax

  v7 = a2;
  v8 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v11 = 0LL;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            0LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v10) = 1;
    v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v10);
  }
  v13 = v12;
  UserSessionState[3] = v12;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v13 )
      goto LABEL_9;
  }
  else
  {
    if ( !v13 )
      goto LABEL_9;
    *(_BYTE *)(v13 + 1708) = 1;
  }
  DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
LABEL_9:
  if ( IsInputThread(v15, v14) )
  {
    v18 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 3056);
    v19 = UpconvertTime(v8);
    CInputGlobals::UpdateInputGlobals(v18, v19, v7, a3, a4, a5);
    v11 = 1LL;
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v16);
  return v11;
}
