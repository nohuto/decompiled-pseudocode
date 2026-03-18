/*
 * XREFs of ?Win32kNtUserCleanup@@YAHXZ @ 0x140169E70
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x140137664 (Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14016A0DC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     CleanupLogonProcess @ 0x14016BCA0 (CleanupLogonProcess.c)
 *     ??9?$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z @ 0x14019DB10 (--9-$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z @ 0x1401B30DC (-CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z.c)
 *     ImSessionStop @ 0x140240D10 (ImSessionStop.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kNtUserCleanup(__int64 a1, __int64 a2)
{
  bool v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  void (*v15)(void); // rax
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _FAST_ERESOURCE **v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  void (*v28)(void); // rax
  void *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int (*v32)(void); // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  void (*v35)(void); // rax

  v2 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      10,
      (__int64)&WPP_fa6b8f79bf1f3a7ddecd36172dbcfaf7_Traceguids);
  }
  Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck();
  if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 42576) )
  {
    ImSessionStop();
    *(_DWORD *)(W32GetUserSessionState(v10, v9) + 42576) = 0;
  }
  if ( !(unsigned int)SGCRITTYPEgpresUser<_FAST_ERESOURCE *>::operator!=() )
  {
    Win32kNtUserCleanupInternal();
    goto LABEL_25;
  }
  v14 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v12, v11) + 48);
  v15 = *(void (**)(void))(v14 + 200);
  if ( v15 )
    v15();
  v16 = (_QWORD *)W32GetUserSessionState(v14, v13);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v17 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            v16,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v17 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v16, 0LL);
  v18 = v17;
  v16[3] = v17;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v18 )
    {
LABEL_21:
      if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v18) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v16 + 2461), v19);
        DestroyDeferredUnlockObjectAssignmentList(v16 + 2468);
        DestroyDeferredUnlockObjectAssignmentList(v16 + 2466);
      }
    }
  }
  else if ( v18 )
  {
    *(_BYTE *)(v18 + 1708) = 1;
    goto LABEL_21;
  }
  Win32kNtUserCleanupInternal();
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v20);
  v23 = (struct _FAST_ERESOURCE **)W32GetUserSessionState(v22, v21);
  CLEANUP_CRIT_RESOURCE(v23);
LABEL_25:
  v27 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v25, v24) + 48);
  if ( *(_QWORD *)v27 )
  {
    if ( (*(int (**)(void))v27)() >= 0 )
    {
      v27 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v27, v26) + 48);
      v28 = *(void (**)(void))(v27 + 8);
      if ( v28 )
        v28();
    }
  }
  v29 = *(void **)(W32GetUserSessionState(v27, v26) + 63600);
  if ( v29 )
    ZwClose(v29);
  CleanupLogonProcess(1LL);
  v32 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v31, v30) + 48) + 32LL);
  if ( v32 )
  {
    if ( v32() >= 0 )
    {
      v35 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v34, v33) + 48) + 40LL);
      if ( v35 )
        v35();
    }
  }
  return 1LL;
}
