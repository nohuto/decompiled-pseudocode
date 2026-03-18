/*
 * XREFs of NtMITPostThreadEventMessage @ 0x1401E1340
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     PtiFromThreadId @ 0x1401200F0 (PtiFromThreadId.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     PostThreadEvent @ 0x14021BF58 (PostThreadEvent.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtMITPostThreadEventMessage(int a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  _QWORD *UserSessionState; // rdi
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // esi
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int ULong64FromUser; // edi
  __int64 v21; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v10;
  v14 = 0;
  if ( v10 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v11, v13);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( IsInputThread(v12, v11, v13) )
  {
    ULong64FromUser = 0;
    if ( a2 )
      ULong64FromUser = RtlReadULong64FromUser(a2);
    v21 = PtiFromThreadId(a1);
    if ( v21 )
    {
      LOBYTE(v14) = (unsigned __int8)PostThreadEvent(v21, ULong64FromUser, a3, a4, a5) != 0;
      goto LABEL_11;
    }
    v15 = 87;
  }
  else
  {
    v15 = 5;
  }
  UserSetLastError(v15);
LABEL_11:
  UserSessionSwitchLeaveCritWithNonPaged(v17, v16, v18, v19);
  return v14;
}
