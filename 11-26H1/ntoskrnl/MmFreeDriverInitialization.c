/*
 * XREFs of MmFreeDriverInitialization @ 0x14086AA84
 * Callers:
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 * Callees:
 *     MmReleaseLoadLockShared @ 0x14049E268 (MmReleaseLoadLockShared.c)
 *     MiUnlockLoaderEntry @ 0x14049E30C (MiUnlockLoaderEntry.c)
 *     MiAcquireLoadLockShared @ 0x1404A5064 (MiAcquireLoadLockShared.c)
 *     MiLockLoaderEntry @ 0x1405208A8 (MiLockLoaderEntry.c)
 *     MiFreeDriverInitialization @ 0x140ACB1C4 (MiFreeDriverInitialization.c)
 */

void __noreturn MmFreeDriverInitialization()
{
  MiAcquireLoadLockShared();
}
