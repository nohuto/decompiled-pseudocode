/*
 * XREFs of ?GetRenderingEffect@CBatchCommand@@QEBAPEAVCRenderingEffect@@XZ @ 0x180181B70
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18025F064 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?GetRenderingEffect@CRenderingBatchCommand@@QEBAPEAVCRenderingEffect@@XZ @ 0x1800CEE30 (-GetRenderingEffect@CRenderingBatchCommand@@QEBAPEAVCRenderingEffect@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

struct CRenderingEffect *__fastcall CBatchCommand::GetRenderingEffect(CBatchCommand *this)
{
  __int64 v1; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  switch ( *(_DWORD *)this )
  {
    case 1:
      v1 = *((_QWORD *)this + 1);
      if ( !*((_BYTE *)this + 92) )
        return *(struct CRenderingEffect **)(v1 + 24);
      return *(struct CRenderingEffect **)(v1 + 80);
    case 2:
      return 0LL;
    case 3:
      return (struct CRenderingEffect *)*((_QWORD *)this + 1);
    case 4:
      v1 = *((_QWORD *)this + 1);
      if ( !*((_BYTE *)this + 92) )
        return *(struct CRenderingEffect **)(v1 + 24);
      return *(struct CRenderingEffect **)(v1 + 80);
  }
  if ( *(_DWORD *)this != 5 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  return CRenderingBatchCommand::GetRenderingEffect(this);
}
