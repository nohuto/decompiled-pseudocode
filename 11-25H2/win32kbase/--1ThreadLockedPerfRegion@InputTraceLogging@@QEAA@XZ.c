/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014
 * Callers:
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x140039208 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005ECCC (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     UserKSTWait @ 0x1400BD37C (UserKSTWait.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6CD8 (rimDoProcessAnyPointerDeviceInput.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1400EB380 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     HandleMITWakeSignal @ 0x1400F06E8 (HandleMITWakeSignal.c)
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140109EE0 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 *     NtUserInjectGenericHidInput @ 0x14011EB50 (NtUserInjectGenericHidInput.c)
 *     NtUserDownlevelTouchpad @ 0x1401220D0 (NtUserDownlevelTouchpad.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14012CEA0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     NtUserInjectDeviceInput @ 0x14013AF50 (NtUserInjectDeviceInput.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x14014AFE0 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     NtUserInjectKeyboardInput @ 0x140171970 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x140172360 (NtUserInjectMouseInput.c)
 *     rimInputApc @ 0x140182D20 (rimInputApc.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188830 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x14018A660 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x14018C660 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 *     InvokeMouseCursorPositionCallout @ 0x14018CA50 (InvokeMouseCursorPositionCallout.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1401908B0 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ApiSetClientCallDitThread @ 0x140194A64 (ApiSetClientCallDitThread.c)
 *     NtMITSynthesizeMouseInput @ 0x1401BB5D0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401BB800 (NtMITSynthesizeTouchInput.c)
 *     NtUserInjectPointerInput @ 0x1401BE260 (NtUserInjectPointerInput.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x140208A20 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x140210230 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x140212920 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ @ 0x140212980 (-OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1402129C0 (-OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x140212A10 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x140212B70 (-OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1402224C8 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x140222878 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14003B058 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        InputTraceLogging::ThreadLockedPerfRegion *this)
{
  __int64 v1; // rdi

  if ( *(_QWORD *)this )
  {
    v1 = *(_QWORD *)this;
    *((_QWORD *)PtiCurrent() + 48) = *(_QWORD *)(v1 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(this);
  }
}
