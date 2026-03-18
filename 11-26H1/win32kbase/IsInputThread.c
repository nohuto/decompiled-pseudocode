/*
 * XREFs of IsInputThread @ 0x140067910
 * Callers:
 *     InvokeMouseCursorPositionCallout @ 0x140064640 (InvokeMouseCursorPositionCallout.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x140065A50 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x14013365C (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x14013DF50 (NtMITSetKeyboardInputRoutingPolicy.c)
 *     SetKeyboardInputRoutingPolicy @ 0x14013E69C (SetKeyboardInputRoutingPolicy.c)
 *     NtMITSynthesizeKeyboardInput @ 0x140143DF0 (NtMITSynthesizeKeyboardInput.c)
 *     NtMITUpdateInputGlobals @ 0x140163340 (NtMITUpdateInputGlobals.c)
 *     UserDeactivateMITInputProcessing @ 0x140179858 (UserDeactivateMITInputProcessing.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x140179B50 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x140188F50 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 *     ?HandleMITTermination@CMouseProcessor@@AEAAXXZ @ 0x140188F9C (-HandleMITTermination@CMouseProcessor@@AEAAXXZ.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x140188FF4 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     NtMITSetInputCallbacks @ 0x14018D750 (NtMITSetInputCallbacks.c)
 *     NtMITGetCursorUpdateHandle @ 0x14019C080 (NtMITGetCursorUpdateHandle.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1401B80C4 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     NtMITSetInputDelegationMode @ 0x1401B9F60 (NtMITSetInputDelegationMode.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1401BD5D8 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     NtMITAccessibilityTimerNotification @ 0x1401E0920 (NtMITAccessibilityTimerNotification.c)
 *     NtMITActivateInputProcessing @ 0x1401E09C0 (NtMITActivateInputProcessing.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1401E0B60 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1401E0D10 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1401E0DB0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1401E0E70 (NtMITEnableMouseIntercept.c)
 *     NtMITPostMouseInputMessage @ 0x1401E1210 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1401E1340 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1401E1450 (NtMITPostWindowEventMessage.c)
 *     NtMITSetInputObservationState @ 0x1401E1570 (NtMITSetInputObservationState.c)
 *     NtMITSetKeyboardOverriderState @ 0x1401E15C0 (NtMITSetKeyboardOverriderState.c)
 *     NtMITSetLastInputRecipient @ 0x1401E1610 (NtMITSetLastInputRecipient.c)
 *     NtMITSynthesizeMouseInput @ 0x1401E1680 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401E1820 (NtMITSynthesizeTouchInput.c)
 *     NtRIMSetDeadzoneRotation @ 0x1401FF5B0 (NtRIMSetDeadzoneRotation.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140216FE8 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x140219890 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1402198D0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x14021A1BC (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     GetCursorUpdateHandle @ 0x14021B574 (GetCursorUpdateHandle.c)
 *     PostMouseInputMessage @ 0x14021BEB4 (PostMouseInputMessage.c)
 *     SetUMInputObservationState @ 0x14021C354 (SetUMInputObservationState.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1402207D0 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x140222DF4 (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x140223508 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1402235C0 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x140224964 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsInputThread(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  unsigned int CurrentThreadId; // eax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18800);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3 + 8, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v5 = v3 + 8;
  LOBYTE(v3) = CurrentThreadId == *(_DWORD *)(v3 + 40);
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
