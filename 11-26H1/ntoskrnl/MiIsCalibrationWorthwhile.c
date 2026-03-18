/*
 * XREFs of MiIsCalibrationWorthwhile @ 0x1404CACF0
 * Callers:
 *     MiScheduleZeroPageThreads @ 0x1402A8034 (MiScheduleZeroPageThreads.c)
 *     MiMergeCalibrationResults @ 0x140710A90 (MiMergeCalibrationResults.c)
 *     MiZeroPageCalibrate @ 0x140710F80 (MiZeroPageCalibrate.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiIsCalibrationWorthwhile(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // edi
  KIRQL v8; // si
  __int64 v9; // rbp
  volatile LONG *v10; // rcx
  BOOL v11; // eax
  volatile LONG *v12; // rcx

  v4 = 0;
  if ( a4 )
  {
    v8 = 17;
    v9 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(384LL * a3 + qword_140E2D6B8 + 376);
    v10 = (volatile LONG *)(v9 + 64);
    if ( KeGetCurrentIrql() == 2 )
    {
      v8 = 17;
      ExAcquireSpinLockSharedAtDpcLevel(v10);
    }
    else
    {
      v8 = ExAcquireSpinLockShared(v10);
    }
  }
  v11 = 0;
  if ( *(_BYTE *)(a1 + 6) == 3 )
    v11 = *(_BYTE *)(a1 + 7) == 3;
  if ( !*(_BYTE *)(a1 + 5)
    || !v11
    && (!*(_DWORD *)(a1 + 32)
     || !*(_DWORD *)(a1 + 36)
     || !*(_DWORD *)(a1 + 40)
     || !*(_DWORD *)(a1 + 44)
     || a2 > *(_DWORD *)a1) )
  {
    v4 = 1;
  }
  if ( !a4 )
  {
    v12 = (volatile LONG *)(v9 + 64);
    if ( v8 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v12);
    else
      ExReleaseSpinLockShared(v12, v8);
  }
  return v4;
}
