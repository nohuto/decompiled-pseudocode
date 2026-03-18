/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x1408B11FC
 * Callers:
 *     CmpTryToRundownHive @ 0x140463B48 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406E24C0 (CmShutdownSystem2.c)
 *     CmpLazyCommitWorker @ 0x14085BCC0 (CmpLazyCommitWorker.c)
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 *     CmpDoFlushNextHive @ 0x1408B1C20 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmpCompleteUnloadKey @ 0x1408B9ACC (CmpCompleteUnloadKey.c)
 *     CmReleaseLoadKeyContext @ 0x14097B260 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD4630 (CmpLateUnloadHiveWorker.c)
 *     CmpResolveHiveLoadConflict @ 0x140AE1F04 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

_QWORD *UNLOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _LIST_ENTRY *v1; // rdx
  struct _LIST_ENTRY *Blink; // rtt
  __int64 v3; // rdx

  CurrentThread = KeGetCurrentThread();
  ExpPlatformBinaryLock.WaitBlock[0].Object = 0LL;
  _m_prefetchw(&CmpCallbackListLock.ApcStateFill[8]);
  v1 = CmpCallbackListLock.ApcState.ApcListHead[0].Blink - 1;
  if ( ((unsigned __int64)CmpCallbackListLock.ApcState.ApcListHead[0].Blink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v1 = 0LL;
  if ( (CmpCallbackListLock.ApcStateFill[8] & 2) != 0
    || (Blink = CmpCallbackListLock.ApcState.ApcListHead[0].Blink,
        Blink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&CmpCallbackListLock.ApcState.ApcListHead[0].Blink,
                                         (signed __int64)v1,
                                         (signed __int64)CmpCallbackListLock.ApcState.ApcListHead[0].Blink)) )
  {
    ExfReleasePushLock(&CmpCallbackListLock.ApcState.ApcListHead[0].Blink);
  }
  KeAbPostRelease((unsigned __int64)&CmpCallbackListLock.ApcState.ApcListHead[0].Blink);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v3);
}
