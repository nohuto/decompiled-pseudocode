/*
 * XREFs of KiSignalThread @ 0x14027C940
 * Callers:
 *     KiSuspendThread @ 0x14020909C (KiSuspendThread.c)
 *     KiSignalThreadForApc @ 0x14020B1E0 (KiSignalThreadForApc.c)
 *     IoSetIoCompletionEx3 @ 0x140266450 (IoSetIoCompletionEx3.c)
 *     KeInsertQueueEx @ 0x1402668A0 (KeInsertQueueEx.c)
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     IoSetIoCompletionEx2 @ 0x140267520 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x1402678E0 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x140267CA0 (KiInsertQueue.c)
 *     AlpcpQueueIoCompletionPort @ 0x140268A70 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpQueueIoCompletion @ 0x140269140 (AlpcpQueueIoCompletion.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     KiTryUnwaitThread @ 0x1402735B4 (KiTryUnwaitThread.c)
 *     KeWakeWaitChain @ 0x140273700 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x140273AF0 (ExpCommitWakeFastResource.c)
 *     ExpCommitWakeResourceShared @ 0x140273EB0 (ExpCommitWakeResourceShared.c)
 *     KiInsertQueueInternal @ 0x140274E80 (KiInsertQueueInternal.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027C200 (FsRtlReleaseHeaderMutex.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402C2440 (NtReleaseWorkerFactoryWorker.c)
 *     KiWakeOtherQueueWaiters @ 0x1402C2F00 (KiWakeOtherQueueWaiters.c)
 *     KiResumeThread @ 0x1402C60D8 (KiResumeThread.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 *     KiWakeQueueWaiter @ 0x1403F6E10 (KiWakeQueueWaiter.c)
 *     KeSetEventBoostPriorityEx @ 0x140421E18 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphoreEx @ 0x1404396D0 (KeReleaseSemaphoreEx.c)
 *     KiAlertThread @ 0x14052E3A8 (KiAlertThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KiSignalThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // cl
  char result; // al
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  char v15; // al
  __int64 v16; // rcx
  unsigned int i; // ecx
  __int64 v18; // rdx
  __int64 v19; // r9

  v6 = *(_BYTE *)(a2 + 112);
  result = 0;
  v9 = v6 & 7;
  if ( v9 == 1 || v9 == 4 )
  {
    v10 = *(_QWORD *)(a2 + 232);
    if ( v10 )
    {
      if ( (*(_BYTE *)v10 & 0x7F) == 0x15 )
      {
        *(_DWORD *)(a2 + 540) = (unsigned __int8)*(_DWORD *)(a2 + 540);
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 4LL * *(unsigned int *)(a2 + 540) + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 40));
      }
    }
    v11 = *(_QWORD *)(a2 + 712);
    if ( !v11 )
      goto LABEL_13;
    v12 = 0;
LABEL_7:
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 33744), 0LL) )
    {
      if ( *(_QWORD *)(a2 + 712) )
      {
        v13 = *(_QWORD *)(a2 + 216);
        v14 = *(_QWORD **)(a2 + 224);
        if ( *(_QWORD *)(v13 + 8) != a2 + 216 || *v14 != a2 + 216 )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        *(_QWORD *)(a2 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 33744), 0LL);
LABEL_13:
      v15 = *(_BYTE *)(a2 + 388);
      if ( v15 == 1 )
      {
        *(_DWORD *)(a2 + 116) |= 2u;
      }
      else if ( v15 == 5 )
      {
        v16 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436));
        if ( *(_BYTE *)(a2 + 391) )
          *(_QWORD *)(a2 + 1000) += v16;
        else
          *(_QWORD *)(a2 + 992) += v16;
      }
      *(_BYTE *)(a2 + 388) = 7;
      *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 11528);
      *(_QWORD *)(a1 + 11528) = a2 + 216;
      *(_QWORD *)(a2 + 200) = a3;
      *(_QWORD *)(a2 + 976) = 0LL;
      return 1;
    }
    while ( 1 )
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_36:
          HvlNotifyLongSpinWait(v12);
          goto LABEL_22;
        }
        for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
        {
          v18 = KiProcessorBlock[i];
          if ( (*(_BYTE *)(v18 + 35) & 1) != 0 )
          {
            v19 = *(_QWORD *)(v18 + 36600);
            if ( !v19 || !*(_BYTE *)(v19 + 65) || !*(_BYTE *)(v19 + 64) )
              goto LABEL_36;
          }
        }
      }
      _mm_pause();
LABEL_22:
      if ( !*(_QWORD *)(v11 + 33744) )
        goto LABEL_7;
    }
  }
  if ( a4 )
  {
    if ( (v6 & 7) == 0 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 2;
      *(_QWORD *)(a2 + 200) = a3;
      *(_QWORD *)(a2 + 976) = 0LL;
      *(_BYTE *)(a4 + 17) = 0;
      return 1;
    }
    if ( v9 == 5 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 6;
    }
    else if ( v9 == 3 )
    {
      *(_BYTE *)(a4 + 17) = 2;
    }
  }
  return result;
}
