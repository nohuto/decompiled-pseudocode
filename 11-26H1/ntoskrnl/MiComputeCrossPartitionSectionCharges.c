/*
 * XREFs of MiComputeCrossPartitionSectionCharges @ 0x140531EA8
 * Callers:
 *     MiRemoveViewsFromSection @ 0x14036D750 (MiRemoveViewsFromSection.c)
 *     MiUnmapViewSubsections @ 0x14036D950 (MiUnmapViewSubsections.c)
 *     MiDecrementSubsections @ 0x14036E360 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x14036E5D0 (MiDecrementSubsectionViewCount.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14045ED08 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiReleaseControlAreaCharges @ 0x1404808D0 (MiReleaseControlAreaCharges.c)
 * Callees:
 *     MiGetCommittedPages @ 0x14045C518 (MiGetCommittedPages.c)
 */

__int64 __fastcall MiComputeCrossPartitionSectionCharges(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax

  v2 = *a1;
  v3 = *(_DWORD *)(v2 + 56);
  if ( (v3 & 0x20) != 0 )
    return *(_QWORD *)(v2 + 120);
  if ( (v3 & 0x80u) != 0 )
    return (unsigned int)(*((_DWORD *)a1 + 11) - *((_DWORD *)a1 + 13));
  return MiGetCommittedPages((_QWORD *)v2);
}
