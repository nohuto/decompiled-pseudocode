/*
 * XREFs of ZwQueryKey @ 0x14069B400
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1404A7504 (BiOpenStoreKeyFromObject.c)
 *     BiZwQueryKey @ 0x1404A7AF0 (BiZwQueryKey.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140556BB8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     PipIs32bitKey @ 0x14059FE80 (PipIs32bitKey.c)
 *     DifZwQueryKeyWrapper @ 0x140639F00 (DifZwQueryKeyWrapper.c)
 *     PipCallbackHasDeviceOverrides @ 0x14070DC54 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14072AF1C (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x140734B98 (KsepRegistryQueryKeyInformation.c)
 *     SepLoadNgenLocations @ 0x14077F40C (SepLoadNgenLocations.c)
 *     SepReadAndInsertCaps @ 0x140785F10 (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x140786268 (SepReadAndPopulateCapes.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140799B94 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmpCloneHwProfile @ 0x1407C391C (CmpCloneHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x1407C4658 (CmpGetAcpiProfileInformation.c)
 *     CmpMoveBiosAliasTable @ 0x1407C4E54 (CmpMoveBiosAliasTable.c)
 *     _RegRtlCopyTreeInternal @ 0x140810CA0 (_RegRtlCopyTreeInternal.c)
 *     VrpPostEnumerateKey @ 0x140948938 (VrpPostEnumerateKey.c)
 *     IopGetRegistryKeyInformation @ 0x14094D34C (IopGetRegistryKeyInformation.c)
 *     _RegRtlQueryInfoKey @ 0x140951A2C (_RegRtlQueryInfoKey.c)
 *     PiNormalizeDeviceText @ 0x1409AFC94 (PiNormalizeDeviceText.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B1F94 (IopGetDriverNameFromKeyNode.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1409B2C54 (IopApplyMutableTagToRegistryKey.c)
 *     RtlpValidateKeyTrust @ 0x1409EFC3C (RtlpValidateKeyTrust.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A01530 (DrvDbGetObjectSubKeyCallback.c)
 *     PiRearrangeDeviceInstances @ 0x140A6E6CC (PiRearrangeDeviceInstances.c)
 *     HalpInitChipHacks @ 0x140C02B04 (HalpInitChipHacks.c)
 *     PipInitDeviceOverrideCache @ 0x140C0FF48 (PipInitDeviceOverrideCache.c)
 *     EmInitSystem @ 0x140C4F21C (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
