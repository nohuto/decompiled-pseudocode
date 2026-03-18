/*
 * XREFs of RIMIsTouchPointerDevice @ 0x1400F7194
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1400752B0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140075964 (rimAbSuppressLowerRankActivityInFrame.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x140077BEC (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x14009050C (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     rimIssueReads @ 0x140098194 (rimIssueReads.c)
 *     rimCompleteReads @ 0x1400987C0 (rimCompleteReads.c)
 *     RIMIsInputSuppressed @ 0x140098E80 (RIMIsInputSuppressed.c)
 *     rimProcessInput @ 0x1400A09DC (rimProcessInput.c)
 *     RIMAllocateHidConfigDesc @ 0x1400EFCEC (RIMAllocateHidConfigDesc.c)
 *     rimExtractPointerDeviceUsages @ 0x1400F65C8 (rimExtractPointerDeviceUsages.c)
 *     RIMApplyTransforms @ 0x1400F6F1C (RIMApplyTransforms.c)
 *     rimExtractTouchInfo @ 0x1400F74A4 (rimExtractTouchInfo.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1400F8450 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1400F92B0 (RIMAddSimulatedPointerDeviceData.c)
 *     rimSetContactKeepAliveState @ 0x1400FA6D4 (rimSetContactKeepAliveState.c)
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x14015EB68 (RimDeviceTypeToRimInputTypeString.c)
 *     RIMFindInputDeviceForConfig @ 0x14017EAAC (RIMFindInputDeviceForConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1401E89E0 (NtUserSetFeatureReportResponse.c)
 *     rimInputTypeFromRimDev @ 0x1401FE69C (rimInputTypeFromRimDev.c)
 *     RIMFindTouchDigitizerWithSize @ 0x140205AA0 (RIMFindTouchDigitizerWithSize.c)
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x14020CBC4 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x140221414 (-SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsTouchPointerDevice(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx

  v1 = *(_DWORD *)(a1 + 24);
  v2 = 0;
  if ( v1 == 1 || (unsigned int)(v1 - 2) <= 2 )
    return 1;
  return v2;
}
