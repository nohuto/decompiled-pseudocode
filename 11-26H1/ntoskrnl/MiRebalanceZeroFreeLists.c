/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x1404B1BD0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiPruneStandbyPages @ 0x1402AA540 (MiPruneStandbyPages.c)
 *     MiFreeZeroPagesNeeded @ 0x1402AAA2C (MiFreeZeroPagesNeeded.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 */

void __fastcall MiRebalanceZeroFreeLists(__int64 a1)
{
  unsigned int i; // ebx
  unsigned __int8 j; // di
  __int64 v4; // rax
  __int64 v5; // rbx
  KIRQL v6; // al

  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    for ( j = 0; j < (unsigned __int8)byte_140E2D898; ++j )
    {
      v4 = MiFreeZeroPagesNeeded(a1, i, j);
      if ( v4 )
        MiPruneStandbyPages(a1, i, j, v4);
    }
  }
  v5 = *(_QWORD *)(a1 + 256);
  v6 = ExAcquireSpinLockExclusive(&dword_140E2ED00);
  *(_QWORD *)(a1 + 17320) = 0LL;
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
  else
    ExReleaseSpinLockExclusive(&dword_140E2ED00, v6);
  PsDereferencePartition(v5);
}
