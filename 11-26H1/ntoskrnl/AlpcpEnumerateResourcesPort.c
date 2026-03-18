/*
 * XREFs of AlpcpEnumerateResourcesPort @ 0x140A75050
 * Callers:
 *     NtAlpcDeleteSectionView @ 0x140A74EE0 (NtAlpcDeleteSectionView.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     AlpcpViewSearchCallbackFunction @ 0x140A75148 (AlpcpViewSearchCallbackFunction.c)
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
