/*
 * XREFs of MiControlAreaExemptFromCrossPartitionCharges @ 0x14036E598
 * Callers:
 *     MiRemoveViewsFromSection @ 0x14036D750 (MiRemoveViewsFromSection.c)
 *     MiUnmapViewSubsections @ 0x14036D950 (MiUnmapViewSubsections.c)
 *     MiDecrementSubsections @ 0x14036E360 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x14036E5D0 (MiDecrementSubsectionViewCount.c)
 *     MiReferenceActiveSubsection @ 0x14045AE40 (MiReferenceActiveSubsection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14045ED08 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiControlAreaRequiresCharge @ 0x1404A9D84 (MiControlAreaRequiresCharge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiControlAreaExemptFromCrossPartitionCharges(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 56) & 0x30000000) == 0x10000000 )
    return 1LL;
  if ( *(_QWORD *)(a1 + 64) )
    return 0LL;
  return HIWORD(*(_DWORD *)(a1 + 92)) & 1;
}
