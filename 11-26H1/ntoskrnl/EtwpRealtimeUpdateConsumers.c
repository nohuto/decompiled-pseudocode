/*
 * XREFs of EtwpRealtimeUpdateConsumers @ 0x140A13A78
 * Callers:
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

LONG __fastcall EtwpRealtimeUpdateConsumers(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rsi
  __int64 v9; // r14
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  __int64 v12; // rtt
  __int64 v13; // rax
  _QWORD *v14; // rcx
  LONG result; // eax
  int v16; // ebp
  AutoBoost *v17; // rax
  void *v18; // rdx
  AutoBoost *v19; // rsi
  __int64 v20; // rsi
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  __int64 v23; // rtt
  _QWORD *i; // rcx

  v4 = (unsigned __int64 *)(a1 + 688);
  if ( (*(_DWORD *)(a1 + 824) & 0x20) != 0 )
  {
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
    v9 = *(_QWORD *)(a1 + 352);
    *(_QWORD *)(a1 + 352) = 0LL;
    _m_prefetchw((const void *)(a1 + 688));
    v10 = *(_QWORD *)(a1 + 688);
    v11 = v10 - 16;
    if ( (v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v11 = 0LL;
    if ( (v10 & 2) != 0
      || (v12 = *(_QWORD *)(a1 + 688),
          v12 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 688), v11, v10)) )
    {
      ExfReleasePushLock((_QWORD *)(a1 + 688));
    }
    KeAbPostRelease(a1 + 688);
    v13 = *(_QWORD *)(v9 + 40);
    *(_QWORD *)(v9 + 40) = 0LL;
    *(_OWORD *)(v13 + 80) = *(_OWORD *)(a1 + 432);
    v14 = *(_QWORD **)(a1 + 336);
    if ( *v14 != a1 + 328 )
      __fastfail(3u);
    *(_QWORD *)v9 = a1 + 328;
    *(_QWORD *)(v9 + 8) = v14;
    *v14 = v9;
    *(_QWORD *)(a1 + 336) = v9;
    ++*(_DWORD *)(a1 + 344);
    *(_BYTE *)(v9 + 90) &= ~8u;
    _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x40u);
    *(_DWORD *)(a1 + 40) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
  }
  result = *(_DWORD *)(a1 + 824);
  if ( (result & 0x10) != 0 )
  {
    v16 = -1073741162;
    v17 = (AutoBoost *)KeAbPreAcquire((__int64)v4, 0LL, 0LL, a4);
    v19 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v17, (__int64)v4);
    if ( v19 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v19, v18);
      else
        *((_BYTE *)v19 + 10) = 1;
    }
    v20 = *(_QWORD *)(a1 + 352);
    *(_QWORD *)(a1 + 352) = 0LL;
    _m_prefetchw((const void *)(a1 + 688));
    v21 = *(_QWORD *)(a1 + 688);
    v22 = v21 - 16;
    if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v22 = 0LL;
    if ( (v21 & 2) != 0
      || (v23 = *(_QWORD *)(a1 + 688),
          v23 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 688), v22, v21)) )
    {
      ExfReleasePushLock((_QWORD *)(a1 + 688));
    }
    KeAbPostRelease(a1 + 688);
    for ( i = *(_QWORD **)(a1 + 328); i != (_QWORD *)(a1 + 328); i = (_QWORD *)*i )
    {
      if ( (_QWORD *)v20 == i && (*(_BYTE *)(v20 + 90) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 824), 4u);
        *(_BYTE *)(v20 + 90) |= 1u;
        v16 = 0;
      }
    }
    *(_DWORD *)(a1 + 40) = v16;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFEF);
    return KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
  }
  return result;
}
