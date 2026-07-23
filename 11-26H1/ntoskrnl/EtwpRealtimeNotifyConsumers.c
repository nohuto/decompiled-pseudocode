/*
 * XREFs of EtwpRealtimeNotifyConsumers @ 0x140A14478
 * Callers:
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140A141BC (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpAddBinaryInfoEvents @ 0x140ABCE74 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddDebugInfoEvents @ 0x140ABD02C (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x140AE5F08 (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140B474C0 (EtwpInitializeProviderInfoBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRealtimeNotifyConsumers(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rsi
  unsigned int MaxTrackingEventBufferSize; // ebp
  _DWORD *v10; // rsi
  unsigned int v11; // ebx
  __int64 Pool2; // rax
  __int64 i; // r14
  unsigned int v15; // r12d
  __int64 *j; // rax
  __int64 **v17; // rbx
  __int64 *k; // rax

  v4 = (unsigned __int64 *)(a1 + 688);
  v6 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (__int64)v4);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
  if ( MaxTrackingEventBufferSize )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v10 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      EtwpInitializeProviderInfoBuffer(a1, Pool2, MaxTrackingEventBufferSize);
      for ( i = *(_QWORD *)(a1 + 328); i != a1 + 328; i = *(_QWORD *)i )
      {
        v15 = (*(_BYTE *)(i + 90) & 8) != 0 ? 4 : 1;
        EtwpAddDebugInfoEvents(a1, (_DWORD)v10, MaxTrackingEventBufferSize, 0, v15);
        if ( *(_QWORD *)(a1 + 1304) != a1 + 1304 && (*(_DWORD *)(a1 + 816) & 0x2000000) != 0 )
          EtwpAddBinaryInfoEvents(a1, v10, MaxTrackingEventBufferSize, v15);
        *(_BYTE *)(i + 90) |= 8u;
        if ( v10[12] > 0x48u )
        {
          EtwpRealtimeInjectEtwBuffer((_DWORD *)a1, i, (__int64)v10);
          v10[12] = 72;
        }
      }
      for ( j = *(__int64 **)(a1 + 112); j && !*((_BYTE *)j + 40); j = (__int64 *)*j )
        *((_BYTE *)j + 40) = 1;
      v17 = (__int64 **)(a1 + 96);
      for ( k = *v17; k != (__int64 *)v17; k = (__int64 *)*k )
        *((_BYTE *)k + 16) = 1;
      v11 = 0;
    }
    else
    {
      v11 = -1073741801;
    }
  }
  else
  {
    v10 = 0LL;
    v11 = -2147483622;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v11;
}
