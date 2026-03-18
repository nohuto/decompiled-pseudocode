/*
 * XREFs of ZwQueryKey @ 0x1407236B0
 * Callers:
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405931E8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     PipIs32bitKey @ 0x1405D7E10 (PipIs32bitKey.c)
 *     DifZwQueryKeyWrapper @ 0x1406B28E0 (DifZwQueryKeyWrapper.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B592C (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x1407BF18C (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x140816E5C (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x1408171AC (SepReadAndPopulateCapes.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140826F90 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmpCloneHwProfile @ 0x140852134 (CmpCloneHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x140852E80 (CmpGetAcpiProfileInformation.c)
 *     CmpMoveBiosAliasTable @ 0x140853680 (CmpMoveBiosAliasTable.c)
 *     _RegRtlCopyTreeInternal @ 0x14089D400 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlQueryInfoKey @ 0x14091A3B0 (_RegRtlQueryInfoKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14091B2F8 (_PnpCtxRegQueryInfoKey.c)
 *     VrpPostEnumerateKey @ 0x140976950 (VrpPostEnumerateKey.c)
 *     BiEnumerateSubKeys @ 0x1409D1680 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x1409D3FE4 (BiGetKeyName.c)
 *     BiOpenStoreKeyFromObject @ 0x1409D49B8 (BiOpenStoreKeyFromObject.c)
 *     RtlpValidateKeyTrust @ 0x140A11BE0 (RtlpValidateKeyTrust.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140A12668 (IopApplyMutableTagToRegistryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A129AC (IopGetDriverNameFromKeyNode.c)
 *     PiNormalizeDeviceText @ 0x140A27F78 (PiNormalizeDeviceText.c)
 *     IopGetRegistryKeyInformation @ 0x140A74810 (IopGetRegistryKeyInformation.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A80FB0 (DrvDbGetObjectSubKeyCallback.c)
 *     PiRearrangeDeviceInstances @ 0x140AD5A5C (PiRearrangeDeviceInstances.c)
 *     SepLoadNgenLocations @ 0x140B5D3CC (SepLoadNgenLocations.c)
 *     PipCallbackHasDeviceOverrides @ 0x140B687F4 (PipCallbackHasDeviceOverrides.c)
 *     HalpInitChipHacks @ 0x140CB3C08 (HalpInitChipHacks.c)
 *     PipInitDeviceOverrideCache @ 0x140CC2194 (PipInitDeviceOverrideCache.c)
 *     EmInitSystem @ 0x140D07BB4 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&KeyInformationClass);
}
