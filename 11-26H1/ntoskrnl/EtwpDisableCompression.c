/*
 * XREFs of EtwpDisableCompression @ 0x1406C8138
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1402193F4 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1406C7FC4 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     EtwpRelinquishCompressionTarget @ 0x1406C8310 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpDisableCompression(__int64 a1)
{
  struct _KLOCK_ENTRIES *v2; // r9
  AutoBoost *v3; // rax
  void *v4; // rdx
  AutoBoost *v5; // rsi

  if ( *(_DWORD *)(a1 + 1444) != 1
    && _InterlockedExchange((volatile __int32 *)(a1 + 1432), 0)
    && !*(_DWORD *)(a1 + 1400)
    && KeGetEffectiveIrql() < 2u )
  {
    v3 = (AutoBoost *)KeAbPreAcquire(a1 + 1408, 0LL, 0LL, v2);
    v5 = v3;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1408), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1408), v3, a1 + 1408);
    if ( v5 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v5, v4);
      else
        *((_BYTE *)v5 + 10) = 1;
    }
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1408), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1408));
    KeAbPostRelease(a1 + 1408);
  }
}
