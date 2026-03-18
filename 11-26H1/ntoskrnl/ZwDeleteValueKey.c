/*
 * XREFs of ZwDeleteValueKey @ 0x140724FD0
 * Callers:
 *     VfClearVerifierSettings @ 0x140640270 (VfClearVerifierSettings.c)
 *     DifZwDeleteValueKeyWrapper @ 0x1406A4360 (DifZwDeleteValueKeyWrapper.c)
 *     PrpLogSfsVersion @ 0x1406DDC3C (PrpLogSfsVersion.c)
 *     CmpSetSystemRegistryString @ 0x1406E21A0 (CmpSetSystemRegistryString.c)
 *     BiDeleteRegistryValue @ 0x140775BE0 (BiDeleteRegistryValue.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D1870 (PopThermalHandlePreviousShutdown.c)
 *     WdipSemLoadConfigInfo @ 0x14081F660 (WdipSemLoadConfigInfo.c)
 *     ExpWnfDeletePermanentStateData @ 0x140847008 (ExpWnfDeletePermanentStateData.c)
 *     CmpSetVersionData @ 0x1408566EC (CmpSetVersionData.c)
 *     CmpDoReDoRecord @ 0x140863828 (CmpDoReDoRecord.c)
 *     NtEnableLastKnownGood @ 0x1408A6BD0 (NtEnableLastKnownGood.c)
 *     CmpCompleteUnloadKey @ 0x1408B9ACC (CmpCompleteUnloadKey.c)
 *     _PnpCtxRegDeleteValue @ 0x14090B324 (_PnpCtxRegDeleteValue.c)
 *     PiQueryResourceRequirements @ 0x140910EEC (PiQueryResourceRequirements.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14093C97C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     ExpWnfDeletePermanentName @ 0x140947D84 (ExpWnfDeletePermanentName.c)
 *     RtlpQueryRegistryValues @ 0x140A10F94 (RtlpQueryRegistryValues.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A731C8 (PiDevCfgCopyDeviceKey.c)
 *     IopReleaseDeviceResources @ 0x140A8AE94 (IopReleaseDeviceResources.c)
 *     PiQueryAndAllocateBootResources @ 0x140AA5534 (PiQueryAndAllocateBootResources.c)
 *     PiProcessDriverInstance @ 0x140AD5550 (PiProcessDriverInstance.c)
 *     PiRearrangeDeviceInstances @ 0x140AD5A5C (PiRearrangeDeviceInstances.c)
 *     IopWriteResourceList @ 0x140AF8FD4 (IopWriteResourceList.c)
 *     NtSetDefaultLocale @ 0x140B0F0F0 (NtSetDefaultLocale.c)
 *     ExpSetPendingUILanguage @ 0x140B1E260 (ExpSetPendingUILanguage.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140B33BE4 (IopWriteAllocatedResourcesToRegistry.c)
 *     RtlDeleteRegistryValue @ 0x140B46070 (RtlDeleteRegistryValue.c)
 *     PnpDriverLoadingFailed @ 0x140B4655C (PnpDriverLoadingFailed.c)
 *     BapdRemoveWbclData @ 0x140BFF0D8 (BapdRemoveWbclData.c)
 *     ArbDeleteMmConfigRange @ 0x140CB56F4 (ArbDeleteMmConfigRange.c)
 *     PipHardwareConfigInit @ 0x140CC1BEC (PipHardwareConfigInit.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE2A38 (BapdpProcessVsmKeyBlobs.c)
 *     PipInitComputerIds @ 0x140D056B0 (PipInitComputerIds.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, ValueName);
}
