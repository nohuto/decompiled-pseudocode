/*
 * XREFs of HandleMITWakeSignal @ 0x14012BBF8
 * Callers:
 *     _lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_ @ 0x14012BBE0 (_lambda_0f9e2a8fc479216b45af02f10e3c5bbd_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     xxxProcessMouseEvent @ 0x1400D0BC0 (xxxProcessMouseEvent.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?WakeMit@Win32k@InputTraceLogging@@SAXK@Z @ 0x14012E5F0 (-WakeMit@Win32k@InputTraceLogging@@SAXK@Z.c)
 *     EditionxxxComputeInputSinkInfo @ 0x140171C70 (EditionxxxComputeInputSinkInfo.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ExecuteMarshaledInterceptRequest @ 0x14021B470 (ExecuteMarshaledInterceptRequest.c)
 */

void HandleMITWakeSignal()
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  __int64 v3; // rdx
  __int32 i; // edi
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // r8d
  _QWORD *v8; // rsi
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *UserSessionState; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r8d
  void **v21; // [rsp+48h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v21, "HandleMITWakeSignal", 0LL);
  for ( i = _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v1, v0, v2) + 18780), 0); i; i &= ~v5 )
  {
    v5 = i & -i;
    if ( ((unsigned __int8)i & (unsigned __int8)-(char)i & 7) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 220LL);
    InputTraceLogging::Win32k::WakeMit(v5);
    if ( v5 == 1 )
    {
      UserSessionState = (_QWORD *)W32GetUserSessionState(v6, v3, v7);
      v17 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              UserSessionState,
              1LL,
              0LL,
              _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      UserSessionState[3] = v17;
      if ( v17 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v17) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v19, v20);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
      }
      xxxProcessMouseEvent(v18);
    }
    else
    {
      if ( v5 != 2 )
      {
        if ( v5 == 4 )
          ExecuteMarshaledInterceptRequest();
        continue;
      }
      v8 = (_QWORD *)W32GetUserSessionState(v6, v3, v7);
      v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
             v8,
             1LL,
             0LL,
             _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v8[3] = v9;
      if ( v9 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v9) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v8 + 2465), v10, v11);
        DestroyDeferredUnlockObjectAssignmentList(v8 + 2472);
        DestroyDeferredUnlockObjectAssignmentList(v8 + 2470);
      }
      EditionxxxComputeInputSinkInfo();
    }
    UserSessionSwitchLeaveCritWithNonPaged(v13, v12, v14, v15);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v21,
    v3);
}
