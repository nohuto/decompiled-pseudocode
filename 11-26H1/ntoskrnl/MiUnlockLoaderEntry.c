/*
 * XREFs of MiUnlockLoaderEntry @ 0x1404A4C7C
 * Callers:
 *     MiUnlockLoadedDataTableEntry @ 0x1404A4B98 (MiUnlockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x1404E5184 (MiEnumerateSystemImages.c)
 *     MiProtectDriverSectionPte @ 0x1406E5D50 (MiProtectDriverSectionPte.c)
 *     MiBackSystemImageWithPagefile @ 0x140864164 (MiBackSystemImageWithPagefile.c)
 *     MmFreeDriverInitialization @ 0x1408646A4 (MmFreeDriverInitialization.c)
 *     MiSplitDriverPage @ 0x140B47A14 (MiSplitDriverPage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14027A640 (ExReleaseAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14027CBB0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall MiUnlockLoaderEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  ULONG_PTR v6; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( a2 <= 1 )
    *(_QWORD *)(a1 + 240) = 0LL;
  v3 = (volatile signed __int64 *)(a1 + 232);
  if ( !a2 )
  {
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 232));
LABEL_9:
    KeAbPostRelease((unsigned __int64)v3);
    goto LABEL_13;
  }
  if ( a2 == 2 )
  {
    if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 232));
    goto LABEL_9;
  }
  v6 = a1 + 232;
  if ( a2 == 3 )
    ExReleaseAutoExpandPushLockShared(v6, 0LL);
  else
    ExReleaseAutoExpandPushLockExclusive(v6, 0LL);
LABEL_13:
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v5, v4);
  }
}
