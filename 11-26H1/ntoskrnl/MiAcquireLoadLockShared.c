/*
 * XREFs of MiAcquireLoadLockShared @ 0x1404AB9D4
 * Callers:
 *     MmFreeDriverInitialization @ 0x1408646A4 (MmFreeDriverInitialization.c)
 *     MiSplitDriverPage @ 0x140B47A14 (MiSplitDriverPage.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1404AB9EC (MiAcquireLoadLock.c)
 */

void __noreturn MiAcquireLoadLockShared()
{
  MiAcquireLoadLock(0LL);
}
