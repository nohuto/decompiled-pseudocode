/*
 * XREFs of CmpGetNextHive @ 0x1408B9680
 * Callers:
 *     CmpDoFlushAll @ 0x14049BE84 (CmpDoFlushAll.c)
 *     CmpBlockHiveWrites @ 0x1408B83AC (CmpBlockHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408B8450 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1408DF920 (CmpVEExecuteOpenLogic.c)
 *     CmpUnblockHiveWrites @ 0x140ADBC68 (CmpUnblockHiveWrites.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     CmpLockHiveListShared @ 0x1408B9780 (CmpLockHiveListShared.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 */

volatile signed __int32 *__fastcall CmpGetNextHive(struct _KTHREAD **P)
{
  volatile signed __int32 *PriorityFloorCounts; // rdi
  struct _KTHREAD **v3; // rsi
  struct _KTHREAD *i; // rdx
  signed __int32 WaitStatus; // eax
  signed __int32 v6; // ett
  struct _LIST_ENTRY *v7; // rdx
  struct _LIST_ENTRY *Flink; // rtt

  PriorityFloorCounts = 0LL;
  v3 = (struct _KTHREAD **)&PspSiloMonitorLock.WaitBlockFill11[112];
  if ( P )
    v3 = P + 201;
  CmpLockHiveListShared();
  for ( i = *v3; i != (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112]; PriorityFloorCounts = 0LL )
  {
    PriorityFloorCounts = (volatile signed __int32 *)i[-2].PriorityFloorCounts;
    _m_prefetchw((const void *)&i[2].WaitStatus);
    WaitStatus = i[2].WaitStatus;
    while ( WaitStatus )
    {
      v6 = WaitStatus;
      WaitStatus = _InterlockedCompareExchange(PriorityFloorCounts + 1060, WaitStatus + 1, WaitStatus);
      if ( v6 == WaitStatus )
        goto LABEL_7;
    }
    i = *(struct _KTHREAD **)&i->Header.Lock;
  }
LABEL_7:
  _m_prefetchw(&CmpContextListLock.152);
  v7 = CmpContextListLock.ApcState.ApcListHead[0].Flink - 1;
  if ( ((unsigned __int64)CmpContextListLock.ApcState.ApcListHead[0].Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (CmpContextListLock.ApcStateFill[0] & 2) != 0
    || (Flink = CmpContextListLock.ApcState.ApcListHead[0].Flink,
        Flink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&CmpContextListLock.152,
                                         (signed __int64)v7,
                                         (signed __int64)CmpContextListLock.ApcState.ApcListHead[0].Flink)) )
  {
    ExfReleasePushLock(&CmpContextListLock.152);
  }
  KeAbPostRelease((unsigned __int64)&CmpContextListLock.152);
  if ( P )
    CmpDereferenceHive(P);
  return PriorityFloorCounts;
}
