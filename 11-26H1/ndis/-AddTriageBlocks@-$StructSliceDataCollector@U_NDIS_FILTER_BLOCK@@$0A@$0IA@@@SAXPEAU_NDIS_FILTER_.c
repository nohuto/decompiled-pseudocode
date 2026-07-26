/*
 * XREFs of ?AddTriageBlocks@?$StructSliceDataCollector@U_NDIS_FILTER_BLOCK@@$0A@$0IA@@@SAXPEAU_NDIS_FILTER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x1400937A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructSliceDataCollector<_NDIS_FILTER_BLOCK,0,128>::AddTriageBlocks(void *a1, TriageDataArray *this)
{
  return TriageDataArray::AddDataBlock(this, a1, 0x80uLL);
}
