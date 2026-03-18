/*
 * XREFs of ?Win32kNtUserCleanup@@YAHXZ @ 0x1401B59A4
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ImSessionStop @ 0x1400BD4B8 (ImSessionStop.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x1400BE794 (Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ??9?$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z @ 0x140180588 (--9-$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z.c)
 *     ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z @ 0x1401960FC (-CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     CleanupLogonProcess @ 0x1401D96E0 (CleanupLogonProcess.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kNtUserCleanup(__int64 a1, int a2, int a3)
{
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rcx
  int v22; // r8d
  void (*v23)(void); // rax
  _QWORD *v24; // rbx
  __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  struct _FAST_ERESOURCE **v36; // rax
  __int64 v37; // rcx
  int v38; // edx
  __int64 v39; // rcx
  int v40; // r8d
  void (*v41)(void); // rax
  void *v42; // rcx
  __int64 v43; // rcx
  int (*v44)(void); // rax
  __int64 v45; // rcx
  void (*v46)(void); // rax

  v3 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      14,
      10,
      (__int64)&WPP_1694f8648fb7338eb8af492443ee6fcc_Traceguids);
  }
  Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck();
  if ( *(_DWORD *)(W32GetUserSessionState(v9, v8, v10) + 42600) )
  {
    ImSessionStop();
    *(_DWORD *)(W32GetUserSessionState(v15, v14, v16) + 42600) = 0;
  }
  if ( SGCRITTYPEgpresUser<_FAST_ERESOURCE *>::operator!=(v12, v11, v13) )
  {
    v21 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v18) + 48);
    v23 = *(void (**)(void))(v21 + 200);
    if ( v23 )
      v23();
    v24 = (_QWORD *)W32GetUserSessionState(v21, v20, v22);
    v25 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v24,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v24[3] = v25;
    if ( v25 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v25) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v24 + 2465), v26, v28);
      DestroyDeferredUnlockObjectAssignmentList(v24 + 2472);
      DestroyDeferredUnlockObjectAssignmentList(v24 + 2470);
    }
    Win32kNtUserCleanupInternal(v27, v26, v28);
    UserSessionSwitchLeaveCritWithNonPaged(v30, v29, v31, v32);
    v36 = (struct _FAST_ERESOURCE **)W32GetUserSessionState(v34, v33, v35);
    CLEANUP_CRIT_RESOURCE(v36);
  }
  else
  {
    Win32kNtUserCleanupInternal(v18, v17, v19);
  }
  v39 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v37) + 48);
  if ( *(_QWORD *)v39 )
  {
    if ( (*(int (**)(void))v39)() >= 0 )
    {
      v39 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v39) + 48);
      v41 = *(void (**)(void))(v39 + 8);
      if ( v41 )
        v41();
    }
  }
  v42 = *(void **)(W32GetUserSessionState(v39, v38, v40) + 63592);
  if ( v42 )
    ZwClose(v42);
  CleanupLogonProcess(1LL);
  v44 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v43) + 48) + 32LL);
  if ( v44 )
  {
    if ( v44() >= 0 )
    {
      v46 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v45) + 48) + 40LL);
      if ( v46 )
        v46();
    }
  }
  return 1LL;
}
