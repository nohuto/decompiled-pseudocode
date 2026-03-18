/*
 * XREFs of NtMITPostMouseInputMessage @ 0x1401E1210
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     PostMouseInputMessage @ 0x14021BEB4 (PostMouseInputMessage.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtMITPostMouseInputMessage(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  _QWORD *UserSessionState; // rdi
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 ULong64FromUser; // rbx
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v21[6]; // [rsp+38h] [rbp-30h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v9;
  if ( v9 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v10, v12);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( IsInputThread(v11, v10, v12) )
  {
    v21[0] = 0LL;
    ULong64FromUser = RtlReadULong64FromUser(a1);
    v21[1] = ULong64FromUser;
    if ( a4 )
    {
      v20 = 0LL;
      RtlCopyFromUser(&v20, a4, 8uLL);
      v21[0] = v20;
      a4 = v21;
    }
    v15 = (unsigned int)-((unsigned __int8)PostMouseInputMessage(ULong64FromUser, a2, a3, a4) == 0);
    v13 = v15 & 0xC0000001;
  }
  else
  {
    v13 = -1073741823;
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v15, v14, v16, v17);
  return v13;
}
