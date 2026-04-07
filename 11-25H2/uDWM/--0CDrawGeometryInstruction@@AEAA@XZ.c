/*
 * XREFs of ??0CDrawGeometryInstruction@@AEAA@XZ @ 0x1800153A0
 * Callers:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x1800152DC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 * Callees:
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x180015438 (--0CRenderDataInstruction@@QEAA@XZ.c)
 */

CDrawGeometryInstruction *__fastcall CDrawGeometryInstruction::CDrawGeometryInstruction(CDrawGeometryInstruction *this)
{
  CDrawGeometryInstruction *v1; // rcx
  CDrawGeometryInstruction *result; // rax

  CRenderDataInstruction::CRenderDataInstruction(this);
  result = v1;
  *(_QWORD *)v1 = &CDrawGeometryInstruction::`vftable';
  return result;
}
