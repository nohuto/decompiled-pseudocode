/*
 * XREFs of ZwEnumerateValueKey @ 0x140723650
 * Callers:
 *     DifZwEnumerateValueKeyWrapper @ 0x1406A5950 (DifZwEnumerateValueKeyWrapper.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407A3F78 (PipApplyFunctionToServiceInstances.c)
 *     PiDcInitUpdateProperties @ 0x1407A7AFC (PiDcInitUpdateProperties.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1407AAB70 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x1407BEF3C (KsepRegistryEnumValue.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140881180 (SdbpGetManifestedMergeStubAlloc.c)
 *     RtlpPopulateLanguageConfigList @ 0x1408A92D4 (RtlpPopulateLanguageConfigList.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1408A9D74 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RegRtlEnumValue @ 0x14091AFB0 (_RegRtlEnumValue.c)
 *     RtlpQueryRegistryValues @ 0x140A10F94 (RtlpQueryRegistryValues.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A71014 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A731C8 (PiDevCfgCopyDeviceKey.c)
 *     ExpSetPendingUILanguage @ 0x140B1E260 (ExpSetPendingUILanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140B2DDF0 (_RtlpMuiRegInitLIPLanguage.c)
 *     SepLoadNgenLocations @ 0x140B5D3CC (SepLoadNgenLocations.c)
 *     HalpInitChipHacks @ 0x140CB3C08 (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140CC480C (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140CC4AA8 (PiLastGoodRevertLastKnownDirectory.c)
 *     PopReadSimulatedProcessorDetail @ 0x140CD40E8 (PopReadSimulatedProcessorDetail.c)
 *     PsInitializeBootCpuPartitions @ 0x140CD7AC4 (PsInitializeBootCpuPartitions.c)
 *     EmInitSystem @ 0x140D07BB4 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(KeyHandle, *(_QWORD *)&Index);
}
