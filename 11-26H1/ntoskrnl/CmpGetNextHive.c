/*
 * XREFs of CmpGetNextHive @ 0x1408B30D0
 * Callers:
 *     CmpDoFlushAll @ 0x1404A2354 (CmpDoFlushAll.c)
 *     CmpBlockHiveWrites @ 0x1408B1DD0 (CmpBlockHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408B1E74 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1408D9360 (CmpVEExecuteOpenLogic.c)
 *     CmpUnblockHiveWrites @ 0x140ADEA78 (CmpUnblockHiveWrites.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     CmpLockHiveListShared @ 0x1408B31AC (CmpLockHiveListShared.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 */

volatile signed __int32 *__fastcall CmpGetNextHive(char *P, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *v5; // rdi
  volatile signed __int32 *PriorityFloorCounts; // rsi
  signed __int32 WaitStatus; // eax
  signed __int32 v8; // ett
  struct _LIST_ENTRY *v9; // rdx
  struct _LIST_ENTRY *Flink; // rtt

  v5 = (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
  if ( P )
    v5 = (struct _KTHREAD *)(P + 1608);
  CmpLockHiveListShared(P, a2, a3, a4);
  while ( 1 )
  {
    v5 = *(struct _KTHREAD **)&v5->Header.Lock;
    PriorityFloorCounts = 0LL;
    if ( v5 == (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
      break;
    PriorityFloorCounts = (volatile signed __int32 *)v5[-2].PriorityFloorCounts;
    _m_prefetchw((const void *)&v5[2].WaitStatus);
    WaitStatus = v5[2].WaitStatus;
    while ( WaitStatus )
    {
      v8 = WaitStatus;
      WaitStatus = _InterlockedCompareExchange(PriorityFloorCounts + 1060, WaitStatus + 1, WaitStatus);
      if ( v8 == WaitStatus )
        goto LABEL_8;
    }
  }
LABEL_8:
  _m_prefetchw(&CmpCallbackListLock.ApcStateFill[16]);
  v9 = CmpCallbackListLock.ApcState.ApcListHead[1].Flink - 1;
  if ( ((unsigned __int64)CmpCallbackListLock.ApcState.ApcListHead[1].Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v9 = 0LL;
  if ( (CmpCallbackListLock.ApcStateFill[16] & 2) != 0
    || (Flink = CmpCallbackListLock.ApcState.ApcListHead[1].Flink,
        Flink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&CmpCallbackListLock.ApcState.ApcListHead[1].Flink,
                                         (signed __int64)v9,
                                         (signed __int64)CmpCallbackListLock.ApcState.ApcListHead[1].Flink)) )
  {
    ExfReleasePushLock(&CmpCallbackListLock.ApcState.ApcListHead[1].Flink);
  }
  KeAbPostRelease((unsigned __int64)&CmpCallbackListLock.ApcState.ApcListHead[1]);
  if ( P )
    CmpDereferenceHive(P);
  return PriorityFloorCounts;
}
