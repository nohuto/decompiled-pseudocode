/*
 * XREFs of HandleMITWakeSignal @ 0x1400F06E8
 * Callers:
 *     _lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_ @ 0x1400F06D0 (_lambda_0f9e2a8fc479216b45af02f10e3c5bbd_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?WakeMit@Win32k@InputTraceLogging@@SAXK@Z @ 0x1400EBB3C (-WakeMit@Win32k@InputTraceLogging@@SAXK@Z.c)
 *     EditionxxxComputeInputSinkInfo @ 0x14013A53C (EditionxxxComputeInputSinkInfo.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ExecuteMarshaledInterceptRequest @ 0x140215FE0 (ExecuteMarshaledInterceptRequest.c)
 *     xxxProcessMouseEvent @ 0x1402170E0 (xxxProcessMouseEvent.c)
 */

void HandleMITWakeSignal()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int32 i; // ebp
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  _QWORD *UserSessionState; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 *v13; // [rsp+58h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v13, "HandleMITWakeSignal", 0LL);
  for ( i = _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v1, v0) + 18732), 0); i; i &= ~v3 )
  {
    v3 = i & -i;
    if ( ((unsigned __int8)i & (unsigned __int8)-(char)i & 7) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 220LL);
    InputTraceLogging::Win32k::WakeMit(v3);
    if ( v3 == 1 )
    {
      UserSessionState = (_QWORD *)W32GetUserSessionState(v5, v4);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                UserSessionState,
                1LL,
                0LL,
                _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
      v12 = v11;
      UserSessionState[3] = v11;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v12 )
          goto LABEL_25;
      }
      else if ( v12 )
      {
        *(_BYTE *)(v12 + 1708) = 1;
LABEL_25:
        if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v12) )
        {
          DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
        }
      }
      xxxProcessMouseEvent();
      goto LABEL_28;
    }
    if ( v3 != 2 )
    {
      if ( v3 == 4 )
        ExecuteMarshaledInterceptRequest();
      continue;
    }
    v6 = (_QWORD *)W32GetUserSessionState(v5, v4);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
             v6,
             1LL,
             0LL,
             _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v6, 0LL);
    v8 = v7;
    v6[3] = v7;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v8 )
        goto LABEL_15;
    }
    else if ( v8 )
    {
      *(_BYTE *)(v8 + 1708) = 1;
LABEL_15:
      if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v8) )
      {
        DestroySharedUserCritDeferredUnlockList(v6 + 2461);
        DestroyDeferredUnlockObjectAssignmentList(v6 + 2468);
        DestroyDeferredUnlockObjectAssignmentList(v6 + 2466);
      }
    }
    EditionxxxComputeInputSinkInfo();
LABEL_28:
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v9);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v13);
}
