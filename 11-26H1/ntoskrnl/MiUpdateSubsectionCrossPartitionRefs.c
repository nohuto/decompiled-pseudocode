/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x14050BCB8
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x1402EDF10 (MiIncrementSubsectionViewCount.c)
 *     MiReferenceSubsection @ 0x1402EE060 (MiReferenceSubsection.c)
 *     MiRemoveViewsFromSection @ 0x14036F4F0 (MiRemoveViewsFromSection.c)
 *     MiUnmapViewSubsections @ 0x14036F6F0 (MiUnmapViewSubsections.c)
 *     MiDecrementSubsections @ 0x140370100 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiReleaseSubsectionCharges @ 0x14037065C (MiReleaseSubsectionCharges.c)
 *     MiReferenceActiveSubsection @ 0x140454670 (MiReferenceActiveSubsection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140458404 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDeleteControlArea @ 0x140481D20 (MiDeleteControlArea.c)
 *     MiMarkSubsectionsStatic @ 0x140482BB0 (MiMarkSubsectionsStatic.c)
 *     MiMarkSubsectionsDynamic @ 0x1406FCDB4 (MiMarkSubsectionsDynamic.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiUpdateSubsectionCrossPartitionRefs(__int64 *a1, int a2, __int16 a3)
{
  __int64 v3; // rbx
  KIRQL v4; // dl

  *((_DWORD *)a1 + 12) = a2 ^ (*((_DWORD *)a1 + 12) ^ a2) & 0xC0000000;
  if ( a2 == 0x3FFFFFFF )
  {
    v3 = *a1;
    if ( (a3 & 0x200) != 0 )
      v4 = 17;
    else
      v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    *(_DWORD *)(v3 + 56) |= 0x8000000u;
    if ( v4 != 17 )
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v4);
  }
}
