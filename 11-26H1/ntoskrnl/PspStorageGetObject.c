/*
 * XREFs of PspStorageGetObject @ 0x140A7E904
 * Callers:
 *     PsGetSiloContext @ 0x14049B0B0 (PsGetSiloContext.c)
 *     PsFreeSiloContextSlot @ 0x1407EE620 (PsFreeSiloContextSlot.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PspGetStorageArrayIfPossible @ 0x14044EE30 (PspGetStorageArrayIfPossible.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  v13[0] = 0LL;
  result = PspGetStorageArrayIfPossible(a1, a2, &v14, v13);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (signed __int64 *)(v13[0] + 16LL * v14);
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12);
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
