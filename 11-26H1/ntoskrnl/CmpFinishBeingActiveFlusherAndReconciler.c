/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x14085D0E0
 * Callers:
 *     CmShutdownSystem1 @ 0x1406E64F0 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x140854570 (CmpSaveKeyByFileCopy.c)
 *     CmReplaceKey @ 0x14085F020 (CmReplaceKey.c)
 * Callees:
 *     CmpReleaseWriteQueue @ 0x1408BABA4 (CmpReleaseWriteQueue.c)
 *     CmpWakeWriteQueueWaiters @ 0x140AED540 (CmpWakeWriteQueueWaiters.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
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
