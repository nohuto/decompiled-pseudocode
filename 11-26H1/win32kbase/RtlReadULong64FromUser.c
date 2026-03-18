/*
 * XREFs of RtlReadULong64FromUser @ 0x1402D2164
 * Callers:
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x14000E47C (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 *     EtwTraceInputProcessDelay @ 0x1400DB7E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1400DCB00 (EtwTraceMessageCheckDelay.c)
 *     ?GetSpriteFillColorOverrideForCurrentProcess@@YAKXZ @ 0x14012D450 (-GetSpriteFillColorOverrideForCurrentProcess@@YAKXZ.c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x14013E280 (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x14016CE40 (NtUserLoadKeyboardLayoutEx.c)
 *     ??$DuplicateUnicodeStringFromUser@$0A@@@YAJV?$UserModePointer@UUSERMODE_UNICODE_STRING@@@@KPEAU_UNICODE_STRING@@@Z @ 0x1401874D4 (--$DuplicateUnicodeStringFromUser@$0A@@@YAJV-$UserModePointer@UUSERMODE_UNICODE_STRING@@@@KPEAU_.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401A4390 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     NtMITPostMouseInputMessage @ 0x1401E1210 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1401E1340 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1401E1450 (NtMITPostWindowEventMessage.c)
 *     NtSetPointerDeviceInputSpace @ 0x1401E1B80 (NtSetPointerDeviceInputSpace.c)
 *     NtUserAddVisualIdentifier @ 0x1401E2110 (NtUserAddVisualIdentifier.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1401E7BB0 (NtUserMapPointsByVisualIdentifier.c)
 *     NtUserRemoveVisualIdentifier @ 0x1401E8260 (NtUserRemoveVisualIdentifier.c)
 *     NtRIMQueryDevicePath @ 0x1401FF2E0 (NtRIMQueryDevicePath.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401FFA30 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1402006B0 (RIMAddNonPnpDeviceOfType.c)
 *     RtlReadULong64FromUser$thunk$2147908448085668007 @ 0x14024E050 (RtlReadULong64FromUser$thunk$2147908448085668007.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401C9244 (ProbeForRead_0.c)
 */

__int64 __fastcall RtlReadULong64FromUser(volatile void *a1)
{
  ProbeForRead_0(a1, 8uLL, 1u);
  return *(_QWORD *)a1;
}
