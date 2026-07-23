/*
 * XREFs of ZwDeleteValueKey @ 0x14069CD20
 * Callers:
 *     VfClearVerifierSettings @ 0x140603DE0 (VfClearVerifierSettings.c)
 *     DifZwDeleteValueKeyWrapper @ 0x140632F00 (DifZwDeleteValueKeyWrapper.c)
 *     CmpSetSystemRegistryString @ 0x14065BCB0 (CmpSetSystemRegistryString.c)
 *     BiZwDeleteValueKey @ 0x14068C414 (BiZwDeleteValueKey.c)
 *     IopWriteResourceList @ 0x140715070 (IopWriteResourceList.c)
 *     PopThermalHandlePreviousShutdown @ 0x140748274 (PopThermalHandlePreviousShutdown.c)
 *     SmKmKeyGenNewKey @ 0x14078ADFC (SmKmKeyGenNewKey.c)
 *     WdipSemLoadConfigInfo @ 0x140791B58 (WdipSemLoadConfigInfo.c)
 *     ExpWnfDeletePermanentStateData @ 0x1407B6A2C (ExpWnfDeletePermanentStateData.c)
 *     CmpSetVersionData @ 0x1407C8190 (CmpSetVersionData.c)
 *     CmpDoReDoRecord @ 0x1407D6E40 (CmpDoReDoRecord.c)
 *     NtEnableLastKnownGood @ 0x14081AAE0 (NtEnableLastKnownGood.c)
 *     PiQueryAndAllocateBootResources @ 0x140831F94 (PiQueryAndAllocateBootResources.c)
 *     CmpCompleteUnloadKey @ 0x14088523C (CmpCompleteUnloadKey.c)
 *     PiDevCfgCopyDeviceKey @ 0x14094C804 (PiDevCfgCopyDeviceKey.c)
 *     _PnpCtxRegDeleteValue @ 0x140950624 (_PnpCtxRegDeleteValue.c)
 *     IopReleaseDeviceResources @ 0x1409A0C90 (IopReleaseDeviceResources.c)
 *     PiProcessDriverInstance @ 0x1409B1BC0 (PiProcessDriverInstance.c)
 *     RtlpQueryRegistryValues @ 0x1409B3FD0 (RtlpQueryRegistryValues.c)
 *     PiQueryResourceRequirements @ 0x140A64274 (PiQueryResourceRequirements.c)
 *     PiRearrangeDeviceInstances @ 0x140A6E6CC (PiRearrangeDeviceInstances.c)
 *     ExpSetPendingUILanguage @ 0x140A6EE30 (ExpSetPendingUILanguage.c)
 *     ExpWnfDeletePermanentName @ 0x140A7EE84 (ExpWnfDeletePermanentName.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A82918 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A886D8 (IopWriteAllocatedResourcesToRegistry.c)
 *     NtSetDefaultLocale @ 0x140A92630 (NtSetDefaultLocale.c)
 *     PnpDriverLoadingFailed @ 0x140A9BB78 (PnpDriverLoadingFailed.c)
 *     RtlDeleteRegistryValue @ 0x140ABC780 (RtlDeleteRegistryValue.c)
 *     BapdRemoveWbclData @ 0x140B3B2CC (BapdRemoveWbclData.c)
 *     ArbDeleteMmConfigRange @ 0x140C045EC (ArbDeleteMmConfigRange.c)
 *     PipHardwareConfigInit @ 0x140C0F9A4 (PipHardwareConfigInit.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C2DF80 (BapdpProcessVsmKeyBlobs.c)
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
