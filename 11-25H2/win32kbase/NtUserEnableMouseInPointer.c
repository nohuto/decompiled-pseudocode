/*
 * XREFs of NtUserEnableMouseInPointer @ 0x14013A400
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     GetAppCompatFlags2QuadWord @ 0x1400B9C3C (GetAppCompatFlags2QuadWord.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtUserEnableMouseInPointer(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // ecx
  unsigned __int64 v9; // rdx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8

  v2 = (int)a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v5 = 0LL;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v4) = 1;
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v4);
  }
  v7 = v6;
  UserSessionState[3] = v6;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v7 )
      goto LABEL_9;
  }
  else
  {
    if ( !v7 )
      goto LABEL_9;
    *(_BYTE *)(v7 + 1708) = 1;
  }
  DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
LABEL_9:
  if ( ((_DWORD)v2 != 0) == (_DWORD)v2 )
  {
    if ( !(_DWORD)v2
      || (v10 = PtiCurrent(), ((unsigned __int64)GetAppCompatFlags2QuadWord((__int64)v10, v11) & 0x80000000000LL) == 0) )
    {
      v12 = *((_QWORD *)PtiCurrent() + 58);
      v9 = *(_QWORD *)(v12 + 808);
      if ( (_DWORD)v2 == ((v9 >> 2) & 1) || (v9 & 8) == 0 )
      {
        v5 = 1LL;
        *(_QWORD *)(v12 + 808) = (4 * v2) ^ (v9 ^ (4 * v2)) & 0xFFFFFFFFFFFFFFFBuLL | 8;
        goto LABEL_18;
      }
    }
    v8 = 5;
  }
  else
  {
    v8 = 87;
  }
  UserSetLastError(v8);
LABEL_18:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v9);
  return v5;
}
