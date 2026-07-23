/*
 * XREFs of MiBackgroundZeroTimerExpired @ 0x140712F84
 * Callers:
 *     MiNodeZeroConductor @ 0x140B29DD0 (MiNodeZeroConductor.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiPeriodicZeroingNeeded @ 0x1402A58F4 (MiPeriodicZeroingNeeded.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiResumeBackgroundZeroing @ 0x140521D40 (MiResumeBackgroundZeroing.c)
 */

void __fastcall MiBackgroundZeroTimerExpired(__int64 a1)
{
  __int64 v2; // rdi
  KIRQL v3; // al
  int v4; // ebx
  volatile LONG *v5; // rcx
  char v6; // r14

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 56320LL * *(unsigned int *)(a1 + 56);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 14200));
  v4 = 0;
  v5 = (volatile LONG *)(v2 + 14200);
  *(_BYTE *)(a1 + 160) = 0;
  v6 = *(_BYTE *)(v2 + 14216);
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockExclusive(v5, v3);
  if ( !v6 )
  {
    if ( !*(_BYTE *)(a1 + 161) )
      v4 = MiPeriodicZeroingNeeded(v2);
    MiResumeBackgroundZeroing(v2, v4, 0);
  }
}
