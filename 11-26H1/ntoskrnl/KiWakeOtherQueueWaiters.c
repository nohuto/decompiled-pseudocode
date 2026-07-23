/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x14030DBC0
 * Callers:
 *     NtReleaseWorkerFactoryWorker @ 0x14030D100 (NtReleaseWorkerFactoryWorker.c)
 *     KeInsertQueue @ 0x1403F0500 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403F0650 (IopPassiveInterruptDpc.c)
 *     FsRtlpPostStackOverflow @ 0x1405BA9A0 (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405F3FD0 (KeInsertHeadQueue.c)
 * Callees:
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiWakeOtherQueueWaiters(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rax

  v2 = *(_QWORD **)(a2 + 16);
  do
  {
    v5 = (__int64)v2;
    v6 = (__int64)v2;
    v2 = (_QWORD *)v2[1];
    result = *(unsigned __int8 *)(v5 + 16);
    if ( (_BYTE)result == 2 )
    {
      v12 = *(_QWORD *)v6;
      if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v5 || *v2 != v5 )
        goto LABEL_17;
      *v2 = v12;
      *(_QWORD *)(v12 + 8) = v2;
      *(_BYTE *)(v5 + 17) = 5;
      KiInsertQueueInternal(*(_QWORD *)(v5 + 24), (_QWORD *)v5, v6);
    }
    else
    {
      if ( (_BYTE)result != 1 )
        return result;
      v8 = *(_QWORD *)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v2 != v5 )
LABEL_17:
        __fastfail(3u);
      *v2 = v8;
      v9 = 0;
      *(_QWORD *)(v8 + 8) = v2;
      v10 = *(unsigned __int16 *)(v5 + 18);
      v11 = *(_QWORD *)(v5 + 24);
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
      {
        do
        {
          if ( (++v9 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v9);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v11 + 64) );
      }
      if ( *(_BYTE *)(v11 + 388) == 5 )
        KiSignalThread(a1, v11, v10, v5);
      *(_QWORD *)(v11 + 64) = 0LL;
      ++*(_BYTE *)(v5 + 17);
    }
    result = a2 + 8;
  }
  while ( v2 != (_QWORD *)(a2 + 8) );
  return result;
}
