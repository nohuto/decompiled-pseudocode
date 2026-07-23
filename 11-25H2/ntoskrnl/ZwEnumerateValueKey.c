/*
 * XREFs of ZwEnumerateValueKey @ 0x14069B3A0
 * Callers:
 *     DifZwEnumerateValueKeyWrapper @ 0x140633BD0 (DifZwEnumerateValueKeyWrapper.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407169C0 (PipApplyFunctionToServiceInstances.c)
 *     PiDcInitUpdateProperties @ 0x14071B75C (PiDcInitUpdateProperties.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14071D504 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14071F1D8 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x14073494C (KsepRegistryEnumValue.c)
 *     SepLoadNgenLocations @ 0x14077F40C (SepLoadNgenLocations.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x1407F15A0 (SdbpGetManifestedMergeStubAlloc.c)
 *     RtlpPopulateLanguageConfigList @ 0x14081D380 (RtlpPopulateLanguageConfigList.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14081DD38 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14081E0AC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     PiDevCfgCopyDeviceKey @ 0x14094C804 (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlEnumValue @ 0x14095324C (_RegRtlEnumValue.c)
 *     RtlpQueryRegistryValues @ 0x1409B3FD0 (RtlpQueryRegistryValues.c)
 *     ExpSetPendingUILanguage @ 0x140A6EE30 (ExpSetPendingUILanguage.c)
 *     HalpInitChipHacks @ 0x140C02B04 (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140C12440 (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C126E0 (PiLastGoodRevertLastKnownDirectory.c)
 *     PopReadSimulatedProcessorClass @ 0x140C20458 (PopReadSimulatedProcessorClass.c)
 *     PsInitializeBootCpuPartitions @ 0x140C235D0 (PsInitializeBootCpuPartitions.c)
 *     EmInitSystem @ 0x140C4F21C (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
