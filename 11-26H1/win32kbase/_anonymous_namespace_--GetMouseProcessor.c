/*
 * XREFs of _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14008FA40 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     SynthesizePTPMouseInput @ 0x1400D0144 (SynthesizePTPMouseInput.c)
 *     HandleInputDestDestruction @ 0x1400D0AC8 (HandleInputDestDestruction.c)
 *     GenerateMouseMove @ 0x1400D0B90 (GenerateMouseMove.c)
 *     xxxProcessMouseEvent @ 0x1400D0BC0 (xxxProcessMouseEvent.c)
 *     IsMouseInterceptEnabled @ 0x14012AE90 (IsMouseInterceptEnabled.c)
 *     NtUserGetPointerDeviceOrientation @ 0x140156800 (NtUserGetPointerDeviceOrientation.c)
 *     SynthesizeMouseInput @ 0x14015DEE0 (SynthesizeMouseInput.c)
 *     UpdateGlobalCursorOwner @ 0x140161940 (UpdateGlobalCursorOwner.c)
 *     InitiateWaitForInjectionCompletion @ 0x140162EB0 (InitiateWaitForInjectionCompletion.c)
 *     NotifySetPointerGraphicDevice @ 0x140166C20 (NotifySetPointerGraphicDevice.c)
 *     CheckIntegrityAccessToCapture @ 0x14016C000 (CheckIntegrityAccessToCapture.c)
 *     ForceResetMouseButtonsDownState @ 0x140178B70 (ForceResetMouseButtonsDownState.c)
 *     HasCapture @ 0x14017CAF0 (HasCapture.c)
 *     IsCapturedBySystem @ 0x140199570 (IsCapturedBySystem.c)
 *     CancelCapturedMipOverride @ 0x14019A300 (CancelCapturedMipOverride.c)
 *     ClearLogicalCursorPos @ 0x1401C4B10 (ClearLogicalCursorPos.c)
 *     NtMITDisableMouseIntercept @ 0x1401E0DB0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1401E0E70 (NtMITEnableMouseIntercept.c)
 *     NtMITSynthesizeMouseInput @ 0x1401E1680 (NtMITSynthesizeMouseInput.c)
 *     NtSetShellCursorState @ 0x1401E1D00 (NtSetShellCursorState.c)
 *     ExecuteMarshaledInterceptRequest @ 0x14021B470 (ExecuteMarshaledInterceptRequest.c)
 *     ForceCapture @ 0x14021B530 (ForceCapture.c)
 *     IsCapturedByThread @ 0x14021BCB0 (IsCapturedByThread.c)
 *     IsMouseButtonDown @ 0x14021BD60 (IsMouseButtonDown.c)
 *     MouseButtonAction @ 0x14021BD90 (MouseButtonAction.c)
 *     MouseMove @ 0x14021BDD0 (MouseMove.c)
 *     MoveSizeReadAndClearMouseMoveBoundHitFlags @ 0x14021BE10 (MoveSizeReadAndClearMouseMoveBoundHitFlags.c)
 *     PostMouseInputMessage @ 0x14021BEB4 (PostMouseInputMessage.c)
 *     ReleaseMouseButton @ 0x14021C000 (ReleaseMouseButton.c)
 *     SetMouseMoveBoundHitFlagsForMoveSize @ 0x14021C2A0 (SetMouseMoveBoundHitFlagsForMoveSize.c)
 *     SetUMInputObservationState @ 0x14021C354 (SetUMInputObservationState.c)
 *     UpdateSavedPoint @ 0x14021C560 (UpdateSavedPoint.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021EDE0 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall anonymous_namespace_::GetMouseProcessor(int a1, int a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 3136);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  else
    return 0LL;
}
