/*
 * XREFs of PspStorageGetObject @ 0x140A84774
 * Callers:
 *     PsGetSiloContext @ 0x140494C00 (PsGetSiloContext.c)
 *     PsFreeSiloContextSlot @ 0x1407F4180 (PsFreeSiloContextSlot.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PspGetStorageArrayIfPossible @ 0x140446F60 (PspGetStorageArrayIfPossible.c)
 */

__int64 __fastcall PspStorageGetObject(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v7; // rbx
  void *v8; // rdx
  LegacyAutoBoost *v9; // rdi
  unsigned __int64 v10; // rdi
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0;
  v11[0] = 0LL;
  result = PspGetStorageArrayIfPossible(a1, a2, &v12, v11);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (signed __int64 *)(v11[0] + 16LL * v12);
    --CurrentThread->KernelApcDisable;
    v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v7, 0LL, 0LL, v5);
    if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v7, 0, v9, (struct _KTHREAD *)v7);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v8);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    v10 = v7[1] & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v10 )
      PsReferenceSiloContext((void *)(v7[1] & 0xFFFFFFFFFFFFFFFEuLL));
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v7);
    KeAbPostRelease((unsigned __int64)v7);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v10 )
    {
      *a3 = v10;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
