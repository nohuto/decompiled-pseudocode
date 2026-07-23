/*
 * XREFs of ?KiReleaseSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z @ 0x140305080
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 */

void __fastcall KiReleaseSharedReadyQueueLocksForRescheduleContext(struct _KI_RESCHEDULE_CONTEXT *a1)
{
  volatile signed __int64 *v1; // r9
  int i; // ebp
  __int64 ProcessorCount; // rdx
  volatile signed __int64 *v5; // rbx
  _KSHARED_READY_QUEUE **p_SharedReadyQueue; // rax
  __int64 v7; // r8
  _KI_SHARED_READY_QUEUE_LOCK_HANDLE *v8; // rdi
  __int64 Next; // rax
  __int64 Lock; // rdx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = 0LL;
  for ( i = 0; ; ++i )
  {
    ProcessorCount = a1->ProcessorCount;
    v5 = 0LL;
    if ( !(_BYTE)ProcessorCount )
      break;
    p_SharedReadyQueue = &a1->ProcessorEntries[0].SharedReadyQueue;
    v7 = a1->ProcessorCount;
    do
    {
      if ( *p_SharedReadyQueue > (_KSHARED_READY_QUEUE *)v1 && (!v5 || *p_SharedReadyQueue < (_KSHARED_READY_QUEUE *)v5) )
        v5 = (volatile signed __int64 *)*p_SharedReadyQueue;
      p_SharedReadyQueue += 5;
      --v7;
    }
    while ( v7 );
    if ( !v5 )
      break;
    v8 = &a1->SharedReadyLockQueues[i];
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw(v8);
      Next = (__int64)v8->Queue.Next;
      if ( !v8->Queue.Next )
      {
        if ( v8 == (_KI_SHARED_READY_QUEUE_LOCK_HANDLE *)_InterlockedCompareExchange64(
                                                           (volatile signed __int64 *)v8->Queue.Lock,
                                                           0LL,
                                                           (signed __int64)v8) )
          goto LABEL_15;
        Next = KxWaitForLockChainValid((__int64 *)&a1->SharedReadyLockQueues[i], ProcessorCount, 0LL);
      }
      v8->Queue.Next = 0LL;
      Lock = (__int64)v8->Queue.Lock;
      if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(Next + 8), Lock)) & 4) != 0 )
      {
        _InterlockedOr(v11, 0);
        KiWakeAddressAll(Next + 8, Lock, v7);
      }
    }
    else
    {
      _InterlockedAnd64(v5, 0LL);
    }
LABEL_15:
    v1 = v5;
  }
}
