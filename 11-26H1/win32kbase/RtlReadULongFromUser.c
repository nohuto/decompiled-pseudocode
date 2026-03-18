/*
 * XREFs of RtlReadULongFromUser @ 0x1402D21A0
 * Callers:
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x14000E47C (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     DrvEnumDisplayDevices @ 0x140046490 (DrvEnumDisplayDevices.c)
 *     NtUserGetPointerInfoList @ 0x140053E60 (NtUserGetPointerInfoList.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 *     EtwTraceInputProcessDelay @ 0x1400DB7E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1400DCB00 (EtwTraceMessageCheckDelay.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1400FAA90 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1400FB0F0 (NtUserQueryDisplayConfig.c)
 *     ?GetSpriteFillColorOverrideForCurrentProcess@@YAKXZ @ 0x14012D450 (-GetSpriteFillColorOverrideForCurrentProcess@@YAKXZ.c)
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 *     NtUserGetInputLocaleInfo @ 0x140164250 (NtUserGetInputLocaleInfo.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x14016CE40 (NtUserLoadKeyboardLayoutEx.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x14016F40C (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ??$DuplicateUnicodeStringFromUser@$0A@@@YAJV?$UserModePointer@UUSERMODE_UNICODE_STRING@@@@KPEAU_UNICODE_STRING@@@Z @ 0x1401874D4 (--$DuplicateUnicodeStringFromUser@$0A@@@YAJV-$UserModePointer@UUSERMODE_UNICODE_STRING@@@@KPEAU_.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401A4390 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     NtUserSystemParametersInfo @ 0x1401AB600 (NtUserSystemParametersInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1401E3DB0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtRIMQueryDevicePath @ 0x1401FF2E0 (NtRIMQueryDevicePath.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401FFA30 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1402006B0 (RIMAddNonPnpDeviceOfType.c)
 *     RtlReadULongFromUser$thunk$16789519765233612629 @ 0x14024E060 (RtlReadULongFromUser$thunk$16789519765233612629.c)
 *     WmsgpConnect @ 0x1402D27AC (WmsgpConnect.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401C9244 (ProbeForRead_0.c)
 */

__int64 __fastcall RtlReadULongFromUser(unsigned int *a1)
{
  ProbeForRead_0(a1, 4uLL, 1u);
  return *a1;
}
