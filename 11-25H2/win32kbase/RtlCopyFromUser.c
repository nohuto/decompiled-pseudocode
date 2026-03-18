/*
 * XREFs of RtlCopyFromUser @ 0x1401A4E78
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     NtDCompositionCommitChannel @ 0x1400AF3A0 (NtDCompositionCommitChannel.c)
 *     NtDCompositionConfirmFrame @ 0x1400B6700 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1400BF130 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1400C0490 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetConnectionBatch @ 0x1400C71A0 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1400C8930 (NtDCompositionWaitForCompositorClock.c)
 *     NtDCompositionGetStatistics @ 0x1400D0800 (NtDCompositionGetStatistics.c)
 *     NtDCompositionGetTargetStatistics @ 0x1400EFD80 (NtDCompositionGetTargetStatistics.c)
 *     NtUpdateInputSinkTransforms @ 0x1400F1110 (NtUpdateInputSinkTransforms.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1401048D0 (NtMITSynthesizeKeyboardInput.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x14011DC40 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x14011F340 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionCreateChannel @ 0x140121B00 (NtDCompositionCreateChannel.c)
 *     NtUserDownlevelTouchpad @ 0x1401220D0 (NtUserDownlevelTouchpad.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140128F30 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtCompositionSetDropTarget @ 0x14012EAD0 (NtCompositionSetDropTarget.c)
 *     NtUserCreateActivationObject @ 0x14012ED30 (NtUserCreateActivationObject.c)
 *     NtUserConfigureActivationObject @ 0x14013ABD0 (NtUserConfigureActivationObject.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x14014ADE0 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     NtUserDestroyActivationObject @ 0x14014B970 (NtUserDestroyActivationObject.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x14014D580 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtUserReportInertia @ 0x140173210 (NtUserReportInertia.c)
 *     NtUserSetManipulationInputTarget @ 0x140174C80 (NtUserSetManipulationInputTarget.c)
 *     NtUserSystemParametersInfo @ 0x140175320 (NtUserSystemParametersInfo.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017DD8C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     NtDCompositionBeginFrame @ 0x1401978D0 (NtDCompositionBeginFrame.c)
 *     NtConfigureInputSpace @ 0x1401B9DA0 (NtConfigureInputSpace.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1401BA4F0 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITPostMouseInputMessage @ 0x1401BAEA0 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1401BB050 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1401BB1F0 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeMouseInput @ 0x1401BB5D0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401BB800 (NtMITSynthesizeTouchInput.c)
 *     NtSetPointerDeviceInputSpace @ 0x1401BBD50 (NtSetPointerDeviceInputSpace.c)
 *     NtUserAddVisualIdentifier @ 0x1401BBF70 (NtUserAddVisualIdentifier.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401BC380 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1401BD4C0 (NtUserGetExtendedPointerDeviceProperty.c)
 *     NtUserGetInputContainerId @ 0x1401BD5F0 (NtUserGetInputContainerId.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1401BEF40 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1401BF260 (NtUserMapPointsByVisualIdentifier.c)
 *     NtUserPostKeyboardInputMessage @ 0x1401BF660 (NtUserPostKeyboardInputMessage.c)
 *     NtUserRemoveVisualIdentifier @ 0x1401BF8C0 (NtUserRemoveVisualIdentifier.c)
 *     NtUserSetDesktopVisualInputSink @ 0x1401BF950 (NtUserSetDesktopVisualInputSink.c)
 *     NtUserSetForegroundRedirectionForActivationObject @ 0x1401BFEA0 (NtUserSetForegroundRedirectionForActivationObject.c)
 *     NtDCompositionCreateBufferCollection @ 0x140226920 (NtDCompositionCreateBufferCollection.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x140226D40 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x140227130 (NtDCompositionSendDwmLpcMessage.c)
 *     NtDesktopCaptureBits @ 0x140227620 (NtDesktopCaptureBits.c)
 *     RtlCopyFromUser$thunk$11487580757436585079 @ 0x140246010 (RtlCopyFromUser$thunk$11487580757436585079.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401A4EE6 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
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
