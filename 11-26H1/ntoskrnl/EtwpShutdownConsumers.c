/*
 * XREFs of EtwpShutdownConsumers @ 0x140A6D194
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A6CBB4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140A1520C (EtwpRealtimeDisconnectAllConsumers.c)
 */

void __fastcall EtwpShutdownConsumers(__int64 a1)
{
  struct _KLOCK_ENTRIES *v2; // r9
  AutoBoost *v3; // rax
  void *v4; // rdx
  AutoBoost *v5; // rbx
  __int64 *v6; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rdx
  __int64 v9; // rtt
  PRKEVENT *v10; // rbx

  EtwpRealtimeDisconnectAllConsumers(a1);
  v3 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, v2);
  v5 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v3, a1 + 688);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v5, v4);
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  *(_DWORD *)(a1 + 816) |= 0x200u;
  if ( (*(_DWORD *)(a1 + 824) & 0x20) != 0 )
  {
    v10 = *(PRKEVENT **)(a1 + 352);
    *(_QWORD *)(a1 + 352) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
    KeSetEvent(v10[6], 0, 0);
    ObfDereferenceObject(v10);
  }
  v6 = (__int64 *)(a1 + 688);
  _m_prefetchw(v6);
  v7 = *v6;
  v8 = *v6 - 16;
  if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (v7 & 2) != 0 || (v9 = *v6, v9 != _InterlockedCompareExchange64(v6, v8, v7)) )
    ExfReleasePushLock(v6);
  KeAbPostRelease((unsigned __int64)v6);
}
