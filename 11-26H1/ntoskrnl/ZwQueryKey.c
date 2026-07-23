/*
 * XREFs of ZwQueryKey @ 0x140728280
 * Callers:
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140595968 (HalpMcEnumerateAndSetPatchConfig.c)
 *     PipIs32bitKey @ 0x1405DA610 (PipIs32bitKey.c)
 *     DifZwQueryKeyWrapper @ 0x1406B64C0 (DifZwQueryKeyWrapper.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B898C (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x1407C21EC (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x14081D06C (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x14081D3BC (SepReadAndPopulateCapes.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14082D1D0 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmpCloneHwProfile @ 0x140858444 (CmpCloneHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x140859190 (CmpGetAcpiProfileInformation.c)
 *     CmpMoveBiosAliasTable @ 0x140859990 (CmpMoveBiosAliasTable.c)
 *     _RegRtlCopyTreeInternal @ 0x1408A3800 (_RegRtlCopyTreeInternal.c)
 *     VrpPostEnumerateKey @ 0x140938960 (VrpPostEnumerateKey.c)
 *     _RegRtlQueryInfoKey @ 0x140974E10 (_RegRtlQueryInfoKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     BiEnumerateSubKeys @ 0x1409A2660 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x1409A4FC4 (BiGetKeyName.c)
 *     BiOpenStoreKeyFromObject @ 0x1409A5998 (BiOpenStoreKeyFromObject.c)
 *     RtlpValidateKeyTrust @ 0x140A10DD0 (RtlpValidateKeyTrust.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140A11858 (IopApplyMutableTagToRegistryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A11B9C (IopGetDriverNameFromKeyNode.c)
 *     PiNormalizeDeviceText @ 0x140A3B018 (PiNormalizeDeviceText.c)
 *     IopGetRegistryKeyInformation @ 0x140A4B2B0 (IopGetRegistryKeyInformation.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A86E20 (DrvDbGetObjectSubKeyCallback.c)
 *     PiRearrangeDeviceInstances @ 0x140AD2A0C (PiRearrangeDeviceInstances.c)
 *     SepLoadNgenLocations @ 0x140B6054C (SepLoadNgenLocations.c)
 *     PipCallbackHasDeviceOverrides @ 0x140B6B784 (PipCallbackHasDeviceOverrides.c)
 *     HalpInitChipHacks @ 0x140CB9C48 (HalpInitChipHacks.c)
 *     PipInitDeviceOverrideCache @ 0x140CC8264 (PipInitDeviceOverrideCache.c)
 *     EmInitSystem @ 0x140D0DE84 (EmInitSystem.c)
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
