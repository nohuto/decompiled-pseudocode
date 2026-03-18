/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x140166D50
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1400D7F54 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(unsigned int a1, void *a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 v24; // [rsp+38h] [rbp-70h] BYREF
  __int128 v25; // [rsp+48h] [rbp-60h]
  __int64 v26; // [rsp+58h] [rbp-50h]
  __int128 v27; // [rsp+60h] [rbp-48h] BYREF
  __int128 v28; // [rsp+70h] [rbp-38h]
  __int64 v29; // [rsp+80h] [rbp-28h]

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, (_DWORD)a2, a3);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  if ( v6 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v8, v9);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( (unsigned int)IsCurrentProcessDwm(v7) )
  {
    if ( a1 > 0x16 )
    {
      UserSessionSwitchLeaveCritWithNonPaged(v11, v10, v12, v13);
      return 3221225485LL;
    }
    else
    {
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      RtlCopyFromUser(&v24, a2, 0x28uLL);
      v27 = v24;
      v28 = v25;
      v29 = v26;
      v17 = W32GetUserSessionState(v15, v14, v16);
      v18 = InputExtensibilityCallout::CoreMsgOpenDestinationHandle(*(_QWORD *)(v17 + 16400), a1, (__int64)&v27);
      UserSessionSwitchLeaveCritWithNonPaged(v20, v19, v21, v22);
      return v18;
    }
  }
  else
  {
    UserSessionSwitchLeaveCritWithNonPaged(v11, v10, v12, v13);
    return 3221225506LL;
  }
}
