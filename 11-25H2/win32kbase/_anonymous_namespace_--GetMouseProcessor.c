/*
 * XREFs of _anonymous_namespace_::GetMouseProcessor @ 0x140039910
 * Callers:
 *     HandleInputDestDestruction @ 0x140039868 (HandleInputDestDestruction.c)
 *     GenerateMouseMove @ 0x1400398E0 (GenerateMouseMove.c)
 *     UpdateGlobalCursorOwner @ 0x14003B0F0 (UpdateGlobalCursorOwner.c)
 *     InitiateWaitForInjectionCompletion @ 0x14003B530 (InitiateWaitForInjectionCompletion.c)
 *     NotifySetPointerGraphicDevice @ 0x14003B7C0 (NotifySetPointerGraphicDevice.c)
 *     NtUserGetPointerDeviceOrientation @ 0x14003B7F0 (NtUserGetPointerDeviceOrientation.c)
 *     HasCapture @ 0x14003B910 (HasCapture.c)
 *     IsMouseInterceptEnabled @ 0x1400DEA50 (IsMouseInterceptEnabled.c)
 *     ForceResetMouseButtonsDownState @ 0x140145180 (ForceResetMouseButtonsDownState.c)
 *     CheckIntegrityAccessToCapture @ 0x140145620 (CheckIntegrityAccessToCapture.c)
 *     NtSetShellCursorState @ 0x140152480 (NtSetShellCursorState.c)
 *     IsCapturedBySystem @ 0x14015A4C0 (IsCapturedBySystem.c)
 *     CancelCapturedMipOverride @ 0x14015A9A0 (CancelCapturedMipOverride.c)
 *     SynthesizePTPMouseInput @ 0x14018CD00 (SynthesizePTPMouseInput.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B77F0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     NtMITDisableMouseIntercept @ 0x1401BA850 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1401BA980 (NtMITEnableMouseIntercept.c)
 *     NtMITSynthesizeMouseInput @ 0x1401BB5D0 (NtMITSynthesizeMouseInput.c)
 *     ClearLogicalCursorPos @ 0x140215FA0 (ClearLogicalCursorPos.c)
 *     ExecuteMarshaledInterceptRequest @ 0x140215FE0 (ExecuteMarshaledInterceptRequest.c)
 *     ForceCapture @ 0x1402160B0 (ForceCapture.c)
 *     IsCapturedByThread @ 0x140216780 (IsCapturedByThread.c)
 *     IsMouseButtonDown @ 0x140216820 (IsMouseButtonDown.c)
 *     MouseButtonAction @ 0x1402168A0 (MouseButtonAction.c)
 *     MouseMove @ 0x1402168E0 (MouseMove.c)
 *     PostMouseInputMessage @ 0x140216994 (PostMouseInputMessage.c)
 *     ReleaseMouseButton @ 0x140216AE0 (ReleaseMouseButton.c)
 *     SetUMInputObservationState @ 0x140216C68 (SetUMInputObservationState.c)
 *     SynthesizeMouseInput @ 0x140216D10 (SynthesizeMouseInput.c)
 *     UpdateSavedPoint @ 0x140217040 (UpdateSavedPoint.c)
 *     xxxProcessMouseEvent @ 0x1402170E0 (xxxProcessMouseEvent.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A480 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall anonymous_namespace_::GetMouseProcessor(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3136);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  else
    return 0LL;
}
