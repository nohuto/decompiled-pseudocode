/*
 * XREFs of MiPartitionUpdateFlags @ 0x1406F5624
 * Callers:
 *     MmManagePartitionUpdateAttributes @ 0x140883948 (MmManagePartitionUpdateAttributes.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiPartitionUpdateFlags(__int64 a1, unsigned int a2, int a3)
{
  KIRQL v6; // al

  v6 = ExAcquireSpinLockExclusive(&dword_140E2ED00);
  if ( a3 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 4), a2);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 4), ~a2);
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
  else
    ExReleaseSpinLockExclusive(&dword_140E2ED00, v6);
}
