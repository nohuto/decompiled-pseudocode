/*
 * XREFs of PspReferenceSystemDll @ 0x140962FE8
 * Callers:
 *     PspMapSystemDll @ 0x140962C14 (PspMapSystemDll.c)
 *     DbgkCreateThread @ 0x1409EAD24 (DbgkCreateThread.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     PspInitPhase3 @ 0x140CD85C4 (PspInitPhase3.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObFastReferenceObject @ 0x140415390 (ObFastReferenceObject.c)
 *     ObFastReferenceObjectLocked @ 0x14048CC4C (ObFastReferenceObjectLocked.c)
 */

ULONG_PTR __fastcall PspReferenceSystemDll(signed __int64 *a1)
{
  ULONG_PTR v2; // rdi
  struct _KLOCK_ENTRIES *v3; // r9
  struct _KTHREAD *CurrentThread; // rbp
  void *v6; // rdx
  LegacyAutoBoost *v7; // rdi
  __int64 v8; // rdx

  v2 = ObFastReferenceObject(a1, 0x64537350u);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(a1 + 1), 0LL, 0LL, v3);
    if ( _InterlockedCompareExchange64(a1 + 1, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(a1 + 1, 0, v7, (struct _KTHREAD *)(a1 + 1));
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v7, v6);
      else
        *((_BYTE *)v7 + 10) = 1;
    }
    v2 = ObFastReferenceObjectLocked(a1, 0x64537350u);
    if ( _InterlockedCompareExchange64(a1 + 1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 1);
    KeAbPostRelease((unsigned __int64)(a1 + 1));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v8);
  }
  return v2;
}
