/*
 * XREFs of ?AddTriageBlocks@?$StructSliceDataCollector@U_NDIS_MINIPORT_BLOCK@@$0HPI@$0IAI@@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140093890
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructSliceDataCollector<_NDIS_MINIPORT_BLOCK,2040,2056>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, (void *)(a1 + 2040), 0x10uLL);
}
