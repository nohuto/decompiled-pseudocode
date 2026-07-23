/*
 * XREFs of EtwpSendDbgId @ 0x140832980
 * Callers:
 *     EtwpSendTraceEvent @ 0x1404A2958 (EtwpSendTraceEvent.c)
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EtwpSendBufferToDebugger @ 0x14083286C (EtwpSendBufferToDebugger.c)
 *     EtwpAddDebugInfoEvents @ 0x140ABD02C (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x140AE5F08 (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140B474C0 (EtwpInitializeProviderInfoBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpSendDbgId(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  volatile signed __int64 *v7; // rdi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rsi
  unsigned int MaxTrackingEventBufferSize; // ebp
  __int128 *v12; // rsi
  __int64 Pool2; // rax

  if ( (*(_DWORD *)(a1 + 824) & 0x800) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 824));
    v5 = *(_DWORD *)(a1 + 824);
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), v5 & 0xFFFFF7FF, v5);
    }
    while ( v6 != v5 );
    if ( (v5 & 0x800) != 0 )
    {
      v7 = (volatile signed __int64 *)(a1 + 688);
      v8 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, a4);
      v10 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v8, a1 + 688);
      if ( v10 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v10, v9);
        else
          *((_BYTE *)v10 + 10) = 1;
      }
      MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
      if ( MaxTrackingEventBufferSize )
      {
        Pool2 = ExAllocatePool2(0x40uLL);
        v12 = (__int128 *)Pool2;
        if ( Pool2 )
        {
          EtwpInitializeProviderInfoBuffer(a1, Pool2, MaxTrackingEventBufferSize);
          EtwpAddDebugInfoEvents(a1, (_DWORD)v12, MaxTrackingEventBufferSize, 0, 0);
        }
      }
      else
      {
        v12 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
      KeAbPostRelease(a1 + 688);
      if ( v12 )
      {
        EtwpSendBufferToDebugger(v12);
        ExFreePoolWithTag(v12, 0);
      }
    }
  }
}
