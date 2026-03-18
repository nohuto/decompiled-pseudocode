/*
 * XREFs of CmpUnlockHiveList @ 0x1408C8634
 * Callers:
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x14046EEE4 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x1404D3C6C (CmpUnJoinClassOfTrust.c)
 *     CmpLoadHiveVolatile @ 0x14084D878 (CmpLoadHiveVolatile.c)
 *     CmpTransMgrPrepare @ 0x1408AEE6C (CmpTransMgrPrepare.c)
 *     CmpGetLastHive @ 0x1408B13C8 (CmpGetLastHive.c)
 *     CmpDoFlushNextHive @ 0x1408B1C20 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1408B2110 (CmpBlockTwoHiveWrites.c)
 *     CmpGetNextActiveHive @ 0x1408B3048 (CmpGetNextActiveHive.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpDeleteHive @ 0x1408D42C4 (CmpDeleteHive.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     CmpUnlockHashEntry @ 0x140A345F0 (CmpUnlockHashEntry.c)
 *     CmpDoReconcileNextHive @ 0x140AAB490 (CmpDoReconcileNextHive.c)
 *     CmpDoLocalizeNextHive @ 0x140AD63C0 (CmpDoLocalizeNextHive.c)
 *     CmFreezeRegistry @ 0x140AE3390 (CmFreezeRegistry.c)
 *     CmEtwRunDown @ 0x140AFF0F8 (CmEtwRunDown.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x140B57D54 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

void CmpUnlockHiveList()
{
  struct _LIST_ENTRY *v0; // rdx
  struct _LIST_ENTRY *Flink; // rtt

  _m_prefetchw(&CmpCallbackListLock.ApcStateFill[16]);
  v0 = CmpCallbackListLock.ApcState.ApcListHead[1].Flink - 1;
  if ( ((unsigned __int64)CmpCallbackListLock.ApcState.ApcListHead[1].Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpCallbackListLock.ApcStateFill[16] & 2) != 0
    || (Flink = CmpCallbackListLock.ApcState.ApcListHead[1].Flink,
        Flink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&CmpCallbackListLock.ApcState.ApcListHead[1].Flink,
                                         (signed __int64)v0,
                                         (signed __int64)CmpCallbackListLock.ApcState.ApcListHead[1].Flink)) )
  {
    ExfReleasePushLock(&CmpCallbackListLock.ApcState.ApcListHead[1].Flink);
  }
  KeAbPostRelease((unsigned __int64)&CmpCallbackListLock.ApcState.ApcListHead[1]);
}
