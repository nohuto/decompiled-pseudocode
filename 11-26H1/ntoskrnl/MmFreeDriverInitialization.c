/*
 * XREFs of MmFreeDriverInitialization @ 0x1408646A4
 * Callers:
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 * Callees:
 *     MmReleaseLoadLockShared @ 0x1404A4BD8 (MmReleaseLoadLockShared.c)
 *     MiUnlockLoaderEntry @ 0x1404A4C7C (MiUnlockLoaderEntry.c)
 *     MiAcquireLoadLockShared @ 0x1404AB9D4 (MiAcquireLoadLockShared.c)
 *     MiLockLoaderEntry @ 0x14051E298 (MiLockLoaderEntry.c)
 *     MiFreeDriverInitialization @ 0x140AC90AC (MiFreeDriverInitialization.c)
 */

void __noreturn MmFreeDriverInitialization()
{
  MiAcquireLoadLockShared();
}
