/*
 * XREFs of ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B5D5C
 * Callers:
 *     xxxUserProcessCallout @ 0x14016B6A0 (xxxUserProcessCallout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 *     ApiSetEditionShowSystemCursor @ 0x140196AC0 (ApiSetEditionShowSystemCursor.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     CloseWin32InputRelatedObHandles @ 0x14021C31C (CloseWin32InputRelatedObHandles.c)
 */

void __fastcall UserProcessDestroyCallout(struct _W32PROCESS *a1, __int64 a2)
{
  _QWORD *UserSessionState; // rdi
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  bool v12; // bl
  bool v13; // di
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned int v25; // edi
  unsigned __int64 i; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 *v30; // rcx
  __int64 *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  _BYTE v34[8]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v35; // [rsp+48h] [rbp-10h]

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v4 = 1;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
  v6 = v5;
  UserSessionState[3] = v5;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v6 )
      goto LABEL_10;
  }
  else
  {
    if ( !v6 )
      goto LABEL_10;
    *(_BYTE *)(v6 + 1708) = 1;
  }
  if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v7);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_10:
  v35 = 0LL;
  v34[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v34, v7);
  v10 = *(_QWORD *)(W32GetUserGdiSessionState(v8) + 40);
  if ( *(_QWORD *)a1 == v10 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 36368) + 360LL) )
    {
      v12 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
        LOBYTE(v15) = v13;
        LOBYTE(v16) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v15,
          *(_QWORD *)(v14 + 69144),
          3,
          14,
          33,
          (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
      }
    }
  }
  else
  {
    v4 = 0;
  }
  if ( (unsigned int)DestroyProcessInfo(a1) )
  {
    v19 = W32GetUserSessionState(v18, v17);
    v22 = W32GetUserSessionState(v21, v20);
    v24 = *(_QWORD *)(v19 + 19888);
    v25 = *(_DWORD *)(v22 + 19816);
    for ( i = v24 + 32LL * v25; i > v24 && !*(_BYTE *)(i + 24); i -= 32LL )
      --v25;
    *(_DWORD *)(W32GetUserSessionState(v24, v23) + 19816) = v25;
    v29 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 56968);
    GreLockVisRgn(*(_QWORD *)(v29 + 48));
    v30 = *(__int64 **)(v29 + 24);
    if ( v30 != (__int64 *)(v29 + 24) )
    {
      do
      {
        v31 = (__int64 *)*v30;
        if ( (v30[6] & 0x400000) != 0 )
          DestroyCacheDC(v30, v30[2]);
        v30 = v31;
      }
      while ( v31 != (__int64 *)(v29 + 24) );
    }
    GreUnlockVisRgn(*(_QWORD *)(v29 + 48));
    ApiSetEditionShowSystemCursor(v33, v32);
    if ( v4 )
      CloseWin32InputRelatedObHandles();
  }
  if ( v34[0] )
    --*(_DWORD *)(v35 + 28);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v17);
}
