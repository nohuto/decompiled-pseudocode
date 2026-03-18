/*
 * XREFs of RtlCopyToUser @ 0x1402D2054
 * Callers:
 *     NtGdiCreateOPMProtectedOutput @ 0x140009580 (NtGdiCreateOPMProtectedOutput.c)
 *     ?GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x14003DBE0 (-GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     DrvEnumDisplayDevices @ 0x140046490 (DrvEnumDisplayDevices.c)
 *     NtUserGetPointerInfoList @ 0x140053E60 (NtUserGetPointerInfoList.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1400597AC (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 *     RIMDeviceIoControl @ 0x14005E7A0 (RIMDeviceIoControl.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x14006F0B0 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtUserGetClipCursor @ 0x140082750 (NtUserGetClipCursor.c)
 *     rimProcessInput @ 0x1400A09DC (rimProcessInput.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1400A2A90 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameStatistics @ 0x1400A2D90 (NtDCompositionGetFrameStatistics.c)
 *     NtCompositionSetDropTarget @ 0x1400A36F0 (NtCompositionSetDropTarget.c)
 *     NtQueryCompositionInputSinkViewId @ 0x1400A3840 (NtQueryCompositionInputSinkViewId.c)
 *     NtQueryCompositionInputIsImplicit @ 0x1400A4180 (NtQueryCompositionInputIsImplicit.c)
 *     NtQueryCompositionInputSink @ 0x1400A4290 (NtQueryCompositionInputSink.c)
 *     NtDCompositionSynchronize @ 0x1400A65B0 (NtDCompositionSynchronize.c)
 *     NtDCompositionGetStatistics @ 0x1400A8750 (NtDCompositionGetStatistics.c)
 *     NtDCompositionGetTargetStatistics @ 0x1400A9080 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1400AA4A0 (NtDCompositionProcessChannelBatchBuffer.c)
 *     NtDCompositionGetFrameIdFromBatchId @ 0x1400B3A50 (NtDCompositionGetFrameIdFromBatchId.c)
 *     NtDCompositionGetDeletedResources @ 0x1400B4200 (NtDCompositionGetDeletedResources.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1400C6780 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1400FAA90 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1400FD2C0 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtQueryCompositionInputSinkLuid @ 0x140126FA0 (NtQueryCompositionInputSinkLuid.c)
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 *     NtDCompositionGetFrameId @ 0x14014B660 (NtDCompositionGetFrameId.c)
 *     NtUserGetPointerDeviceOrientation @ 0x140156800 (NtUserGetPointerDeviceOrientation.c)
 *     NtUserGetPointerProprietaryId @ 0x1401616B0 (NtUserGetPointerProprietaryId.c)
 *     NtUserGetInputLocaleInfo @ 0x140164250 (NtUserGetInputLocaleInfo.c)
 *     NtDCompositionCreateChannel @ 0x140168920 (NtDCompositionCreateChannel.c)
 *     RIMGetDevicePropertiesLockfree @ 0x14016D560 (RIMGetDevicePropertiesLockfree.c)
 *     RIMGetSourceProcessId @ 0x14016F0B0 (RIMGetSourceProcessId.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140172218 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x140198040 (RIMGetDevicePreparsedDataLockfree.c)
 *     NtRIMDeviceIoControl @ 0x1401AE6F0 (NtRIMDeviceIoControl.c)
 *     NtDCompositionBeginFrame @ 0x1401B2540 (NtDCompositionBeginFrame.c)
 *     ??$Write@UtagRECT@@@?$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z @ 0x1401C5C90 (--$Write@UtagRECT@@@-$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z.c)
 *     NtInputSpaceRegionFromPoint @ 0x1401E07D0 (NtInputSpaceRegionFromPoint.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1401E0B60 (NtMITConfigureVirtualTouchpad.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1401E4270 (NtUserGetExtendedPointerDeviceProperty.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1401F9AE0 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 *     RIMFillDeviceHealthInfo @ 0x140201360 (RIMFillDeviceHealthInfo.c)
 *     RIMGetPhysicalDeviceRect @ 0x140201B70 (RIMGetPhysicalDeviceRect.c)
 *     rimObsCopyMessage @ 0x14020F238 (rimObsCopyMessage.c)
 *     NtDCompositionCreateConnection @ 0x140228DB0 (NtDCompositionCreateConnection.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x140229300 (NtDCompositionSendDwmLpcMessage.c)
 *     RtlCopyToUser$thunk$8481748130428616498 @ 0x14024E020 (RtlCopyToUser$thunk$8481748130428616498.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401C9244 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 */

void *__fastcall RtlCopyToUser(void *a1, void *Src, size_t Size)
{
  void *result; // rax

  result = 0LL;
  if ( Size )
  {
    ProbeForRead_0(a1, Size, 1u);
    return RtlCopyVolatileMemory(a1, Src, Size);
  }
  return result;
}
