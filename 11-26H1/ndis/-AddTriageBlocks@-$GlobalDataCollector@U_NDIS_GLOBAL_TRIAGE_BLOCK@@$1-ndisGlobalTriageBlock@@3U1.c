/*
 * XREFs of ?AddTriageBlocks@?$GlobalDataCollector@U_NDIS_GLOBAL_TRIAGE_BLOCK@@$1?ndisGlobalTriageBlock@@3U1@A@@SAXPEAXPEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x14009AB90
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall GlobalDataCollector<_NDIS_GLOBAL_TRIAGE_BLOCK,&_NDIS_GLOBAL_TRIAGE_BLOCK ndisGlobalTriageBlock>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, &ndisGlobalTriageBlock, 0x1F0uLL);
}
