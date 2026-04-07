/*
 * XREFs of ??0CDrawMesh2DInstruction@@AEAA@XZ @ 0x18002F77C
 * Callers:
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@Z @ 0x18002F678 (-Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@.c)
 * Callees:
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x180015438 (--0CRenderDataInstruction@@QEAA@XZ.c)
 */

CDrawMesh2DInstruction *__fastcall CDrawMesh2DInstruction::CDrawMesh2DInstruction(CDrawMesh2DInstruction *this)
{
  CDrawMesh2DInstruction *v1; // rcx
  CDrawMesh2DInstruction *result; // rax

  CRenderDataInstruction::CRenderDataInstruction(this);
  result = v1;
  *(_QWORD *)v1 = &CDrawMesh2DInstruction::`vftable';
  return result;
}
