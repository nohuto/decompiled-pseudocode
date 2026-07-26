/*
 * XREFs of ?AddTriageBlocks@?$GlobalDataCollector@PEAU_NDIS_FILTER_DRIVER_BLOCK@@$1?ndisFilterDriverList@@3PEAU1@EA@@SAXPEAXPEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x14009AAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall GlobalDataCollector<_NDIS_FILTER_DRIVER_BLOCK *,&_NDIS_FILTER_DRIVER_BLOCK * ndisFilterDriverList>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, &ndisFilterDriverList, 8uLL);
}
