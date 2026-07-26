/*
 * XREFs of ?AddTriageBlocks@?$GlobalDataCollector@PEAU_NDIS_MINIPORT_BLOCK@@$1?ndisMiniportList@@3PEAU1@EA@@SAXPEAXPEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x14009AAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall GlobalDataCollector<_NDIS_MINIPORT_BLOCK *,&_NDIS_MINIPORT_BLOCK * ndisMiniportList>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, &ndisMiniportList, 8uLL);
}
