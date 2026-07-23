/*
 * XREFs of MiControlAreaExemptFromCrossPartitionCharges @ 0x140370338
 * Callers:
 *     MiRemoveViewsFromSection @ 0x14036F4F0 (MiRemoveViewsFromSection.c)
 *     MiUnmapViewSubsections @ 0x14036F6F0 (MiUnmapViewSubsections.c)
 *     MiDecrementSubsections @ 0x140370100 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiReferenceActiveSubsection @ 0x140454670 (MiReferenceActiveSubsection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140458404 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiControlAreaRequiresCharge @ 0x1404A3414 (MiControlAreaRequiresCharge.c)
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
