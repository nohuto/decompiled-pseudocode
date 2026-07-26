/*
 * XREFs of ?AddTriageBlocks@?$StructSliceDataCollector@U_NDIS_COMMON_OPEN_BLOCK@@$0OE@$0BAM@@@SAXPEAU_NDIS_COMMON_OPEN_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x1400BA980
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructSliceDataCollector<_NDIS_COMMON_OPEN_BLOCK,228,268>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, (void *)(a1 + 228), 0x28uLL);
}
