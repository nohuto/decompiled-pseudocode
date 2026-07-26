/*
 * XREFs of ?AddTriageBlocks@?$StructFieldDataCollector@U_NDIS_COMMON_OPEN_BLOCK@@PEAUNDIS_NBL_TRACKER_HANDLE__@@$0CEI@@@SAXPEAU_NDIS_COMMON_OPEN_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x1400BA920
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructFieldDataCollector<_NDIS_COMMON_OPEN_BLOCK,NDIS_NBL_TRACKER_HANDLE__ *,584>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, (void *)(a1 + 584), 8uLL);
}
