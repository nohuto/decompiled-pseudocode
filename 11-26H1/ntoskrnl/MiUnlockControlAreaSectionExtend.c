/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x1404AF310
 * Callers:
 *     MmExtendSection @ 0x140A58080 (MmExtendSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 *     MiBuildWakeList @ 0x140477360 (MiBuildWakeList.c)
 */

void __fastcall MiUnlockControlAreaSectionExtend(unsigned __int64 a1, __int64 a2)
{
  int v2; // ebp
  volatile LONG *v5; // rdi
  __int64 *v6; // rbx
  KIRQL v7; // r11
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 *v10; // rdi
  struct _KTHREAD *CurrentThread; // rcx

  v2 = *(_DWORD *)(a2 + 8);
  KeAbPostRelease(a1);
  v5 = (volatile LONG *)(a1 + 72);
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = MiBuildWakeList(a1, *(_DWORD *)(a2 + 8));
  if ( v7 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockExclusive(v5, v7);
  if ( v6 )
  {
    do
    {
      v10 = (__int64 *)*v6;
      if ( v6 != (__int64 *)a2 )
        KeSignalGate((__int64)(v6 + 3), 1LL, v9);
      v6 = v10;
    }
    while ( v10 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 == 16 )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery((__int64)CurrentThread, v8);
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v8);
  }
}
