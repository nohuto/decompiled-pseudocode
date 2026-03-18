/*
 * XREFs of ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401B62C0
 * Callers:
 *     xxxUserProcessCallout @ 0x14016B6A0 (xxxUserProcessCallout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401AD2C4 (-HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAU_PS_PKG_CLAIM@@@Z @ 0x1401B5FE4 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 */

__int64 __fastcall xxxUserProcessInitCallout(struct _W32PROCESS *this, PEPROCESS *a2)
{
  char v2; // si
  PACCESS_TOKEN v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  int inited; // ebx
  _QWORD *UserSessionState; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  struct tagPROCESSINFO *v14; // rdx
  __int64 v15; // rdx
  bool v16; // di
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  PVOID v20; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v21 = 0;
  v2 = 1;
  LODWORD(v20) = 0;
  v22 = 0LL;
  if ( *((_BYTE *)this + 1176) == 1 )
    return 1073741851LL;
  v6 = PsReferencePrimaryToken(a2[2]);
  if ( !v6 )
    return 3221225596LL;
  inited = UserProcessImmersiveType(
             (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2,
             v6,
             (enum _PROCESS_IMMERSIVE_TYPE *)&v21,
             &v20,
             (struct _PS_PKG_CLAIM *)&v22);
  if ( inited >= 0 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(v8, v7);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              UserSessionState,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
    v12 = v11;
    UserSessionState[3] = v11;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v12 )
      {
LABEL_14:
        if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v12) )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v13);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
        }
      }
    }
    else if ( v12 )
    {
      *(_BYTE *)(v12 + 1708) = 1;
      goto LABEL_14;
    }
    inited = xxxInitProcessInfo(this, v6, v21, (int)v20, (__int64)&v22);
    PsDereferencePrimaryToken(v6);
    if ( inited >= 0 )
    {
      Win32JobObject::HandleConvertToGui(this, v14);
    }
    else if ( (unsigned int)DestroyProcessInfo(this) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v2 = 0;
      }
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
        LOBYTE(v18) = v16;
        LOBYTE(v19) = v2;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(v17 + 69144),
          2,
          14,
          34,
          (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
      }
    }
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v15);
    return (unsigned int)inited;
  }
  PsDereferencePrimaryToken(v6);
  return (unsigned int)inited;
}
