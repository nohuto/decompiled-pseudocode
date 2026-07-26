/*
 * XREFs of ?AddTriageBlocks@?$GlobalDataCollector@PEAU_NDIS_M_DRIVER_BLOCK@@$1?ndisMiniDriverList@@3PEAU1@EA@@SAXPEAXPEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x14009AB00
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall GlobalDataCollector<_NDIS_M_DRIVER_BLOCK *,&_NDIS_M_DRIVER_BLOCK * ndisMiniDriverList>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, &ndisMiniDriverList, 8uLL);
}
