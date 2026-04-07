/*
 * XREFs of ??0CRenderDataInstruction@@QEAA@XZ @ 0x180015438
 * Callers:
 *     ??0CPushTransformInstruction@@AEAA@XZ @ 0x1800152B8 (--0CPushTransformInstruction@@AEAA@XZ.c)
 *     ??0CDrawGeometryInstruction@@AEAA@XZ @ 0x1800153A0 (--0CDrawGeometryInstruction@@AEAA@XZ.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x1800153C4 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ??0CDrawTileImageInstruction@@AEAA@XZ @ 0x180015594 (--0CDrawTileImageInstruction@@AEAA@XZ.c)
 *     ??0CDrawVisualTreeInstruction@@AEAA@XZ @ 0x1800214E0 (--0CDrawVisualTreeInstruction@@AEAA@XZ.c)
 *     ??0CDrawNineGridInstruction@@IEAA@XZ @ 0x180021758 (--0CDrawNineGridInstruction@@IEAA@XZ.c)
 *     ??0CDrawMesh2DInstruction@@AEAA@XZ @ 0x18002F77C (--0CDrawMesh2DInstruction@@AEAA@XZ.c)
 *     ??0CSolidRectangleInstruction@@AEAA@XZ @ 0x180040BA4 (--0CSolidRectangleInstruction@@AEAA@XZ.c)
 *     ??0CRectangleInstruction@@AEAA@XZ @ 0x18004D1E8 (--0CRectangleInstruction@@AEAA@XZ.c)
 *     ??0CDrawBitmapInstruction@@AEAA@XZ @ 0x180064AD0 (--0CDrawBitmapInstruction@@AEAA@XZ.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 */

CRenderDataInstruction *__fastcall CRenderDataInstruction::CRenderDataInstruction(CRenderDataInstruction *this)
{
  CRenderDataInstruction *v1; // rcx
  CRenderDataInstruction *result; // rax

  CBaseObject::CBaseObject(this);
  result = v1;
  *(_QWORD *)v1 = &CRenderDataInstruction::`vftable';
  return result;
}
