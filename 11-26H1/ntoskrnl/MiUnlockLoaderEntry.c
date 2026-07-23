/*
 * XREFs of MiUnlockLoaderEntry @ 0x14049E30C
 * Callers:
 *     MiUnlockLoadedDataTableEntry @ 0x14049E228 (MiUnlockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x1404DE724 (MiEnumerateSystemImages.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 *     MiBackSystemImageWithPagefile @ 0x14086A544 (MiBackSystemImageWithPagefile.c)
 *     MmFreeDriverInitialization @ 0x14086AA84 (MmFreeDriverInitialization.c)
 *     MiSplitDriverPage @ 0x140B497A8 (MiSplitDriverPage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x140279BB0 (ExReleaseAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14027C120 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
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
    && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v5, v4);
  }
}
