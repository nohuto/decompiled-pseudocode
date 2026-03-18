/*
 * XREFs of ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60
 * Callers:
 *     UserSessionSwitchEnterCrit @ 0x14000A1D0 (UserSessionSwitchEnterCrit.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     RIMIsCurrentProcessTrusted @ 0x1400D7D30 (RIMIsCurrentProcessTrusted.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1400D7F54 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     NtUserReportInertia @ 0x14015FBC0 (NtUserReportInertia.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140166D50 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtKSTInitialize @ 0x14018CFE0 (NtKSTInitialize.c)
 *     NtMITSetInputCallbacks @ 0x14018D750 (NtMITSetInputCallbacks.c)
 *     NtUserSetManipulationInputTarget @ 0x140195D40 (NtUserSetManipulationInputTarget.c)
 *     InitClientInfo @ 0x1401A686C (InitClientInfo.c)
 *     NtSetCursorInputSpace @ 0x1401E1A70 (NtSetCursorInputSpace.c)
 *     NtUserCheckProcessSession @ 0x1401E2390 (NtUserCheckProcessSession.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserPostKeyboardInputMessage @ 0x1401E7FB0 (NtUserPostKeyboardInputMessage.c)
 *     NtUserRegisterManipulationThread @ 0x1401E8180 (NtUserRegisterManipulationThread.c)
 *     NtUserStopAndEndInertia @ 0x1401E9D80 (NtUserStopAndEndInertia.c)
 *     NtUserUnregisterSessionPort @ 0x1401E9F00 (NtUserUnregisterSessionPort.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140216FE8 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x14021DCB4 (-ShouldKSTInitializeHidSensor@@YA_NXZ.c)
 * Callees:
 *     UserUnsafeIsProcessDwm @ 0x1400D7D90 (UserUnsafeIsProcessDwm.c)
 */

__int64 __fastcall IsCurrentProcessDwm(__int64 a1)
{
  __int64 CurrentProcess; // rax

  CurrentProcess = PsGetCurrentProcess(a1);
  return UserUnsafeIsProcessDwm(CurrentProcess);
}
