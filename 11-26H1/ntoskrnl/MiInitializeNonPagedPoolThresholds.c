/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x1406FA760
 * Callers:
 *     MiPerformMemoryChange @ 0x1406EE614 (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x140CFFF28 (MiInitializeNonPagedPool.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1406FA7D0 (MiSignalNonPagedPoolWatchers.c)
 */

void __fastcall MiInitializeNonPagedPoolThresholds(int a1)
{
  KIRQL v1; // bl
  ULONG_PTR v2; // r8

  if ( a1 )
  {
    v1 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E3BF00);
  }
  else
  {
    v1 = ExAcquireSpinLockExclusive(&dword_140E3BF00);
  }
  v2 = *(_QWORD *)&stru_140E366D8.ApcStateFill[40];
  if ( *(_QWORD *)&stru_140E366D8.ApcStateFill[40] > qword_140E3D550 )
    v2 = qword_140E3D550;
  *(_QWORD *)&MiState = v2;
  MiSignalNonPagedPoolWatchers(1LL);
  if ( v1 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E3BF00);
  else
    ExReleaseSpinLockExclusive(&dword_140E3BF00, v1);
}
