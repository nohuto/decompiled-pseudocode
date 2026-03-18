/*
 * XREFs of RtlWriteULong64ToUser @ 0x1402D231C
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 *     rimProcessInput @ 0x1400A09DC (rimProcessInput.c)
 *     NtDCompositionGetConnectionBatch @ 0x1400A4A90 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1400B4140 (NtDCompositionCreateAndBindSharedSection.c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x14013E280 (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     NtDCompositionCreateChannel @ 0x140168920 (NtDCompositionCreateChannel.c)
 *     RIMGetDevicePropertiesLockfree @ 0x14016D560 (RIMGetDevicePropertiesLockfree.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401A4390 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     GdiProcessCallout @ 0x1401ADA20 (GdiProcessCallout.c)
 *     NtDCompositionCreateSharedResourceHandle @ 0x1401B27C0 (NtDCompositionCreateSharedResourceHandle.c)
 *     NtMITActivateInputProcessing @ 0x1401E09C0 (NtMITActivateInputProcessing.c)
 *     NtUserCreateActivationObject @ 0x1401E2650 (NtUserCreateActivationObject.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401E2960 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1401E4C50 (NtUserGetPointerDeviceInputSpace.c)
 *     NtUserInitializeGenericHidInjection @ 0x1401E4FC0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401E5550 (NtUserInitializeInputDeviceInjection.c)
 *     NtRIMQueryDevicePath @ 0x1401FF2E0 (NtRIMQueryDevicePath.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401FFA30 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1402006B0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMEnableMonitorMappingForDevice @ 0x140200E20 (RIMEnableMonitorMappingForDevice.c)
 *     rimObsAddInputObserver @ 0x14020E44C (rimObsAddInputObserver.c)
 *     rimObsCopyMessage @ 0x14020F238 (rimObsCopyMessage.c)
 *     NtDCompositionCreateBufferCollection @ 0x140228B60 (NtDCompositionCreateBufferCollection.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x140228E30 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x140228F60 (NtDCompositionDuplicateHandleToProcess.c)
 *     RtlWriteULong64ToUser$thunk$4480820996488585629 @ 0x14024E0B0 (RtlWriteULong64ToUser$thunk$4480820996488585629.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401C9244 (ProbeForRead_0.c)
 */

void __fastcall RtlWriteULong64ToUser(_QWORD *a1, __int64 a2)
{
  ProbeForRead_0(a1, 8uLL, 1u);
  *a1 = a2;
}
