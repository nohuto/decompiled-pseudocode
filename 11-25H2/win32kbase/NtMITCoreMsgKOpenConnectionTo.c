/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x140128F30
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x14014D6D0 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(__int64 a1, void *a2)
{
  unsigned int v3; // r14d
  _QWORD *UserSessionState; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int128 v14; // [rsp+38h] [rbp-80h] BYREF
  __int128 v15; // [rsp+48h] [rbp-70h]
  __int64 v16; // [rsp+58h] [rbp-60h]
  __int128 v17; // [rsp+68h] [rbp-50h] BYREF
  __int128 v18; // [rsp+78h] [rbp-40h]
  __int64 v19; // [rsp+88h] [rbp-30h]

  v3 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
  v6 = v5;
  UserSessionState[3] = v5;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v6 )
      goto LABEL_10;
    *(_BYTE *)(v6 + 1708) = 1;
  }
  if ( v6 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_10:
  if ( (unsigned int)IsCurrentProcessDwm() )
  {
    if ( v3 > 0x15 )
    {
      UserSessionSwitchLeaveCritWithNonPaged(0LL, v7);
      return 3221225485LL;
    }
    else
    {
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      RtlCopyFromUser(&v14, a2, 0x28uLL);
      v17 = v14;
      v18 = v15;
      v19 = v16;
      v10 = W32GetUserSessionState(v9, v8);
      v11 = InputExtensibilityCallout::CoreMsgOpenDestinationHandle(*(_QWORD *)(v10 + 16408), v3, &v17);
      UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
      return v11;
    }
  }
  else
  {
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v7);
    return 3221225506LL;
  }
}
