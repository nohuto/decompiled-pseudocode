/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x1408839E4
 * Callers:
 *     CmpTryToRundownHive @ 0x14036DA50 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14065C2F0 (CmShutdownSystem2.c)
 *     CmpLazyCommitWorker @ 0x1407CE980 (CmpLazyCommitWorker.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 *     CmpDoFlushNextHive @ 0x1408837F0 (CmpDoFlushNextHive.c)
 *     CmpCompleteUnloadKey @ 0x14088523C (CmpCompleteUnloadKey.c)
 *     CmReleaseLoadKeyContext @ 0x140912250 (CmReleaseLoadKeyContext.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140A42470 (CmpLateUnloadHiveWorker.c)
 *     CmpResolveHiveLoadConflict @ 0x140A82524 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 */

_QWORD *UNLOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 v1; // rdx
  ULONG_PTR v2; // rtt
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  CmpLoadHiveLockOwner = 0LL;
  _m_prefetchw(&CmpLoadHiveLock);
  v1 = CmpLoadHiveLock - 16;
  if ( (CmpLoadHiveLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v1 = 0LL;
  if ( (CmpLoadHiveLock & 2) != 0
    || (v2 = CmpLoadHiveLock,
        v2 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpLoadHiveLock, v1, CmpLoadHiveLock)) )
  {
    ExfReleasePushLock(&CmpLoadHiveLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpLoadHiveLock);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v3, v4, v5);
}
