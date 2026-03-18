/*
 * XREFs of EtwpFreeCompression @ 0x140423294
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A6CBB4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeRemoveQueueDpcEx @ 0x140423370 (KeRemoveQueueDpcEx.c)
 *     EtwpFreePlaceholderList @ 0x1404234CC (EtwpFreePlaceholderList.c)
 *     EtwpRelinquishCompressionTarget @ 0x1406C8310 (EtwpRelinquishCompressionTarget.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeCompression(__int64 a1)
{
  struct _KLOCK_ENTRIES *v2; // r9
  void *v3; // rcx
  void *v4; // rcx
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rsi

  KeRemoveQueueDpcEx(a1 + 1456, 0LL);
  if ( *(_DWORD *)(a1 + 1432) && (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    v5 = (AutoBoost *)KeAbPreAcquire(a1 + 1408, 0LL, 0LL, v2);
    v7 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1408), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1408), v5, a1 + 1408);
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v7, v6);
      else
        *((_BYTE *)v7 + 10) = 1;
    }
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1408), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1408));
    KeAbPostRelease(a1 + 1408);
    _InterlockedExchange((volatile __int32 *)(a1 + 1432), 0);
  }
  v3 = *(void **)(a1 + 1424);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(void **)(a1 + 1416);
  if ( !v4 || (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
    EtwpFreePlaceholderList(a1);
  else
    ExFreePoolWithTag(v4, 0);
}
