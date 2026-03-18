/*
 * XREFs of ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401D885C
 * Callers:
 *     xxxUserProcessCallout @ 0x1401D8EA0 (xxxUserProcessCallout.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401CF45C (-HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAU_PS_PKG_CLAIM@@@Z @ 0x1401D8598 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 */

__int64 __fastcall xxxUserProcessInitCallout(struct _W32PROCESS *this, PEPROCESS *a2)
{
  char v4; // di
  PACCESS_TOKEN v6; // rsi
  int v7; // edx
  int v8; // ecx
  int inited; // ebx
  int v10; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v12; // rax
  __int64 CurrentProcessWin32Process; // rax
  int v14; // edx
  int v15; // r8d
  struct tagPROCESSINFO *v16; // rdx
  int v17; // r8d
  __int64 v18; // rdx
  CTouchProcessor *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // si
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  PVOID v26; // [rsp+70h] [rbp+8h] BYREF
  int v27; // [rsp+80h] [rbp+18h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h] BYREF

  v27 = 0;
  LODWORD(v26) = 0;
  v28 = 0LL;
  v4 = 1;
  if ( *((_BYTE *)this + 1200) == 1 )
    return 1073741851LL;
  v6 = PsReferencePrimaryToken(a2[2]);
  if ( !v6 )
    return 3221225596LL;
  inited = UserProcessImmersiveType(
             (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2,
             v6,
             (enum _PROCESS_IMMERSIVE_TYPE *)&v27,
             &v26,
             (struct _PS_PKG_CLAIM *)&v28);
  if ( inited >= 0 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(v8, v7, v10);
    v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            UserSessionState,
            1LL,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v12;
    if ( v12 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v12 + 520), 0, 0) & 0x1000000) != 0
        && *(char *)(v12 + 1360) >= 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
        if ( CurrentProcessWin32Process )
        {
          if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1200) == 1 )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v14, v15);
            DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
            DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
          }
        }
      }
    }
    inited = xxxInitProcessInfo(this, v6, v27, (int)v26, &v28);
    PsDereferencePrimaryToken(v6);
    if ( inited >= 0 )
    {
      Win32JobObject::HandleConvertToGui(this, v16);
    }
    else if ( (unsigned int)DestroyProcessInfo(this, (__int64)v16, v17) )
    {
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v4 = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18, v20);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v4;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(v23 + 69136),
          2,
          14,
          34,
          (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
      }
    }
    UserSessionSwitchLeaveCritWithNonPaged((__int64)v19, v18, v20, v21);
  }
  else
  {
    PsDereferencePrimaryToken(v6);
  }
  return (unsigned int)inited;
}
