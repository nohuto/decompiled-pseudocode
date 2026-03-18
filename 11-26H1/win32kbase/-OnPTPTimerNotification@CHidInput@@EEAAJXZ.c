/*
 * XREFs of ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14016B110
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1400D4970 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x14014419C (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ?OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x140170A80 (-OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall CHidInput::OnPTPTimerNotification(CHidInput *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // r8d
  struct DEVICEINFO *v9; // rax
  CHidInput *v10; // rcx
  int v11; // eax
  struct DEVICEINFO *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct CPTPProcessor *Processor; // rax
  PTPEngineTraceProducer *v17; // rcx
  __int64 v18; // rdx
  int v20; // [rsp+30h] [rbp+8h] BYREF
  void **v21; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v21, "OnPTPTimerNotification", 0LL);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v3, v2, v4);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  if ( v6 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  LOBYTE(v7) = 19;
  v9 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*((_QWORD *)this + 167), v7);
  LOBYTE(v11) = CHidInput::IsTouchpadDevice(v10, v9);
  if ( v11 )
  {
    Processor = CPTPProcessorFactory::GetProcessor(v12);
    if ( Processor )
    {
      v17 = (PTPEngineTraceProducer *)*((_QWORD *)Processor + 69);
      v20 = 0;
      PTPEngineTraceProducer::OnEvent(v17, (struct PTPEngineEvent *)&v20);
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged(v13, (__int64)v12, v14, v15);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v21,
    v18);
  return 0LL;
}
