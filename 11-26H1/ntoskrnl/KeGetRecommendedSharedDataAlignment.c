/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x1404BF530
 * Callers:
 *     ExAllocateCacheAwareRundownProtection @ 0x14091B070 (ExAllocateCacheAwareRundownProtection.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x140AA9570 (ExInitializeRundownProtectionCacheAware.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x140B4F150 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
