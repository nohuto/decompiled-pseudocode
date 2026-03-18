/*
 * XREFs of PspUnlockQuotaExpansion @ 0x1403BDC0C
 * Callers:
 *     ExReturnPoolQuota @ 0x140264B30 (ExReturnPoolQuota.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403BCF90 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403BD130 (PsReturnProcessNonPagedPoolQuota.c)
 *     PspReturnResourceQuota @ 0x1403BD4F0 (PspReturnResourceQuota.c)
 *     PsReturnPoolQuota @ 0x1403BD700 (PsReturnPoolQuota.c)
 *     PspExpandQuota @ 0x1403BD8E8 (PspExpandQuota.c)
 *     PspReturnQuota @ 0x1403BD9F0 (PspReturnQuota.c)
 *     PspExpandLimit @ 0x140614CE0 (PspExpandLimit.c)
 *     PspInsertExpansionEntry @ 0x140614D5C (PspInsertExpansionEntry.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall PspUnlockQuotaExpansion(__int64 a1, KIRQL a2)
{
  volatile signed __int64 *v2; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = (volatile signed __int64 *)(a1 + 16);
  if ( *(_DWORD *)a1 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), a2);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 16));
    KeAbPostRelease((unsigned __int64)v2);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v5, v4);
    }
  }
}
