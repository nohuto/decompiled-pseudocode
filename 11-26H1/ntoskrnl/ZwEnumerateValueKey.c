/*
 * XREFs of ZwEnumerateValueKey @ 0x140728220
 * Callers:
 *     DifZwEnumerateValueKeyWrapper @ 0x1406A9530 (DifZwEnumerateValueKeyWrapper.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407A6AB8 (PipApplyFunctionToServiceInstances.c)
 *     PiDcInitUpdateProperties @ 0x1407AA6AC (PiDcInitUpdateProperties.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1407ADA4C (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x1407C1F9C (KsepRegistryEnumValue.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140887580 (SdbpGetManifestedMergeStubAlloc.c)
 *     RtlpPopulateLanguageConfigList @ 0x1408AF744 (RtlpPopulateLanguageConfigList.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1408B01E4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RegRtlEnumValue @ 0x140975A14 (_RegRtlEnumValue.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 *     ExpSetPendingUILanguage @ 0x140B202E0 (ExpSetPendingUILanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140B2FE70 (_RtlpMuiRegInitLIPLanguage.c)
 *     SepLoadNgenLocations @ 0x140B6054C (SepLoadNgenLocations.c)
 *     HalpInitChipHacks @ 0x140CB9C48 (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140CCA8EC (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140CCAB88 (PiLastGoodRevertLastKnownDirectory.c)
 *     PopReadSimulatedProcessorDetail @ 0x140CDA288 (PopReadSimulatedProcessorDetail.c)
 *     PsInitializeBootCpuPartitions @ 0x140CDDE44 (PsInitializeBootCpuPartitions.c)
 *     EmInitSystem @ 0x140D0DE84 (EmInitSystem.c)
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
