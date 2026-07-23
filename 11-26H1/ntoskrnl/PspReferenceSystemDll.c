/*
 * XREFs of PspReferenceSystemDll @ 0x140A08E70
 * Callers:
 *     DbgkCreateThread @ 0x1409E74F4 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x140A08A9C (PspMapSystemDll.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 *     PspInitPhase3 @ 0x140CDE944 (PspInitPhase3.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ObFastReferenceObject @ 0x1404099C0 (ObFastReferenceObject.c)
 *     ObFastReferenceObjectLocked @ 0x14048678C (ObFastReferenceObjectLocked.c)
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
