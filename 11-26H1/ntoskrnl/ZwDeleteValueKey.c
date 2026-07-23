/*
 * XREFs of ZwDeleteValueKey @ 0x140729BA0
 * Callers:
 *     VfClearVerifierSettings @ 0x140643E50 (VfClearVerifierSettings.c)
 *     DifZwDeleteValueKeyWrapper @ 0x1406A7F40 (DifZwDeleteValueKeyWrapper.c)
 *     PrpLogSfsVersion @ 0x1406E1EDC (PrpLogSfsVersion.c)
 *     CmpSetSystemRegistryString @ 0x1406E6420 (CmpSetSystemRegistryString.c)
 *     BiDeleteRegistryValue @ 0x140778A88 (BiDeleteRegistryValue.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D4910 (PopThermalHandlePreviousShutdown.c)
 *     WdipSemLoadConfigInfo @ 0x140825870 (WdipSemLoadConfigInfo.c)
 *     ExpWnfDeletePermanentStateData @ 0x14084D268 (ExpWnfDeletePermanentStateData.c)
 *     CmpSetVersionData @ 0x14085CA84 (CmpSetVersionData.c)
 *     CmpDoReDoRecord @ 0x140869C08 (CmpDoReDoRecord.c)
 *     NtEnableLastKnownGood @ 0x1408AD040 (NtEnableLastKnownGood.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14091851C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 *     PiQueryResourceRequirements @ 0x1409B2FCC (PiQueryResourceRequirements.c)
 *     IopReleaseDeviceResources @ 0x1409B7CB4 (IopReleaseDeviceResources.c)
 *     ExpWnfDeletePermanentName @ 0x1409C36F4 (ExpWnfDeletePermanentName.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 *     PiQueryAndAllocateBootResources @ 0x140AA072C (PiQueryAndAllocateBootResources.c)
 *     PiProcessDriverInstance @ 0x140AD2500 (PiProcessDriverInstance.c)
 *     PiRearrangeDeviceInstances @ 0x140AD2A0C (PiRearrangeDeviceInstances.c)
 *     IopWriteResourceList @ 0x140AFB6B4 (IopWriteResourceList.c)
 *     NtSetDefaultLocale @ 0x140B10920 (NtSetDefaultLocale.c)
 *     ExpSetPendingUILanguage @ 0x140B202E0 (ExpSetPendingUILanguage.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140B36034 (IopWriteAllocatedResourcesToRegistry.c)
 *     RtlDeleteRegistryValue @ 0x140B480A0 (RtlDeleteRegistryValue.c)
 *     PnpDriverLoadingFailed @ 0x140B4858C (PnpDriverLoadingFailed.c)
 *     BapdRemoveWbclData @ 0x140C052E8 (BapdRemoveWbclData.c)
 *     ArbDeleteMmConfigRange @ 0x140CBB734 (ArbDeleteMmConfigRange.c)
 *     PipHardwareConfigInit @ 0x140CC7CBC (PipHardwareConfigInit.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE8DD8 (BapdpProcessVsmKeyBlobs.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
