/*
 * XREFs of ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140082A30
 * Callers:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140082918 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400D8B20 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     ?RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400F5E1C (-RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x14011F03C (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     NtUserGetPointerDevices @ 0x1401965D0 (NtUserGetPointerDevices.c)
 *     NtUserGetRawInputDeviceList @ 0x1401AB770 (NtUserGetRawInputDeviceList.c)
 *     ?RegionCore_subtract@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_RECTL@@1_K@Z @ 0x1401BDCC4 (-RegionCore_subtract@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_RECTL@@1_K@Z.c)
 *     ?RegionCore_bContain_rcl@Win32kRS@@YAHPEBVREGION_CORE@@AEBU_RECTL@@@Z @ 0x1401C9ED0 (-RegionCore_bContain_rcl@Win32kRS@@YAHPEBVREGION_CORE@@AEBU_RECTL@@@Z.c)
 *     InkProcessorIsInkDevice @ 0x1401EED90 (InkProcessorIsInkDevice.c)
 *     ?RegionCore_get_sizeScanAlloc@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14020565C (-RegionCore_get_sizeScanAlloc@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     CheckPointerDeviceConfiguration @ 0x1402154F8 (CheckPointerDeviceConfiguration.c)
 *     _GetTouchValidationStatus @ 0x14027C530 (_GetTouchValidationStatus.c)
 *     ?VolumeUpDownComboSupported@@YA_NXZ @ 0x14028ABD8 (-VolumeUpDownComboSupported@@YA_NXZ.c)
 *     UserGetHipDeviceInfo @ 0x14028DAE0 (UserGetHipDeviceInfo.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z @ 0x140292204 (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z.c)
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x14032079C (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall W32AcquirePushLockSharedEx(struct W32_PUSH_LOCK *a1, unsigned int a2)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, a2);
}
