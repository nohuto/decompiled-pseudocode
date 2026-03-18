/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x1406F5AF0
 * Callers:
 *     MiPerformMemoryChange @ 0x1406E9974 (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x140CF9BA8 (MiInitializeNonPagedPool.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1406F5B60 (MiSignalNonPagedPoolWatchers.c)
 */

void __fastcall MiInitializeNonPagedPoolThresholds(int a1)
{
  KIRQL v1; // bl
  ULONG_PTR v2; // r8

  if ( a1 )
  {
    v1 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E3BD80);
  }
  else
  {
    v1 = ExAcquireSpinLockExclusive(&dword_140E3BD80);
  }
  v2 = *(_QWORD *)&stru_140E36558.ApcStateFill[40];
  if ( *(_QWORD *)&stru_140E36558.ApcStateFill[40] > qword_140E3D3D0 )
    v2 = qword_140E3D3D0;
  *(_QWORD *)&MiState = v2;
  MiSignalNonPagedPoolWatchers(1LL);
  if ( v1 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E3BD80);
  else
    ExReleaseSpinLockExclusive(&dword_140E3BD80, v1);
}
