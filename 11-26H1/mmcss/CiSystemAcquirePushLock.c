/*
 * XREFs of CiSystemAcquirePushLock @ 0x14000F090
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x14000D280 (CiDispatchCreateNotificationClient.c)
 *     CiNdisCleanupThrottle @ 0x14000DB84 (CiNdisCleanupThrottle.c)
 *     CiNdisThrottle @ 0x14000DD50 (CiNdisThrottle.c)
 *     CiTaskIndexCreate @ 0x14000E260 (CiTaskIndexCreate.c)
 *     CiTaskIndexLocate @ 0x14000E7E0 (CiTaskIndexLocate.c)
 *     CiAcquireProcessLock @ 0x14000E8C0 (CiAcquireProcessLock.c)
 *     CiAcquireTaskIndexListLock @ 0x14000E8E0 (CiAcquireTaskIndexListLock.c)
 *     CiThreadCreate @ 0x14000E900 (CiThreadCreate.c)
 *     CiThreadCleanup @ 0x14000EEF0 (CiThreadCleanup.c)
 *     CiProcessRemoveThread @ 0x14000F1F0 (CiProcessRemoveThread.c)
 *     CiThreadDecrementScheduledCount @ 0x14000F260 (CiThreadDecrementScheduledCount.c)
 *     CiThreadIncrementScheduledCount @ 0x14000F2C0 (CiThreadIncrementScheduledCount.c)
 *     CiDispatchClose @ 0x14000F320 (CiDispatchClose.c)
 *     CiProcessCreate @ 0x14000F420 (CiProcessCreate.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall CiSystemAcquirePushLock(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
