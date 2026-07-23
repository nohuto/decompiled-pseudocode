/*
 * XREFs of MmGetControlAreaPartition @ 0x14039EF6C
 * Callers:
 *     CcGetPartitionForSectionObject @ 0x14039EF50 (CcGetPartitionForSectionObject.c)
 *     CcDeleteSectionsForPartition @ 0x1405B4C80 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MmGetControlAreaPartition(__int64 a1)
{
  KIRQL v2; // bl
  ULONG *v3; // rdi

  if ( KeGetCurrentIrql() == 2 )
  {
    v2 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2C940);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E2C940);
  }
  if ( *(_QWORD *)a1 )
    v3 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v3 = &MiSystemPartition;
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
  else
    ExReleaseSpinLockExclusive(&dword_140E2C940, v2);
  return *((_QWORD *)v3 + 32);
}
