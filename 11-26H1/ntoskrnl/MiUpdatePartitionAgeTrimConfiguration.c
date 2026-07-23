/*
 * XREFs of MiUpdatePartitionAgeTrimConfiguration @ 0x1404CC9D4
 * Callers:
 *     MiUpdatePartitionMemoryUsage @ 0x1402A60BC (MiUpdatePartitionMemoryUsage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPagesInChildPartitions @ 0x1404C8AA8 (MiPagesInChildPartitions.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1406FC6DC (MiInitializeWorkingSetManagerParameters.c)
 */

void __fastcall MiUpdatePartitionAgeTrimConfiguration(__int64 a1)
{
  unsigned __int64 v2; // rsi
  KIRQL v3; // al
  volatile LONG *v4; // rcx

  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    v2 = MiPagesInChildPartitions();
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 272));
    if ( *(_QWORD *)(a1 + 22288) <= v2 )
    {
      *(_QWORD *)(a1 + 18608) = -1LL;
    }
    else if ( *(_QWORD *)(a1 + 18608) != v2 )
    {
      *(_QWORD *)(a1 + 18608) = v2;
      *(_BYTE *)(a1 + 12) = 1;
    }
    v4 = (volatile LONG *)(a1 + 272);
    if ( v3 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    else
      ExReleaseSpinLockExclusive(v4, v3);
  }
  if ( *(_BYTE *)(a1 + 12) )
    MiInitializeWorkingSetManagerParameters(a1);
}
