/*
 * XREFs of RIMIsPenPointerDevice @ 0x14007611C
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1400752B0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x140077BEC (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x14007AAC0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimIssueReads @ 0x140098194 (rimIssueReads.c)
 *     rimProcessInput @ 0x1400A09DC (rimProcessInput.c)
 *     rimExtractPointerDeviceUsages @ 0x1400F65C8 (rimExtractPointerDeviceUsages.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1400F71B8 (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractPenInfo @ 0x1400F8FD0 (rimExtractPenInfo.c)
 *     rimSetContactKeepAliveState @ 0x1400FA6D4 (rimSetContactKeepAliveState.c)
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     rimPenButtonsPolicyUpdateState @ 0x140137648 (rimPenButtonsPolicyUpdateState.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x14015EB68 (RimDeviceTypeToRimInputTypeString.c)
 *     rimPenButtonsPolicyApply @ 0x140171B78 (rimPenButtonsPolicyApply.c)
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 *     rimFinalizePointerFlags @ 0x1401AF8AC (rimFinalizePointerFlags.c)
 *     rimInputTypeFromRimDev @ 0x1401FE69C (rimInputTypeFromRimDev.c)
 *     RIMGetDeviceButtons @ 0x140204BF4 (RIMGetDeviceButtons.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x14020CBC4 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x140221414 (-SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsPenPointerDevice(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 == 6 || v1 == 5 )
    return 1LL;
  return result;
}
