/*
 * XREFs of ?AddTriageBlocks@?$StructFieldDataCollector@U_NDIS_MINIPORT_BLOCK@@PEAUNDIS_EVENT_LOG_HANDLE__@@$0BBHI@@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140093560
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,NDIS_EVENT_LOG_HANDLE__ *,4472>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, (void *)(a1 + 4472), 8uLL);
}
