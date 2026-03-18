/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1401F9BF0
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1401F9D00 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
