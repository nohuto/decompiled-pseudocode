/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x140118E90
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x140118E70 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x14005B780 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x140111674 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x140129E60 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?DispatcherObjectSignaled@Win32k@InputTraceLogging@@SAXW4DispatcherHandleName@CRIMBase@@@Z @ 0x14012A958 (-DispatcherObjectSignaled@Win32k@InputTraceLogging@@SAXW4DispatcherHandleName@CRIMBase@@@Z.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  void **v4; // rax
  unsigned int v5; // ebx
  int v6; // ebx
  __int64 v8; // rsi
  __int64 v9; // rsi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  void **v22; // [rsp+60h] [rbp+18h] BYREF

  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 112LL))(this);
  v4 = (void **)((char *)this + 208);
  v5 = 0;
  while ( *v4 != a2 )
  {
    ++v5;
    v4 += 7;
    if ( v5 >= 0x13 )
      goto LABEL_4;
  }
  v8 = 56LL * v5;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CBaseInput *)((char *)this + v8 + 168)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 512LL);
  if ( v5 != *(_DWORD *)((char *)this + v8 + 176) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 513LL);
  v9 = *(unsigned int *)((char *)this + v8 + 176);
  if ( (_DWORD)v9 == 19 )
  {
LABEL_4:
    v6 = -1073741823;
    goto LABEL_5;
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v22, "DispatcherObjectSignaled", 0LL);
  InputTraceLogging::Win32k::DispatcherObjectSignaled((unsigned int)v9);
  if ( (_DWORD)v9 != *((_DWORD *)&unk_14025F910 + 6 * v9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2754LL);
  if ( *((_DWORD *)&unk_14025F910 + 6 * v9 + 4) )
  {
    v6 = funcs_140119029[3 * v9](this);
  }
  else
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(v11, v10, v12);
    v14 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            UserSessionState,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v14;
    if ( v14 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v14) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v15, v16);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
    }
    v6 = funcs_140119029[3 * v9](this);
    UserSessionSwitchLeaveCritWithNonPaged(v18, v17, v19, v20);
  }
  if ( v6 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2765LL);
  CRIMBase::SignalMarshalingCompleted(this, (unsigned int)v9);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v22,
    v21);
LABEL_5:
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 120LL))(this);
  return (unsigned int)v6;
}
