/*
 * XREFs of MmGetControlAreaPartition @ 0x14039D20C
 * Callers:
 *     CcGetPartitionForSectionObject @ 0x14039D1F0 (CcGetPartitionForSectionObject.c)
 *     CcDeleteSectionsForPartition @ 0x1405B2470 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MmGetControlAreaPartition(__int64 a1)
{
  KIRQL v2; // bl
  ULONG *v3; // rdi

  if ( KeGetCurrentIrql() == 2 )
  {
    v2 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2C7C0);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E2C7C0);
  }
  if ( *(_QWORD *)a1 )
    v3 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v3 = &MiSystemPartition;
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C7C0);
  else
    ExReleaseSpinLockExclusive(&dword_140E2C7C0, v2);
  return *((_QWORD *)v3 + 32);
}
