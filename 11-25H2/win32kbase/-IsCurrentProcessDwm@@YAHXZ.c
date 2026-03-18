/*
 * XREFs of ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0
 * Callers:
 *     UserSessionSwitchEnterCrit @ 0x14006A6A0 (UserSessionSwitchEnterCrit.c)
 *     RIMIsCurrentProcessTrusted @ 0x1400CD380 (RIMIsCurrentProcessTrusted.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140128F30 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtUserConfigureActivationObject @ 0x14013ABD0 (NtUserConfigureActivationObject.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x14014D6D0 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     InitClientInfo @ 0x140162A98 (InitClientInfo.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     NtUserCheckProcessSession @ 0x14016ECA0 (NtUserCheckProcessSession.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016F3A0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserRegisterManipulationThread @ 0x140173100 (NtUserRegisterManipulationThread.c)
 *     NtUserReportInertia @ 0x140173210 (NtUserReportInertia.c)
 *     NtUserSetManipulationInputTarget @ 0x140174C80 (NtUserSetManipulationInputTarget.c)
 *     NtKSTInitialize @ 0x1401BA280 (NtKSTInitialize.c)
 *     NtMITSetInputCallbacks @ 0x1401BB3A0 (NtMITSetInputCallbacks.c)
 *     NtSetCursorInputSpace @ 0x1401BBB70 (NtSetCursorInputSpace.c)
 *     NtUserPostKeyboardInputMessage @ 0x1401BF660 (NtUserPostKeyboardInputMessage.c)
 *     NtUserStopAndEndInertia @ 0x1401C1050 (NtUserStopAndEndInertia.c)
 *     NtUserUnregisterSessionPort @ 0x1401C12B0 (NtUserUnregisterSessionPort.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x14020C688 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x140218DE4 (-ShouldKSTInitializeHidSensor@@YA_NXZ.c)
 * Callees:
 *     UserUnsafeIsProcessDwm @ 0x1400CD430 (UserUnsafeIsProcessDwm.c)
 */

__int64 IsCurrentProcessDwm(void)
{
  __int64 CurrentProcess; // rax

  CurrentProcess = PsGetCurrentProcess();
  return UserUnsafeIsProcessDwm(CurrentProcess);
}
