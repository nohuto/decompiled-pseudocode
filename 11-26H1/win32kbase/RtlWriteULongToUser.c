/*
 * XREFs of RtlWriteULongToUser @ 0x1402D2364
 * Callers:
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x14000C3E0 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     NtUserGetPointerInfoList @ 0x140053E60 (NtUserGetPointerInfoList.c)
 *     NtUserGetPointerType @ 0x140087BC0 (NtUserGetPointerType.c)
 *     rimProcessInput @ 0x1400A09DC (rimProcessInput.c)
 *     NtDCompositionCommitChannel @ 0x1400A6DC0 (NtDCompositionCommitChannel.c)
 *     NtDCompositionGetBatchId @ 0x1400EBA50 (NtDCompositionGetBatchId.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1400FA930 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x1400FB0F0 (NtUserQueryDisplayConfig.c)
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 *     RIMGetDevicePropertiesLockfree @ 0x14016D560 (RIMGetDevicePropertiesLockfree.c)
 *     NtUserGetDpiForMonitor @ 0x14017AFC0 (NtUserGetDpiForMonitor.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x140198040 (RIMGetDevicePreparsedDataLockfree.c)
 *     NtUserSystemParametersInfo @ 0x1401AB600 (NtUserSystemParametersInfo.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401AD57C (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     GdiProcessCallout @ 0x1401ADA20 (GdiProcessCallout.c)
 *     NtRIMDeviceIoControl @ 0x1401AE6F0 (NtRIMDeviceIoControl.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1401E3DB0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetInputContainerId @ 0x1401E4380 (NtUserGetInputContainerId.c)
 *     NtUserGetPointerCursorId @ 0x1401E4AF0 (NtUserGetPointerCursorId.c)
 *     NtUserGetWindowThreadProcessId @ 0x1401E4F50 (NtUserGetWindowThreadProcessId.c)
 *     NtRIMAreSiblingDevices @ 0x1401FEFC0 (NtRIMAreSiblingDevices.c)
 *     RtlWriteULongToUser$thunk$10400971452996433967 @ 0x14024E0C0 (RtlWriteULongToUser$thunk$10400971452996433967.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401C9244 (ProbeForRead_0.c)
 */

void __fastcall RtlWriteULongToUser(_DWORD *a1, int a2)
{
  ProbeForRead_0(a1, 4uLL, 1u);
  *a1 = a2;
}
