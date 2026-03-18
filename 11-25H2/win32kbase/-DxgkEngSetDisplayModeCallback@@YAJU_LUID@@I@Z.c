/*
 * XREFs of ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x14012D130
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1401271A0 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     IsUserResetPointerSupported @ 0x140146190 (IsUserResetPointerSupported.c)
 *     UserResetPointer @ 0x140146B5C (UserResetPointer.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall DxgkEngSetDisplayModeCallback(struct _LUID a1, __int64 a2)
{
  int v2; // esi
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  struct _LUID v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v2 = a2;
  v3 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           v3,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v3, 0LL);
  v5 = v4;
  v3[3] = v4;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v5 )
      goto LABEL_10;
  }
  else
  {
    if ( !v5 )
      goto LABEL_10;
    *(_BYTE *)(v5 + 1708) = 1;
  }
  if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v5) )
  {
    DestroySharedUserCritDeferredUnlockList(v3 + 2461);
    DestroyDeferredUnlockObjectAssignmentList(v3 + 2468);
    DestroyDeferredUnlockObjectAssignmentList(v3 + 2466);
  }
LABEL_10:
  if ( (int)IsUserResetPointerSupported() >= 0 )
    UserResetPointer();
  DrvUpdatePDevForWDDMVidPnSource(&v8, v2);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v6);
  return 0LL;
}
