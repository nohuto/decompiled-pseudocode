/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x1408B7808
 * Callers:
 *     CmpTryToRundownHive @ 0x14045CB08 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x1406E64F0 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406E6740 (CmShutdownSystem2.c)
 *     CmpLazyCommitWorker @ 0x140861FB0 (CmpLazyCommitWorker.c)
 *     CmKtmNotification @ 0x1408B4310 (CmKtmNotification.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmpDoFlushNextHive @ 0x1408B8230 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 *     CmReleaseLoadKeyContext @ 0x14093D270 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD1A90 (CmpLateUnloadHiveWorker.c)
 *     CmpResolveHiveLoadConflict @ 0x140ADF3F4 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *UNLOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _LIST_ENTRY *v1; // rdx
  struct _LIST_ENTRY *Blink; // rtt
  __int64 v3; // rdx

  CurrentThread = KeGetCurrentThread();
  ExpPlatformBinaryLock.WaitBlock[0].Object = 0LL;
  _m_prefetchw(&CmpContextListLock.ApcStateFill[8]);
  v1 = CmpContextListLock.ApcState.ApcListHead[0].Blink - 1;
  if ( ((unsigned __int64)CmpContextListLock.ApcState.ApcListHead[0].Blink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v1 = 0LL;
  if ( (CmpContextListLock.ApcStateFill[8] & 2) != 0
    || (Blink = CmpContextListLock.ApcState.ApcListHead[0].Blink,
        Blink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&CmpContextListLock.ApcState.ApcListHead[0].Blink,
                                         (signed __int64)v1,
                                         (signed __int64)CmpContextListLock.ApcState.ApcListHead[0].Blink)) )
  {
    ExfReleasePushLock(&CmpContextListLock.ApcState.ApcListHead[0].Blink);
  }
  KeAbPostRelease((unsigned __int64)&CmpContextListLock.ApcState.ApcListHead[0].Blink);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v3);
}
