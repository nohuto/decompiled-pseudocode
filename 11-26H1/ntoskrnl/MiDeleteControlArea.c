/*
 * XREFs of MiDeleteControlArea @ 0x140481D20
 * Callers:
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     MiDereferenceControlAreaProbe @ 0x140481CEC (MiDereferenceControlAreaProbe.c)
 *     MiDeleteControlAreaList @ 0x14049CF38 (MiDeleteControlAreaList.c)
 *     MiPrepareToFlushSubsection @ 0x1404E5300 (MiPrepareToFlushSubsection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiDecrementControlAreaCount @ 0x1404A9360 (MiDecrementControlAreaCount.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDeleteSubsection @ 0x1404D7A78 (MiDeleteSubsection.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14050BCB8 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     MiFreeRelocations @ 0x140AA79E0 (MiFreeRelocations.c)
 *     MiDeleteFileExtents @ 0x140AC5218 (MiDeleteFileExtents.c)
 *     SeReleaseImageValidationContext @ 0x140AFE304 (SeReleaseImageValidationContext.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteControlArea(char *P)
{
  __int64 v1; // r14
  int v2; // edx
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // r15
  KIRQL v10; // r13
  volatile LONG *v11; // rcx

  v1 = 0LL;
  v2 = *((_DWORD *)P + 14);
  v4 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*((_DWORD *)P + 15) & 0x3FF));
  v5 = v4 + 2120;
  if ( (v2 & 0x20) != 0 )
  {
    v6 = *((_QWORD *)P + 12) & 0xFFFFFFFFFFFFFFF8uLL;
    v7 = *(_QWORD *)(v6 + 40);
    if ( (v7 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFFFFFFFFF8LL )
      SeReleaseImageValidationContext(v7 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( *(_QWORD *)(v6 + 32) )
      MiFreeRelocations(P);
  }
  else if ( (v2 & 0x80u) == 0 )
  {
    v5 = v4 + 2128;
  }
  else
  {
    v8 = *((_QWORD *)P + 18);
    if ( v8 )
    {
      do
      {
        v9 = *(_QWORD *)(v8 + 16);
        if ( (*(_DWORD *)(v8 + 32) & 0x10000) != 0 && (*(_DWORD *)(v8 + 48) & 0x3FFFFFFF) != 0 )
        {
          v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
          MiUpdateSubsectionCrossPartitionRefs(v8, 1LL);
          v1 += MiDecrementSubsectionViewCount(v8, 12);
          v11 = (volatile LONG *)(P + 72);
          if ( v10 == 17 )
            ExReleaseSpinLockExclusiveFromDpcLevel(v11);
          else
            ExReleaseSpinLockExclusive(v11, v10);
        }
        MiDeleteSubsection(v8);
        v8 = v9;
      }
      while ( v9 );
      v5 = v4 + 2120;
      if ( v1 )
        MiReturnCrossPartitionSectionCharges(v4, 1LL, v1);
    }
  }
  MiDecrementControlAreaCount(v4, v5);
  MiDeleteFileExtents(P);
  ExFreePoolWithTag(*(PVOID *)P, 0);
  ExFreePoolWithTag(P, 0);
}
