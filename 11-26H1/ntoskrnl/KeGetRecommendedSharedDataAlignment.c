/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x1404C5B80
 * Callers:
 *     ExAllocateCacheAwareRundownProtection @ 0x140A362F0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x140AABFC0 (ExInitializeRundownProtectionCacheAware.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x140B4D3C0 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
