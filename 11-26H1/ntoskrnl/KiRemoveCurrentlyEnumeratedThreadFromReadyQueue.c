/*
 * XREFs of KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140338300
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x140307490 (-KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 *     KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x1403075C0 (KiUpdateLocalReadyQueueStatisticsOnRemoval.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140338648 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1403387BC (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 */

void __fastcall KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v5; // rsi
  struct _KPRCB *v6; // rbx
  int v7; // ecx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  unsigned int v12; // esi
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  int v20; // ecx
  char v21; // al
  __int64 v22; // rax

  v3 = *(unsigned __int8 *)(a1 + 8);
  v5 = a2 + 216;
  v6 = *(struct _KPRCB **)(a1 + 48 * (*(unsigned __int8 *)(a1 + 10) + 1LL));
  if ( *(_BYTE *)(a1 + 13) == 2 )
  {
    v16 = *(_QWORD *)(a1 + 32);
    v17 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)v5 == v16 && *(_QWORD *)(a2 + 224) == v16 )
      KiAdvanceReadyQueueEnumeratorToNextList((struct _KI_READY_QUEUE_ENUMERATOR *)a1);
    else
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
    v18 = *(_QWORD **)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
      goto LABEL_27;
    v19 = *(_QWORD **)(a2 + 224);
    if ( *v19 != v5 )
      goto LABEL_27;
    *v19 = v18;
    v18[1] = v19;
    if ( v19 != v18
      || (v20 = *(unsigned __int16 *)(v17 + 136) ^ (1 << v3),
          v21 = *(_BYTE *)(v17 + 128) & 3,
          *(_WORD *)(v17 + 136) = v20,
          v21 != 1) )
    {
LABEL_48:
      *(_DWORD *)(a2 + 116) &= ~0x2000u;
      *(_QWORD *)(a2 + 944) = 0LL;
      return;
    }
    if ( (_WORD)v20 )
    {
LABEL_53:
      KiResortScbQueue(v6, (struct _KSCB *)v17, 1u);
      goto LABEL_48;
    }
    v22 = *(_QWORD *)(v17 + 424);
    if ( (*(_BYTE *)(v17 + 432) & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_55;
      v22 ^= v17 + 424;
    }
    if ( v22 )
      goto LABEL_53;
LABEL_55:
    KiRemoveSchedulingGroupQueue(v6, (struct _KSCB *)v17, 1u);
    goto LABEL_48;
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v7 = *(unsigned __int8 *)(a1 + 12);
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v7 != 1 )
      return;
    if ( ((*(unsigned __int8 *)(a1 + 11) - 1) & *(unsigned __int8 *)(a1 + 11)) != 0 )
      _bittestandset(&v6->AffinitizedSelectionMask, v3);
    SharedReadyQueue = v6->SharedReadyQueue;
    if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
    v9 = *(_QWORD **)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) == v5 )
    {
      v10 = *(_QWORD **)(a2 + 224);
      if ( *v10 == v5 )
      {
        *v10 = v9;
        v9[1] = v10;
        if ( v10 == v9 )
          SharedReadyQueue->ReadySummary &= ~(1 << v3);
        if ( SharedReadyQueue->ReadyThreadCount-- == 1 )
          _InterlockedAnd64(
            (volatile signed __int64 *)&SharedReadyQueue->SubNode->StealableSharedReadyQueues,
            ~SharedReadyQueue->Affinity);
        SharedReadyQueue->ReadyQueueExpectedRunTime -= *(unsigned int *)(a2 + 1784);
        if ( *(_QWORD *)(a2 + 1792) == SharedReadyQueue->SoftParkElectionGeneration )
        {
          v12 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&SharedReadyQueue->SoftParkElectionLock, 0LL) )
          {
            do
            {
              if ( (++v12 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v12);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( SharedReadyQueue->SoftParkElectionLock );
          }
          if ( *(_QWORD *)(a2 + 1792) == SharedReadyQueue->SoftParkElectionGeneration )
          {
            --SharedReadyQueue->SoftParkElectionThreadCount;
            SharedReadyQueue->SoftParkElectionRunTime -= *(unsigned int *)(a2 + 1788);
            if ( !SharedReadyQueue->SoftParkElectionThreadCount )
              SharedReadyQueue->SoftParkElectionAffinityStats.AffinitySummary = 0LL;
            v13 = *(unsigned __int8 *)(a2 + 1829)
                + 8 * (*(unsigned __int8 *)(a2 + 1830) + 2LL * *(unsigned __int8 *)(a2 + 1828));
            SharedReadyQueue->SoftParkElectionHeteroStats.ExpectedRuntimeByClass[0][0][v13] -= *(unsigned int *)(a2 + 1788);
          }
          _InterlockedAnd64((volatile signed __int64 *)&SharedReadyQueue->SoftParkElectionLock, 0LL);
        }
        return;
      }
    }
LABEL_27:
    __fastfail(3u);
  }
  if ( ((*(unsigned __int8 *)(a1 + 11) - 1) & *(unsigned __int8 *)(a1 + 11)) != 0 )
    _bittestandreset(&v6->AffinitizedSelectionMask, v3);
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
  v14 = *(_QWORD **)v5;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
    goto LABEL_27;
  v15 = *(_QWORD **)(a2 + 224);
  if ( *v15 != v5 )
    goto LABEL_27;
  *v15 = v14;
  v14[1] = v15;
  if ( v15 == v14 )
    v6->ReadySummary &= ~(1 << v3);
  KiUpdateLocalReadyQueueStatisticsOnRemoval((__int64)v6, a2);
}
