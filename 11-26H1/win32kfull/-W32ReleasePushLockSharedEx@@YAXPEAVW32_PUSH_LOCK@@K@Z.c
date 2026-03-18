/*
 * XREFs of ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071870
 * Callers:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400717B0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GrepReleasePushLockCommon@$0A@$0A@P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x140071E5C (--$GrepReleasePushLockCommon@$0A@$0A@P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1401715D0 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     ?SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ @ 0x1401BCE40 (-SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z @ 0x1401D12CC (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z.c)
 *     NtUserGetRawInputDeviceList @ 0x1401DE4B0 (NtUserGetRawInputDeviceList.c)
 *     InkProcessorIsInkDevice @ 0x14021DF80 (InkProcessorIsInkDevice.c)
 *     CheckPointerDeviceConfiguration @ 0x140249038 (CheckPointerDeviceConfiguration.c)
 *     NtUserGetPointerDevices @ 0x14025C900 (NtUserGetPointerDevices.c)
 *     _GetTouchValidationStatus @ 0x14025F7C0 (_GetTouchValidationStatus.c)
 *     ?VolumeUpDownComboSupported@@YA_NXZ @ 0x1402A7A68 (-VolumeUpDownComboSupported@@YA_NXZ.c)
 *     UserGetHipDeviceInfo @ 0x1402A91D0 (UserGetHipDeviceInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall W32ReleasePushLockSharedEx(struct W32_PUSH_LOCK *a1, __int64 a2)
{
  ExReleasePushLockSharedEx(a1, a2);
  KeLeaveCriticalRegion();
}
