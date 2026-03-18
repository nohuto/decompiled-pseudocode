/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1400EB380
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x1400EB360 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x140039DB0 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?DispatcherObjectSignaled@Win32k@InputTraceLogging@@SAXW4DispatcherHandleName@CRIMBase@@@Z @ 0x1400E5024 (-DispatcherObjectSignaled@Win32k@InputTraceLogging@@SAXW4DispatcherHandleName@CRIMBase@@@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?GetHandleNameFromDispatcherObject@CRIMBase@@IEAA?AW4DispatcherHandleName@1@PEAX@Z @ 0x14018A508 (-GetHandleNameFromDispatcherObject@CRIMBase@@IEAA-AW4DispatcherHandleName@1@PEAX@Z.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x14018AA74 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  unsigned int HandleNameFromDispatcherObject; // eax
  __int64 v5; // rbp
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *UserSessionState; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 *v14; // [rsp+70h] [rbp+18h] BYREF

  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 112LL))(this);
  HandleNameFromDispatcherObject = CRIMBase::GetHandleNameFromDispatcherObject(this, a2);
  v5 = HandleNameFromDispatcherObject;
  if ( HandleNameFromDispatcherObject == 19 )
  {
    v6 = -1073741823;
    goto LABEL_20;
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v14, "DispatcherObjectSignaled", 0LL);
  InputTraceLogging::Win32k::DispatcherObjectSignaled();
  if ( (_DWORD)v5 != *((_DWORD *)&unk_140257C60 + 6 * v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2801LL);
  if ( *((_DWORD *)&unk_140257C60 + 6 * v5 + 4) )
  {
    v6 = funcs_1400EB4B3[3 * v5](this);
    goto LABEL_17;
  }
  UserSessionState = (_QWORD *)W32GetUserSessionState(v8, v7);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
  v11 = v10;
  UserSessionState[3] = v10;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v11 )
    {
LABEL_13:
      if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v11) )
      {
        DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
      }
    }
  }
  else if ( v11 )
  {
    *(_BYTE *)(v11 + 1708) = 1;
    goto LABEL_13;
  }
  v6 = funcs_1400EB4B3[3 * v5](this);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
LABEL_17:
  if ( v6 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2812LL);
  CRIMBase::SignalMarshalingCompleted(this, (unsigned int)v5);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v14);
LABEL_20:
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 120LL))(this);
  return (unsigned int)v6;
}
