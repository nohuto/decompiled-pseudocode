/*
 * XREFs of NtMITPostWindowEventMessage @ 0x1401E1450
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     _HMPkheFromObjectWorker @ 0x140094FC8 (_HMPkheFromObjectWorker.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     PostEvent @ 0x14021BE38 (PostEvent.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtMITPostWindowEventMessage(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  int v9; // esi
  _QWORD *UserSessionState; // rdi
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int ULong64FromUser; // edi
  _DWORD *v21; // rax
  struct tagTHREADINFO *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx

  v9 = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v11;
  if ( v11 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v12, v14);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( IsInputThread(v13, v12, v14) )
  {
    ULong64FromUser = 0;
    if ( a2 )
      ULong64FromUser = RtlReadULong64FromUser(a2);
    LOBYTE(v15) = -1;
    v21 = (_DWORD *)HMValidateHandleNoSecure(a1, v15);
    if ( v21 )
    {
      v22 = *(struct tagTHREADINFO **)(HMPkheFromObjectWorker(v21, v16, v18) + 8);
      if ( v22 == PtiCurrent(v24, v23) )
        v9 = (unsigned __int8)PostEvent(a1, ULong64FromUser, a3, a4, a5);
    }
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v17, v16, v18, v19);
  return v9;
}
