/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x140512248
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x14030BE90 (MiIncrementSubsectionViewCount.c)
 *     MiReferenceSubsection @ 0x14030BFE0 (MiReferenceSubsection.c)
 *     MiRemoveViewsFromSection @ 0x14036D750 (MiRemoveViewsFromSection.c)
 *     MiUnmapViewSubsections @ 0x14036D950 (MiUnmapViewSubsections.c)
 *     MiDecrementSubsections @ 0x14036E360 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x14036E5D0 (MiDecrementSubsectionViewCount.c)
 *     MiReleaseSubsectionCharges @ 0x14036E8BC (MiReleaseSubsectionCharges.c)
 *     MiReferenceActiveSubsection @ 0x14045AE40 (MiReferenceActiveSubsection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14045ED08 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDeleteControlArea @ 0x1404881E0 (MiDeleteControlArea.c)
 *     MiMarkSubsectionsStatic @ 0x140489070 (MiMarkSubsectionsStatic.c)
 *     MiMarkSubsectionsDynamic @ 0x1406F80E4 (MiMarkSubsectionsDynamic.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
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
