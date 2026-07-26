/*
 * XREFs of ?AddTriageBlocks@?$GlobalDataCollector@PEAU_NDIS_PROTOCOL_BLOCK@@$1?ndisProtocolList@@3PEAU1@EA@@SAXPEAXPEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x14009AB30
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall GlobalDataCollector<_NDIS_PROTOCOL_BLOCK *,&_NDIS_PROTOCOL_BLOCK * ndisProtocolList>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, &ndisProtocolList, 8uLL);
}
