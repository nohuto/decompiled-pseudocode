/*
 * XREFs of CmpUnlockHiveList @ 0x1408CEBE8
 * Callers:
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x140468664 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x1404CD4DC (CmpUnJoinClassOfTrust.c)
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpGetLastHive @ 0x1408B79D4 (CmpGetLastHive.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpDeleteHive @ 0x1408DA884 (CmpDeleteHive.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     CmpUnlockHashEntry @ 0x140A4F550 (CmpUnlockHashEntry.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 */

void CmpUnlockHiveList()
{
  struct _LIST_ENTRY *v0; // rdx
  struct _LIST_ENTRY *Flink; // rtt

  _m_prefetchw(&CmpContextListLock.152);
  v0 = CmpContextListLock.ApcState.ApcListHead[0].Flink - 1;
  if ( ((unsigned __int64)CmpContextListLock.ApcState.ApcListHead[0].Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpContextListLock.ApcStateFill[0] & 2) != 0
    || (Flink = CmpContextListLock.ApcState.ApcListHead[0].Flink,
        Flink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&CmpContextListLock.152,
                                         (signed __int64)v0,
                                         (signed __int64)CmpContextListLock.ApcState.ApcListHead[0].Flink)) )
  {
    ExfReleasePushLock(&CmpContextListLock.152);
  }
  KeAbPostRelease((unsigned __int64)&CmpContextListLock.152);
}
