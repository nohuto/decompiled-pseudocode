/*
 * XREFs of MiResumeBackgroundZeroing @ 0x140521D40
 * Callers:
 *     MiWakePageZeroing @ 0x14028DC7C (MiWakePageZeroing.c)
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiBackgroundZeroTimerExpired @ 0x140712F84 (MiBackgroundZeroTimerExpired.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdateBackgroundZeroingActive @ 0x1405223B0 (MiUpdateBackgroundZeroingActive.c)
 *     MiWakeZeroingThreads @ 0x140713A28 (MiWakeZeroingThreads.c)
 */

void __fastcall MiResumeBackgroundZeroing(__int64 a1, int a2, int a3)
{
  volatile LONG *v3; // rbx
  volatile LONG *v5; // rcx
  KIRQL v6; // di
  __int64 v7; // rbp

  if ( a2 != 2 )
  {
    v3 = (volatile LONG *)(a1 + 14200);
    v5 = (volatile LONG *)(a1 + 14200);
    if ( a3 )
    {
      v6 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    }
    else
    {
      v6 = ExAcquireSpinLockExclusive(v5);
    }
    v7 = *(_QWORD *)(a1 + 14192);
    if ( v7 && !*(_BYTE *)(a1 + 14216) )
    {
      *(_BYTE *)(a1 + 14216) = 1;
      MiWakeZeroingThreads(v7, 1LL);
      MiUpdateBackgroundZeroingActive(v7);
    }
    if ( v6 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    else
      ExReleaseSpinLockExclusive(v3, v6);
  }
}
