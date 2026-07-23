/*
 * XREFs of ?KiAcquireSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z @ 0x1402FBA60
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 */

void __fastcall KiAcquireSharedReadyQueueLocksForRescheduleContext(struct _KI_RESCHEDULE_CONTEXT *a1)
{
  volatile __int64 *v1; // r8
  int v3; // esi
  __int64 ProcessorCount; // rdx
  volatile __int64 *v5; // rbx
  _KSHARED_READY_QUEUE **p_SharedReadyQueue; // rax
  _KI_SHARED_READY_QUEUE_LOCK_HANDLE *v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    ProcessorCount = a1->ProcessorCount;
    v5 = 0LL;
    if ( !(_BYTE)ProcessorCount )
      break;
    p_SharedReadyQueue = &a1->ProcessorEntries[0].SharedReadyQueue;
    do
    {
      if ( *p_SharedReadyQueue > (_KSHARED_READY_QUEUE *)v1 && (!v5 || *p_SharedReadyQueue < (_KSHARED_READY_QUEUE *)v5) )
        v5 = (volatile __int64 *)*p_SharedReadyQueue;
      p_SharedReadyQueue += 5;
      --ProcessorCount;
    }
    while ( ProcessorCount );
    if ( !v5 )
      break;
    v7 = &a1->SharedReadyLockQueues[v3];
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      v7->Queue.Lock = (unsigned __int64 *volatile)v5;
      v7->Queue.Next = 0LL;
      if ( !_InterlockedExchange64(v5, (__int64)v7) )
        goto LABEL_13;
      KxWaitForLockOwnerShip(v7);
      ++v3;
      v1 = v5;
    }
    else
    {
      v8 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      {
        do
          KeYieldProcessorEx(&v8);
        while ( *v5 );
      }
LABEL_13:
      ++v3;
      v1 = v5;
    }
  }
}
