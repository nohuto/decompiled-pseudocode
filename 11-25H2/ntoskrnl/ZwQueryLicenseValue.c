/*
 * XREFs of ZwQueryLicenseValue @ 0x14069DD40
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14029223C (SepDesktopAppxSubProcessToken.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14053F740 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     RtlGetProductInfo @ 0x1405E2350 (RtlGetProductInfo.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x1405E2E14 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     DifZwQueryLicenseValueWrapper @ 0x14063A0B0 (DifZwQueryLicenseValueWrapper.c)
 *     RtlpGetWindowsPolicy @ 0x1406EE9B8 (RtlpGetWindowsPolicy.c)
 *     SepIsLockedDown @ 0x14077F368 (SepIsLockedDown.c)
 *     ExGetExpirationDate @ 0x1407A8A18 (ExGetExpirationDate.c)
 *     ExpGenuinePolicyPostProcess @ 0x1407A94D0 (ExpGenuinePolicyPostProcess.c)
 *     MmCreateMirror @ 0x1407DC020 (MmCreateMirror.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A09F38 (RtlpGetPolicyValueForSystemCapability.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140BFAC08 (InitializeDynamicPartitioningPolicy.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x140C1C3D8 (PpmInitIdlePolicy.c)
 *     WheapLoadPolicy @ 0x140C33974 (WheapLoadPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ValueName);
}
