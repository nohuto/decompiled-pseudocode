/*
 * XREFs of VidSchiCompletePendingCommandInNodeHwQueue @ 0x14004992C
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1400224B0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiResetEngine @ 0x1400454F8 (VidSchiResetEngine.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140058F78 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     VidSchDdiNotifyDpcWorker @ 0x140028DF4 (VidSchDdiNotifyDpcWorker.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 */

void __fastcall VidSchiCompletePendingCommandInNodeHwQueue(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  int v6; // eax
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h]
  _DWORD v26[40]; // [rsp+78h] [rbp-90h] BYREF
  char v27; // [rsp+128h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 3016) )
  {
    if ( a3 && *(_DWORD *)(a1 + 3016) > 1u )
    {
      memset(v26, 0, sizeof(v26));
      v6 = *(unsigned __int16 *)(a1 + 4);
      v26[8] |= 0x40u;
      v26[12] = v6;
      v26[5] = 1;
      *(_QWORD *)(a1 + 280) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(a1 + 240));
      while ( *(_DWORD *)(a1 + 3016) > 1u )
      {
        VidSchiProfilePerformanceTick(16LL, v4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
        VidSchWaitForCompletionEvent(v4, v26, 0xFFFFFFFFLL);
        VidSchiProfilePerformanceTick(17LL, v4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    if ( *(_DWORD *)(a1 + 3016) )
    {
      v27 = 0;
      memset(v26, 0, 0x50uLL);
      v7 = *(unsigned __int16 *)(a1 + 4);
      v8 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(a1 + 3024) )
      {
        v9 = *(unsigned int *)(a1 + 160);
        v26[2] = *(_DWORD *)(a1 + 160);
        v26[0] = 2;
        v26[3] = a2;
        v10 = *(_QWORD *)(v8 + 696);
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 768) )
          v10 += 8 * v7;
        v11 = *(unsigned __int16 *)(*(_QWORD *)v10 + 8LL);
        v26[4] = *(unsigned __int16 *)(*(_QWORD *)v10 + 8LL);
        v12 = *(_DWORD *)(v8 + 768);
        v13 = *(_QWORD *)(v8 + 696);
        v14 = v13 + 8 * v7;
        if ( (unsigned int)v7 >= v12 )
          v14 = v13;
        v15 = *(unsigned __int16 *)(*(_QWORD *)v14 + 6LL);
        v26[5] = v15;
        WdLogSingleEntry4(4LL, a2, v9, v11, v15);
        WdLogGlobalForLineNumber = 455;
      }
      else
      {
        v26[0] = 1;
        v26[2] = a2;
        v16 = *(_QWORD *)(v8 + 696);
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 768) )
          v16 += 8 * v7;
        v17 = *(unsigned __int16 *)(*(_QWORD *)v16 + 8LL);
        v26[3] = *(unsigned __int16 *)(*(_QWORD *)v16 + 8LL);
        v18 = *(_DWORD *)(v8 + 768);
        v19 = *(_QWORD *)(v8 + 696);
        v20 = v19 + 8 * v7;
        if ( (unsigned int)v7 >= v18 )
          v20 = v19;
        v26[4] = *(unsigned __int16 *)(*(_QWORD *)v20 + 6LL);
        WdLogSingleEntry3(4LL, a2, v17, v26[4]);
        WdLogGlobalForLineNumber = 468;
      }
      v21 = *(unsigned int *)(v4 + 40);
      v22 = *(_QWORD *)(v4 + 32);
      v23 = *(_QWORD *)(v4 + 8);
      LockHandle.LockQueue.Next = (struct _KSPIN_LOCK_QUEUE *volatile)v26;
      DpSynchronizeExecution(v22, VidSchiCallNotifyInterruptAtISR, &v23, v21, &v27);
    }
  }
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v25 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 2040), (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  VidSchDdiNotifyDpcWorker(*(_QWORD *)(v4 + 8), 0);
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
}
