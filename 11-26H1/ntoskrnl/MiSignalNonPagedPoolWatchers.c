/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x1406FA7D0
 * Callers:
 *     MiInitializeNonPagedPoolThresholds @ 0x1406FA760 (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x140885C60 (MiInitializeMemoryEvents.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 */

void __fastcall MiSignalNonPagedPoolWatchers(int a1)
{
  KIRQL v2; // bl
  unsigned __int64 v3; // rsi
  __int64 v4; // rbp

  v2 = 17;
  if ( !a1 )
    v2 = ExAcquireSpinLockExclusive(&dword_140E3BF00);
  if ( *(_QWORD *)&stru_140E37F48.CurrentRunTime )
  {
    v3 = qword_140E2C708;
    v4 = *(_QWORD *)&MiState;
    if ( qword_140E2C708 < (unsigned __int64)(*(_QWORD *)&MiState - 5120LL) )
    {
      if ( !*(_DWORD *)(*(_QWORD *)&stru_140E37F48.CurrentRunTime + 4LL) )
        KeSetEvent(*(PRKEVENT *)&stru_140E37F48.CurrentRunTime, 0, 0);
    }
    else if ( *(_DWORD *)(*(_QWORD *)&stru_140E37F48.CurrentRunTime + 4LL) )
    {
      KeResetEvent(*(PRKEVENT *)&stru_140E37F48.CurrentRunTime);
    }
    if ( v3 < v4 - 2048 )
    {
      if ( *(_DWORD *)(stru_140E37F48.CycleTime + 4) )
        KeResetEvent((PRKEVENT)stru_140E37F48.CycleTime);
    }
    else if ( !*(_DWORD *)(stru_140E37F48.CycleTime + 4) )
    {
      KeSetEvent((PRKEVENT)stru_140E37F48.CycleTime, 0, 0);
    }
  }
  if ( !a1 )
  {
    if ( v2 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E3BF00);
    else
      ExReleaseSpinLockExclusive(&dword_140E3BF00, v2);
  }
}
