/*
 * XREFs of ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401D82B8
 * Callers:
 *     xxxUserProcessCallout @ 0x1401D8EA0 (xxxUserProcessCallout.c)
 * Callees:
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ApiSetEditionShowSystemCursor @ 0x1401C1638 (ApiSetEditionShowSystemCursor.c)
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 *     CloseWin32InputRelatedObHandles @ 0x14021FF40 (CloseWin32InputRelatedObHandles.c)
 */

void __fastcall UserProcessDestroyCallout(struct _W32PROCESS *a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // edx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 CurrentThreadWin32Thread; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r8d
  char v20; // bl
  bool v21; // bp
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbx
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  __int64 v33; // rax
  int v34; // edx
  int v35; // r8d
  unsigned __int64 v36; // rcx
  unsigned int v37; // ebp
  unsigned __int64 i; // rax
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // r14
  __int64 v43; // rcx
  __int64 SessionState; // rax
  __int64 v45; // rdx
  int v46; // r8d
  _DWORD **v47; // r14
  _DWORD *v48; // rcx
  _DWORD *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // r8d
  __int64 v53; // rcx

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)a1, a2, a3);
  v5 = 1;
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  v9 = v6;
  if ( v6 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v6 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1200) == 1 )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v9, v8);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
        }
      }
    }
  }
  if ( !*(_QWORD *)W32GetUserSessionState(v7, v9, v8)
    || (v14 = *(unsigned int *)(PsGetCurrentThreadWin32Thread(v12, v11) + 24), (v14 & 0xC) == 0) )
  {
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v14, v13);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
  v18 = *(_QWORD *)(W32GetUserGdiSessionState(v16) + 40);
  if ( *(_QWORD *)a1 == v18 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v17, v19) + 36400) + 368LL) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
        || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v20 = 0;
      }
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v17, v19);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v20;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v23,
          *(_QWORD *)(v22 + 69136),
          3,
          14,
          33,
          (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
      }
    }
  }
  else
  {
    v5 = 0;
  }
  if ( (unsigned int)DestroyProcessInfo(a1, v17, v19) )
  {
    v29 = W32GetUserSessionState(v26, v25, v27);
    v33 = W32GetUserSessionState(v31, v30, v32);
    v36 = *(_QWORD *)(v29 + 19920);
    v37 = *(_DWORD *)(v33 + 19848);
    for ( i = v36 + 32LL * v37; i > v36 && !*(_BYTE *)(i + 24); i -= 32LL )
      --v37;
    *(_DWORD *)(W32GetUserSessionState(v36, v34, v35) + 19848) = v37;
    v42 = *(_QWORD *)(W32GetUserSessionState(v40, v39, v41) + 56968);
    SessionState = W32GetSessionState(v43);
    GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v45, v46);
    v47 = (_DWORD **)(v42 + 24);
    v48 = *v47;
    if ( *v47 != (_DWORD *)v47 )
    {
      do
      {
        v49 = *(_DWORD **)v48;
        if ( (v48[12] & 0x400000) != 0 )
          DestroyCacheDC(v48);
        v48 = v49;
      }
      while ( v49 != (_DWORD *)v47 );
    }
    v50 = W32GetSessionState(v48);
    GrepUnlockVisRgn(*(struct _ERESOURCE ***)(v50 + 88), v51, v52);
    ApiSetEditionShowSystemCursor(v53);
    if ( v5 )
      CloseWin32InputRelatedObHandles();
  }
  --*(_DWORD *)(CurrentThreadWin32Thread + 28);
  UserSessionSwitchLeaveCritWithNonPaged(v26, v25, v27, v28);
}
