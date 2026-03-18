/*
 * XREFs of SendMessageTo @ 0x14008B570
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x140089CEC (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x14008A620 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     SendAppClipChanged @ 0x14008AB70 (SendAppClipChanged.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x14008AE3C (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x14008AF40 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     SendVisibilityChanged @ 0x14008CB60 (SendVisibilityChanged.c)
 *     SynchronizeContext @ 0x14008CFE0 (SynchronizeContext.c)
 *     ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x14008D09C (-SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x14008D0F8 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 *     SendCrosshairPropertiesChanged @ 0x14008D180 (SendCrosshairPropertiesChanged.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x14008D1D8 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14009BAE8 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAI@Z @ 0x14010DBCC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x140188A00 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     SendCrosshairEnabledStatusChanged @ 0x14018E950 (SendCrosshairEnabledStatusChanged.c)
 *     SendPositionChanged @ 0x14018E990 (SendPositionChanged.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KI@Z @ 0x1401992A8 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KI@Z.c)
 *     SendOrientationChanged @ 0x140199390 (SendOrientationChanged.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1401A4EC0 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1401AFB50 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     SendShellClipChanged @ 0x1401BA170 (SendShellClipChanged.c)
 *     ?InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@Z @ 0x140218CF0 (-InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@.c)
 *     ?SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x140218F28 (-SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x140219088 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     _lambda_c92a1355a24c64b2e5b1950f66ad99d0_::_lambda_invoker_cdecl_ @ 0x14021AF30 (_lambda_c92a1355a24c64b2e5b1950f66ad99d0_--_lambda_invoker_cdecl_.c)
 *     InputHapticsTrigger @ 0x14021BBB0 (InputHapticsTrigger.c)
 *     SendShape @ 0x14021C060 (SendShape.c)
 *     SendSuppressionStateChanged @ 0x14021C090 (SendSuppressionStateChanged.c)
 *     UpdateDelegationTargetForMouseInput @ 0x14021C4C0 (UpdateDelegationTargetForMouseInput.c)
 *     ??1VPTPContact@@QEAA@XZ @ 0x1402205E4 (--1VPTPContact@@QEAA@XZ.c)
 *     ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x140220C4C (-FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPoi.c)
 * Callees:
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14008B63C (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     ?SendCoreMessagingK@Win32k@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z @ 0x14008B720 (-SendCoreMessagingK@Win32k@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z.c)
 *     CoreMsgSend @ 0x14008B78C (CoreMsgSend.c)
 */

__int64 __fastcall SendMessageTo(int a1, int a2, int a3)
{
  __int64 v3; // rsi
  void *v4; // rdi
  __int64 v5; // rbp

  v3 = a1;
  v4 = 0LL;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 16400);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5 + 8, 0LL);
  if ( (unsigned __int8)InputExtensibilityCallout::_CanSendMessageToDestinationInternal(v5, (unsigned int)v3) )
  {
    InputTraceLogging::Win32k::SendCoreMessagingK((unsigned int)v3);
    v4 = *(void **)(v5 + 40 * v3 + 24);
  }
  ExReleasePushLockSharedEx(v5 + 8, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
    return CoreMsgSend(v4);
  else
    return 2147946717LL;
}
