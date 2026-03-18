/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1401D0560
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1401D0670 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
