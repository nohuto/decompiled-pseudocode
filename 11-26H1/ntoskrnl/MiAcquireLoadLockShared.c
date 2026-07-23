/*
 * XREFs of MiAcquireLoadLockShared @ 0x1404A5064
 * Callers:
 *     MmFreeDriverInitialization @ 0x14086AA84 (MmFreeDriverInitialization.c)
 *     MiSplitDriverPage @ 0x140B497A8 (MiSplitDriverPage.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1404A507C (MiAcquireLoadLock.c)
 */

void __noreturn MiAcquireLoadLockShared()
{
  MiAcquireLoadLock(0LL);
}
