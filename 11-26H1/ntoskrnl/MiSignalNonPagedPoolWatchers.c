/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x1406F5B60
 * Callers:
 *     MiInitializeNonPagedPoolThresholds @ 0x1406F5AF0 (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x14087F860 (MiInitializeMemoryEvents.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 */

void __fastcall MiSignalNonPagedPoolWatchers(int a1)
{
  KIRQL v2; // bl
  unsigned __int64 v3; // rsi
  __int64 v4; // rbp

  v2 = 17;
  if ( !a1 )
    v2 = ExAcquireSpinLockExclusive(&dword_140E3BD80);
  if ( *(_QWORD *)&stru_140E37DC8.CurrentRunTime )
  {
    v3 = qword_140E2C588;
    v4 = *(_QWORD *)&MiState;
    if ( qword_140E2C588 < (unsigned __int64)(*(_QWORD *)&MiState - 5120LL) )
    {
      if ( !*(_DWORD *)(*(_QWORD *)&stru_140E37DC8.CurrentRunTime + 4LL) )
        KeSetEvent(*(PRKEVENT *)&stru_140E37DC8.CurrentRunTime, 0, 0);
    }
    else if ( *(_DWORD *)(*(_QWORD *)&stru_140E37DC8.CurrentRunTime + 4LL) )
    {
      KeResetEvent(*(PRKEVENT *)&stru_140E37DC8.CurrentRunTime);
    }
    if ( v3 < v4 - 2048 )
    {
      if ( *(_DWORD *)(stru_140E37DC8.CycleTime + 4) )
        KeResetEvent((PRKEVENT)stru_140E37DC8.CycleTime);
    }
    else if ( !*(_DWORD *)(stru_140E37DC8.CycleTime + 4) )
    {
      KeSetEvent((PRKEVENT)stru_140E37DC8.CycleTime, 0, 0);
    }
  }
  if ( !a1 )
  {
    if ( v2 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E3BD80);
    else
      ExReleaseSpinLockExclusive(&dword_140E3BD80, v2);
  }
}
