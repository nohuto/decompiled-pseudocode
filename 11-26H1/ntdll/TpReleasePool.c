/*
 * XREFs of TpReleasePool @ 0x1800C8D80
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x1800389D0 (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180039020 (TppPoolpDereferenceGlobalPool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180039020 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x180039308 (TppPoolpFree.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x1800C8FCC (TppETWPoolClose.c)
 *     TppQueueRemoveHead @ 0x1800C9060 (TppQueueRemoveHead.c)
 *     ZwShutdownWorkerFactory @ 0x180162730 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  char v2; // di
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int64 Exchange; // rax
  __int64 v6; // rax
  int i; // esi
  signed __int64 v8; // rdx
  __int64 j; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  _RTL_SRWLOCK *v12; // rdx
  const void **v13; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  signed __int64 v15; // [rsp+58h] [rbp+10h]

  v2 = 0;
  if ( !Pool
    || Pool == (PTP_POOL)TppPoolpGlobalPool
    || Pool == TppPoolpSerializedPool
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    RtlAcquireSRWLockExclusive(&Pool->ShutdownLock);
    if ( Pool->Released )
    {
      TppRaiseInvalidParameter();
    }
    else
    {
      v2 = 1;
      if ( !Pool->ShutdownInitiated )
      {
        Pool->ShutdownInitiated = 1;
        ZwShutdownWorkerFactory(Pool->WorkerFactory, (LONG *)&Pool->Refcount.Refcount);
      }
      while ( 1 )
      {
        _m_prefetchw((const void *)&Pool->QueueState);
        Exchange = Pool->QueueState.Exchange;
        LODWORD(v15) = Exchange;
        do
        {
          if ( !HIDWORD(Exchange) )
            break;
          v8 = Exchange;
          HIDWORD(v15) = HIDWORD(Exchange) - 1;
          Exchange = _InterlockedCompareExchange64(&Pool->QueueState.Exchange, v15, Exchange);
          LODWORD(v15) = Exchange;
        }
        while ( Exchange != v8 );
        if ( !HIDWORD(Exchange) )
          break;
        v6 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v6 )
            goto LABEL_15;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v6; j = (unsigned int)(j + 1) )
          {
            v10 = TppQueueRemoveHead(&Pool->TaskQueue[i][j], i, v3, v4);
            v6 = (v10 - 16) & -(__int64)(v10 != 0);
          }
        }
        if ( !v6 )
          continue;
LABEL_15:
        if ( *(_QWORD *)v6 )
        {
          v3 = *(_QWORD *)(*(_QWORD *)v6 + 8LL);
          if ( v3 )
            (*(void (__fastcall **)(__int64, PTP_POOL))(*(_QWORD *)v6 + 8LL))(v6, Pool);
        }
      }
      Pool->ReleaseCaller.ReturnAddress = retaddr;
      Pool->Released = 1;
    }
    RtlReleaseSRWLockExclusive(&Pool->ShutdownLock);
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v11 = 2147353478LL;
    if ( *(_BYTE *)v11 )
      TppETWPoolClose(Pool);
    if ( v2 )
    {
      if ( Pool == (PTP_POOL)TppPoolpGlobalPool )
      {
        v12 = &TppPoolpGlobalPoolLock;
        v13 = (const void **)&TppPoolpGlobalPool;
      }
      else
      {
        if ( Pool != TppPoolpSerializedPool )
        {
          if ( _InterlockedExchangeAdd(&Pool->Refcount.Refcount, 0xFFFFFFFF) == 1 )
            TppPoolpFree((char *)Pool);
          return;
        }
        v12 = &TppPoolpSerializedPoolLock;
        v13 = (const void **)&TppPoolpSerializedPool;
      }
      TppPoolpDereferenceGlobalPool(v13, v12);
    }
  }
}
