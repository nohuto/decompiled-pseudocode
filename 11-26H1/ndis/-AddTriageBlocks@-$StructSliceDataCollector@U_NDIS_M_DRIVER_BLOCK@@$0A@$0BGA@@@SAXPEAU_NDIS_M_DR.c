/*
 * XREFs of ?AddTriageBlocks@?$StructSliceDataCollector@U_NDIS_M_DRIVER_BLOCK@@$0A@$0BGA@@@SAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140093950
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructSliceDataCollector<_NDIS_M_DRIVER_BLOCK,0,352>::AddTriageBlocks(void *a1, TriageDataArray *this)
{
  return TriageDataArray::AddDataBlock(this, a1, 0x160uLL);
}
