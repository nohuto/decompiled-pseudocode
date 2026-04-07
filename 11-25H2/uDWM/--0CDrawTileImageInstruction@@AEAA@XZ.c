/*
 * XREFs of ??0CDrawTileImageInstruction@@AEAA@XZ @ 0x180015594
 * Callers:
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180016F24 (-Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@.c)
 * Callees:
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x180015438 (--0CRenderDataInstruction@@QEAA@XZ.c)
 */

CDrawTileImageInstruction *__fastcall CDrawTileImageInstruction::CDrawTileImageInstruction(
        CDrawTileImageInstruction *this)
{
  CDrawTileImageInstruction *v1; // rcx
  CDrawTileImageInstruction *result; // rax

  CRenderDataInstruction::CRenderDataInstruction(this);
  result = v1;
  *(_QWORD *)v1 = &CDrawTileImageInstruction::`vftable';
  return result;
}
