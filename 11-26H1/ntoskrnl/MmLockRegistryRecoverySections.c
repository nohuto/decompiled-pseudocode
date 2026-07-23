/*
 * XREFs of MmLockRegistryRecoverySections @ 0x14086AAD8
 * Callers:
 *     CmInitSystem2 @ 0x140D10B0C (CmInitSystem2.c)
 * Callees:
 *     MmEnumerateSystemImages @ 0x1404DE6F0 (MmEnumerateSystemImages.c)
 */

__int64 MmLockRegistryRecoverySections()
{
  return MmEnumerateSystemImages((__int64)MiLockRegistryRecoverySection, 0LL);
}
