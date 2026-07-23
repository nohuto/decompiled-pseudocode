/*
 * XREFs of ZwQueryLicenseValue @ 0x14072ABE0
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14051E308 (SepDesktopAppxSubProcessToken.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     RtlGetProductInfo @ 0x140621260 (RtlGetProductInfo.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x1406219D8 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     DifZwQueryLicenseValueWrapper @ 0x1406B6670 (DifZwQueryLicenseValueWrapper.c)
 *     SepIsLockedDown @ 0x140815978 (SepIsLockedDown.c)
 *     ExGetExpirationDate @ 0x14083DE1C (ExGetExpirationDate.c)
 *     ExpGenuinePolicyPostProcess @ 0x14083E920 (ExpGenuinePolicyPostProcess.c)
 *     MmCreateMirror @ 0x14086EB30 (MmCreateMirror.c)
 *     RtlpGetWindowsPolicy @ 0x1408ADBDC (RtlpGetWindowsPolicy.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A96988 (RtlpGetPolicyValueForSystemCapability.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140CB18F4 (InitializeDynamicPartitioningPolicy.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x140CD6020 (PpmInitIdlePolicy.c)
 *     WheapLoadPolicy @ 0x140CEE99C (WheapLoadPolicy.c)
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
