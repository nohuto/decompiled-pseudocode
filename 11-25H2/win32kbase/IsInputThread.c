/*
 * XREFs of IsInputThread @ 0x1400BD250
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1400BD110 (NtMITGetCursorUpdateHandle.c)
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1400BD170 (NtMITSetKeyboardInputRoutingPolicy.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1400BD1F0 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1401048D0 (NtMITSynthesizeKeyboardInput.c)
 *     NtMITUpdateInputGlobals @ 0x140123D00 (NtMITUpdateInputGlobals.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     NtMITActivateInputProcessing @ 0x14016E560 (NtMITActivateInputProcessing.c)
 *     NtMITSetInputDelegationMode @ 0x14016E740 (NtMITSetInputDelegationMode.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x14018C0A0 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x14018C0E0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     InvokeMouseCursorPositionCallout @ 0x14018CA50 (InvokeMouseCursorPositionCallout.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x14018F918 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     NtMITAccessibilityTimerNotification @ 0x1401BA3D0 (NtMITAccessibilityTimerNotification.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1401BA4F0 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1401BA740 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1401BA850 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1401BA980 (NtMITEnableMouseIntercept.c)
 *     NtMITPostMouseInputMessage @ 0x1401BAEA0 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1401BB050 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1401BB1F0 (NtMITPostWindowEventMessage.c)
 *     NtMITSetInputCallbacks @ 0x1401BB3A0 (NtMITSetInputCallbacks.c)
 *     NtMITSetInputObservationState @ 0x1401BB4B0 (NtMITSetInputObservationState.c)
 *     NtMITSetKeyboardOverriderState @ 0x1401BB500 (NtMITSetKeyboardOverriderState.c)
 *     NtMITSetLastInputRecipient @ 0x1401BB550 (NtMITSetLastInputRecipient.c)
 *     NtMITSynthesizeMouseInput @ 0x1401BB5D0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401BB800 (NtMITSynthesizeTouchInput.c)
 *     NtRIMSetDeadzoneRotation @ 0x1401D8500 (NtRIMSetDeadzoneRotation.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x14020C688 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x14020EA60 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x14020F40C (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x14020FBD8 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x140214564 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     GetCursorUpdateHandle @ 0x1402160F4 (GetCursorUpdateHandle.c)
 *     PostMouseInputMessage @ 0x140216994 (PostMouseInputMessage.c)
 *     SetKeyboardInputRoutingPolicy @ 0x140216BA0 (SetKeyboardInputRoutingPolicy.c)
 *     SetUMInputObservationState @ 0x140216C68 (SetUMInputObservationState.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x14021CE04 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x14021D858 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x14021F644 (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x140220204 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x140220278 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x140220388 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1402213E0 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x140222078 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsInputThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int CurrentThreadId; // eax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18752);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2 + 8, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = v2 + 8;
  LOBYTE(v2) = CurrentThreadId == *(_DWORD *)(v2 + 40);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
