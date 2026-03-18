/*
 * XREFs of ZwQueryLicenseValue @ 0x140726010
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14045FEB8 (SepDesktopAppxSubProcessToken.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057CE5C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     RtlGetProductInfo @ 0x14061E210 (RtlGetProductInfo.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x14061E988 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     DifZwQueryLicenseValueWrapper @ 0x1406B2A90 (DifZwQueryLicenseValueWrapper.c)
 *     SepIsLockedDown @ 0x14080FEE8 (SepIsLockedDown.c)
 *     ExGetExpirationDate @ 0x140837BDC (ExGetExpirationDate.c)
 *     ExpGenuinePolicyPostProcess @ 0x1408386E0 (ExpGenuinePolicyPostProcess.c)
 *     MmCreateMirror @ 0x140868750 (MmCreateMirror.c)
 *     RtlpGetWindowsPolicy @ 0x1408A776C (RtlpGetWindowsPolicy.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A91E38 (RtlpGetPolicyValueForSystemCapability.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140CAB8B4 (InitializeDynamicPartitioningPolicy.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x140CCFE78 (PpmInitIdlePolicy.c)
 *     WheapLoadPolicy @ 0x140CE85FC (WheapLoadPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryLicenseValue(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
