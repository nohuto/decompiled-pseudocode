/*
 * XREFs of AlpcpEnumerateResourcesPort @ 0x140A7DD70
 * Callers:
 *     NtAlpcDeleteSectionView @ 0x140A7DC00 (NtAlpcDeleteSectionView.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     AlpcpViewSearchCallbackFunction @ 0x140A7DE68 (AlpcpViewSearchCallbackFunction.c)
 */

__int64 __fastcall AlpcpEnumerateResourcesPort(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // esi
  void *v7; // rdx
  LegacyAutoBoost *v8; // rbx
  __int64 *i; // rbx

  v5 = 0;
  v8 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 328, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 328), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 328), 0, v8, (struct _KTHREAD *)(a1 + 328));
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  for ( i = *(__int64 **)(a1 + 336); i != (__int64 *)(a1 + 336); i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 17) == 6 )
    {
      v5 = AlpcpViewSearchCallbackFunction(i + 6, a4);
      if ( v5 < 0 )
        break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 328), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 328));
  KeAbPostRelease(a1 + 328);
  return (unsigned int)v5;
}
