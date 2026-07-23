/*
 * XREFs of CmpInitializeTransactions @ 0x140CF4358
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 *CmpInitializeTransactions()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r8
  struct _LIST_ENTRY *v2; // r10
  _QWORD *v3; // rdx
  const char *v4; // rax
  __int64 v5; // rax
  int v6; // r9d
  __int64 v7; // rax
  __int64 *result; // rax
  _BYTE v9[2]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+22h] [rbp-16h]

  CmpRmListLock.Count = 1;
  CmpRmListLock.Owner = 0LL;
  qword_140EF9C78 = (__int64)&CmpRmListHead;
  CmpRmListHead = (__int64)&CmpRmListHead;
  CmpRmListLock.Event.Header.WaitListHead.Blink = &CmpRmListLock.Event.Header.WaitListHead;
  CmpRmListLock.Event.Header.WaitListHead.Flink = &CmpRmListLock.Event.Header.WaitListHead;
  CmpTransactionListLock.Event.Header.WaitListHead.Blink = &CmpTransactionListLock.Event.Header.WaitListHead;
  CmpTransactionListLock.Event.Header.WaitListHead.Flink = &CmpTransactionListLock.Event.Header.WaitListHead;
  CmpLazyCommitWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpLazyCommitWorker;
  qword_140EF9E88 = (__int64)&CmpLazyCommitListHead;
  CmpLazyCommitListHead = (__int64)&CmpLazyCommitListHead;
  CmpRmListLock.Contention = 0;
  LOWORD(CmpRmListLock.Event.Header.Lock) = 1;
  CmpRmListLock.Event.Header.Size = 6;
  CmpRmListLock.Event.Header.SignalState = 0;
  CmpTransactionListLock.Count = 1;
  CmpTransactionListLock.Owner = 0LL;
  CmpTransactionListLock.Contention = 0;
  LOWORD(CmpTransactionListLock.Event.Header.Lock) = 1;
  CmpTransactionListLock.Event.Header.Size = 6;
  CmpTransactionListLock.Event.Header.SignalState = 0;
  CmpTransactionInitializingEvent = 0LL;
  CmpLazyCommitWorkItem.Parameter = 0LL;
  CmpLazyCommitWorkItem.List.Flink = 0LL;
  _mm_lfence();
  if ( stru_140E62450.ThreadListEntry.Blink == CmpRmListLock.Owner )
  {
    v0 = __rdtsc();
    v1 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v0) << 32) | (unsigned int)v0) >> 4)) ^ 0xFA5LL;
    stru_140E62450.ThreadListEntry.Blink = (struct _LIST_ENTRY *)v1;
    if ( !v1 )
    {
      v1 = 1LL;
      stru_140E62450.ThreadListEntry.Blink = (struct _LIST_ENTRY *)1;
    }
    v2 = (struct _LIST_ENTRY *)((41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x537LL);
    stru_140E62450.MutantListHead.Flink = v2;
    __sidt(v9);
    v3 = (_QWORD *)v10;
    if ( v10 < v10 + 848 )
    {
      v4 = (const char *)v10;
      do
      {
        _mm_prefetch(v4, 0);
        v4 += 64;
      }
      while ( (unsigned __int64)v4 < v10 + 848 );
    }
    v5 = 106LL;
    v6 = 848;
    do
    {
      v1 = __ROR8__(v1 - *v3++, (char)v2);
      v6 -= 8;
      --v5;
    }
    while ( v5 );
    for ( ; v6; --v6 )
    {
      v7 = *(unsigned __int8 *)v3;
      v3 = (_QWORD *)((char *)v3 + 1);
      v1 = __ROR8__(v1 - v7, (char)v2);
    }
    *(_QWORD *)&stru_140E62450.AbWaitEntryCount = v1;
    stru_140E62450.MutantListHead.Blink = (struct _LIST_ENTRY *)(KiQueryUnbiasedInterruptTime()
                                                               + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                                                               + 288000000000LL);
  }
  CmpLazyCommitTimer = 8LL;
  qword_140EF9E58 = (__int64)CmpLazyCommitDpcRoutine;
  qword_140EF9EB0 = (__int64)&qword_140EF9EA8;
  qword_140EF9EA8 = (__int64)&qword_140EF9EA8;
  qword_140EF9D28 = (__int64)&CmpDelayFreeRMListHead;
  CmpDelayFreeRMListHead = &CmpDelayFreeRMListHead;
  CmpDelayFreeRMLock.Event.Header.WaitListHead.Blink = &CmpDelayFreeRMLock.Event.Header.WaitListHead;
  CmpDelayFreeRMLock.Event.Header.WaitListHead.Flink = &CmpDelayFreeRMLock.Event.Header.WaitListHead;
  CmpDelayFreeRMWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpDelayFreeRMWorker;
  qword_140EF9D58 = (__int64)CmpDelayFreeRMDpcRoutine;
  qword_140EF9D90 = (__int64)&qword_140EF9D88;
  qword_140EF9D88 = (__int64)&qword_140EF9D88;
  result = &CmpLightTransactionList;
  CmpDelayFreeRMTimer = 8LL;
  qword_140EF9E28 = (__int64)&CmpLightTransactionList;
  CmpLightTransactionList = (__int64)&CmpLightTransactionList;
  CmpLazyCommitDpc = 275;
  qword_140EF9E60 = 0LL;
  qword_140EF9E78 = 0LL;
  qword_140EF9E50 = 0LL;
  qword_140EF9EB8 = 0LL;
  dword_140EF9EDC = 0;
  word_140EF9ED8 = 0;
  byte_140EF9EDB = 0;
  CmpDelayFreeRMLock.Count = 1;
  CmpDelayFreeRMLock.Owner = 0LL;
  CmpDelayFreeRMLock.Contention = 0;
  LOWORD(CmpDelayFreeRMLock.Event.Header.Lock) = 1;
  CmpDelayFreeRMLock.Event.Header.Size = 6;
  CmpDelayFreeRMLock.Event.Header.SignalState = 0;
  CmpDelayFreeRMWorkItem.Parameter = 0LL;
  CmpDelayFreeRMWorkItem.List.Flink = 0LL;
  CmpDelayFreeRMDpc = 275;
  qword_140EF9D60 = 0LL;
  qword_140EF9D78 = 0LL;
  qword_140EF9D50 = 0LL;
  qword_140EF9D98 = 0LL;
  dword_140EF9DBC = 0;
  word_140EF9DB8 = 0;
  byte_140EF9DBB = 0;
  return result;
}
