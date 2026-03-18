/*
 * XREFs of ?MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z @ 0x1800CEE50
 * Callers:
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800CEC20 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBatchOptimizer::MatchStateToHomogeneousLayer(
        const struct SharedStateLayer *a1,
        const struct SharedStateLayer::StateBlock *a2)
{
  int v2; // eax

  if ( *(_QWORD *)a1 != *(_QWORD *)a2 )
    return 0;
  if ( !*((_QWORD *)a1 + 4) )
  {
    v2 = *((_DWORD *)a1 + 5);
    if ( v2 != 1 )
      return v2 == 0;
  }
  return *((_DWORD *)a1 + 2) == *((_DWORD *)a2 + 2) && *((_BYTE *)a1 + 12) == *((_BYTE *)a2 + 12);
}
