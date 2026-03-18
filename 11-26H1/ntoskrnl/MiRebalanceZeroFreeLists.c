/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x1404B83A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiPruneStandbyPages @ 0x1402C8780 (MiPruneStandbyPages.c)
 *     MiFreeZeroPagesNeeded @ 0x1402C8C6C (MiFreeZeroPagesNeeded.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
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
    for ( j = 0; j < (unsigned __int8)byte_140E2D718; ++j )
    {
      v4 = MiFreeZeroPagesNeeded(a1, i, j);
      if ( v4 )
        MiPruneStandbyPages(a1, i, j, v4);
    }
  }
  v5 = *(_QWORD *)(a1 + 256);
  v6 = ExAcquireSpinLockExclusive(&dword_140E2EB80);
  *(_QWORD *)(a1 + 17320) = 0LL;
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EB80);
  else
    ExReleaseSpinLockExclusive(&dword_140E2EB80, v6);
  PsDereferencePartition(v5);
}
