/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x140856D48
 * Callers:
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14084E260 (CmpSaveKeyByFileCopy.c)
 *     CmReplaceKey @ 0x140858C90 (CmReplaceKey.c)
 * Callees:
 *     CmpReleaseWriteQueue @ 0x1408B45D0 (CmpReleaseWriteQueue.c)
 *     CmpWakeWriteQueueWaiters @ 0x140AEAA50 (CmpWakeWriteQueueWaiters.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpFinishBeingActiveFlusherAndReconciler(__int64 a1)
{
  __int64 v2; // rcx
  struct _KEVENT *v3; // rbx
  __int64 v4; // rcx
  struct _KEVENT *v5; // rdi
  __int64 v6; // rcx

  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  v3 = (struct _KEVENT *)CmpReleaseWriteQueue(v2, a1 + 4200);
  v5 = (struct _KEVENT *)CmpReleaseWriteQueue(v4, a1 + 4216);
  HvUnlockHiveFlusherExclusive(a1);
  CmpUnlockRegistry(v6);
  CmpWakeWriteQueueWaiters((struct _KTHREAD *)(a1 + 4200), v3);
  return CmpWakeWriteQueueWaiters((struct _KTHREAD *)(a1 + 4216), v5);
}
