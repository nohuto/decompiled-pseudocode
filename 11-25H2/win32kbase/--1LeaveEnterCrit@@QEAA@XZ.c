/*
 * XREFs of ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58
 * Callers:
 *     UserSessionSwitchEnterCrit @ 0x14006A6A0 (UserSessionSwitchEnterCrit.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x14007FE94 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     xxxCreateSystemThreads @ 0x140081E00 (xxxCreateSystemThreads.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140082510 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x140082720 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x140083B88 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1400AEF0C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D23B8 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     PowerOffMonitor @ 0x1400E1480 (PowerOffMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ProcessKeyboardInputWorker @ 0x1400FAA64 (ProcessKeyboardInputWorker.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     xxxSendWinlogonPowerMessage @ 0x14016C260 (xxxSendWinlogonPowerMessage.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017DD8C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401AED90 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B0834 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     PowerResumeSuspendEvent @ 0x1401B0E50 (PowerResumeSuspendEvent.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401D8A10 (RIMAddInjectionDeviceOfType.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1401F9570 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F96E0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9820 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x14020FE00 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x140213D10 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140214114 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 *     ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x14021A0D4 (-SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A620 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     IVWorkerThread @ 0x14021B528 (IVWorkerThread.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x140220388 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

void __fastcall LeaveEnterCrit::~LeaveEnterCrit(LeaveEnterCrit *this, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8

  UserSessionState = W32GetUserSessionState(this, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
  v5 = v4;
  *(_QWORD *)(UserSessionState + 24) = v4;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v5 )
      goto LABEL_10;
  }
  else
  {
    if ( !v5 )
      goto LABEL_10;
    *(_BYTE *)(v5 + 1708) = 1;
  }
  if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v5) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 19688);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19744);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19728);
  }
LABEL_10:
  if ( *(_BYTE *)this )
  {
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      KeEnterCriticalRegion();
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
      v9 = W32GetUserSessionState(v8, v7);
      LOBYTE(v10) = 1;
      ExAcquireFastResourceExclusive(*(_QWORD *)(v9 + 16), CurrentThreadWin32Thread + 176, v10);
    }
  }
}
