/*
 * XREFs of ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14012CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x140105A80 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1401060A4 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ?OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x140136610 (-OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall CHidInput::OnPTPTimerNotification(CHidInput *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  struct DEVICEINFO *v7; // rax
  CHidInput *v8; // rcx
  int v9; // eax
  struct DEVICEINFO *v10; // rdx
  struct CPTPProcessor *Processor; // rax
  int v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v14, "OnPTPTimerNotification", 0LL);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v3, v2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
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
  if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_10:
  v7 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*((_QWORD *)this + 168), 19);
  LOBYTE(v9) = CHidInput::IsTouchpadDevice(v8, v7);
  if ( v9 )
  {
    Processor = CPTPProcessorFactory::GetProcessor(v10);
    if ( Processor )
    {
      v13 = 0;
      PTPEngineTraceProducer::OnEvent(*((PTPEngineTraceProducer **)Processor + 69), (struct PTPEngineEvent *)&v13);
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, (__int64)v10);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v14);
  return 0LL;
}
