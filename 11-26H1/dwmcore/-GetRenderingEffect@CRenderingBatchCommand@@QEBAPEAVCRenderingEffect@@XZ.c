/*
 * XREFs of ?GetRenderingEffect@CRenderingBatchCommand@@QEBAPEAVCRenderingEffect@@XZ @ 0x1800CEE30
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800720B0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800CEC20 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 *     ?GetRenderingEffect@CBatchCommand@@QEBAPEAVCRenderingEffect@@XZ @ 0x180181B70 (-GetRenderingEffect@CBatchCommand@@QEBAPEAVCRenderingEffect@@XZ.c)
 * Callees:
 *     <none>
 */

struct CRenderingEffect *__fastcall CRenderingBatchCommand::GetRenderingEffect(CRenderingBatchCommand *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 1);
  if ( *((_BYTE *)this + 92) )
    return *(struct CRenderingEffect **)(v1 + 80);
  else
    return *(struct CRenderingEffect **)(v1 + 24);
}
