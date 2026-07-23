/*
 * XREFs of MiComputeCrossPartitionSectionCharges @ 0x140534348
 * Callers:
 *     MiRemoveViewsFromSection @ 0x14036F4F0 (MiRemoveViewsFromSection.c)
 *     MiUnmapViewSubsections @ 0x14036F6F0 (MiUnmapViewSubsections.c)
 *     MiDecrementSubsections @ 0x140370100 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140458404 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiReleaseControlAreaCharges @ 0x14047A210 (MiReleaseControlAreaCharges.c)
 * Callees:
 *     MiGetCommittedPages @ 0x1404560C0 (MiGetCommittedPages.c)
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
