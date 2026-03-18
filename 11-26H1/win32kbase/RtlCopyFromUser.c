/*
 * XREFs of RtlCopyFromUser @ 0x1401C9358
 * Callers:
 *     NtGdiCreateOPMProtectedOutput @ 0x140009580 (NtGdiCreateOPMProtectedOutput.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x14000E47C (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ?GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x140040790 (-GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     NtDCompositionConfirmFrame @ 0x140042310 (NtDCompositionConfirmFrame.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1400597AC (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 *     NtUpdateInputSinkTransforms @ 0x14006E9A0 (NtUpdateInputSinkTransforms.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1400A2A90 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtCompositionSetDropTarget @ 0x1400A36F0 (NtCompositionSetDropTarget.c)
 *     NtQueryCompositionInputSink @ 0x1400A4290 (NtQueryCompositionInputSink.c)
 *     NtDCompositionGetConnectionBatch @ 0x1400A4A90 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionCommitChannel @ 0x1400A6DC0 (NtDCompositionCommitChannel.c)
 *     NtDCompositionGetStatistics @ 0x1400A8750 (NtDCompositionGetStatistics.c)
 *     NtDCompositionGetTargetStatistics @ 0x1400A9080 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1400A9220 (NtDCompositionWaitForCompositorClock.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x1400B3450 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1400B3B70 (NtDCompositionTelemetrySetApplicationId.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1400C6780 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1400FD2C0 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtMITSynthesizeKeyboardInput @ 0x140143DF0 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserReportInertia @ 0x14015FBC0 (NtUserReportInertia.c)
 *     NtUserDownlevelTouchpad @ 0x140161B60 (NtUserDownlevelTouchpad.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140166D50 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtHWCursorUpdatePointer @ 0x140168170 (NtHWCursorUpdatePointer.c)
 *     NtDCompositionCreateChannel @ 0x140168920 (NtDCompositionCreateChannel.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x14016CE40 (NtUserLoadKeyboardLayoutEx.c)
 *     RIMGetDevicePropertiesLockfree @ 0x14016D560 (RIMGetDevicePropertiesLockfree.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140172218 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x14017C3F0 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     ??$DuplicateUnicodeStringFromUser@$0A@@@YAJV?$UserModePointer@UUSERMODE_UNICODE_STRING@@@@KPEAU_UNICODE_STRING@@@Z @ 0x1401874D4 (--$DuplicateUnicodeStringFromUser@$0A@@@YAJV-$UserModePointer@UUSERMODE_UNICODE_STRING@@@@KPEAU_.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x14018AED0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtUserSetManipulationInputTarget @ 0x140195D40 (NtUserSetManipulationInputTarget.c)
 *     NtUserEnumDisplayMonitors @ 0x140199A90 (NtUserEnumDisplayMonitors.c)
 *     NtUserSystemParametersInfo @ 0x1401AB600 (NtUserSystemParametersInfo.c)
 *     NtDCompositionBeginFrame @ 0x1401B2540 (NtDCompositionBeginFrame.c)
 *     NtConfigureInputSpace @ 0x1401E04B0 (NtConfigureInputSpace.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1401E0B60 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITPostMouseInputMessage @ 0x1401E1210 (NtMITPostMouseInputMessage.c)
 *     NtMITSynthesizeMouseInput @ 0x1401E1680 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401E1820 (NtMITSynthesizeTouchInput.c)
 *     NtSetPointerDeviceInputSpace @ 0x1401E1B80 (NtSetPointerDeviceInputSpace.c)
 *     NtUserClipCursor @ 0x1401E2460 (NtUserClipCursor.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1401E2810 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401E2960 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1401E4270 (NtUserGetExtendedPointerDeviceProperty.c)
 *     NtUserGetInputContainerId @ 0x1401E4380 (NtUserGetInputContainerId.c)
 *     NtUserLockCursor @ 0x1401E7A00 (NtUserLockCursor.c)
 *     NtUserPostKeyboardInputMessage @ 0x1401E7FB0 (NtUserPostKeyboardInputMessage.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1401F9AE0 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 *     NtRIMSetExtendedDeviceProperty @ 0x1401FF620 (NtRIMSetExtendedDeviceProperty.c)
 *     NtDCompositionCreateBufferCollection @ 0x140228B60 (NtDCompositionCreateBufferCollection.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x140229300 (NtDCompositionSendDwmLpcMessage.c)
 *     NtDesktopCaptureBits @ 0x140229920 (NtDesktopCaptureBits.c)
 *     RtlCopyFromUser$thunk$11487580757436585079 @ 0x14024E010 (RtlCopyFromUser$thunk$11487580757436585079.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401C9244 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 */

__int64 (*__fastcall RtlCopyFromUser(void *a1, void *Src, size_t Size))(void)
{
  __int64 (*result)(void); // rax

  result = _uma_functions;
  if ( _uma_functions )
    return (__int64 (*)(void))_uma_functions();
  if ( Size )
  {
    ProbeForRead_0(Src, Size, 1u);
    return (__int64 (*)(void))RtlCopyVolatileMemory(a1, Src, Size);
  }
  return result;
}
