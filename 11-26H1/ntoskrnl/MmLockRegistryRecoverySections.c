/*
 * XREFs of MmLockRegistryRecoverySections @ 0x1408646F8
 * Callers:
 *     CmInitSystem2 @ 0x140D0A83C (CmInitSystem2.c)
 * Callees:
 *     MmEnumerateSystemImages @ 0x1404E5150 (MmEnumerateSystemImages.c)
 */

__int64 MmLockRegistryRecoverySections()
{
  return MmEnumerateSystemImages((__int64)MiLockRegistryRecoverySection, 0LL);
}
