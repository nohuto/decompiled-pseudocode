/*
 * XREFs of ??0CDrawNineGridInstruction@@IEAA@XZ @ 0x180021758
 * Callers:
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x1800216A4 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x180015438 (--0CRenderDataInstruction@@QEAA@XZ.c)
 */

CDrawNineGridInstruction *__fastcall CDrawNineGridInstruction::CDrawNineGridInstruction(CDrawNineGridInstruction *this)
{
  CDrawNineGridInstruction *v1; // rcx
  CDrawNineGridInstruction *result; // rax

  CRenderDataInstruction::CRenderDataInstruction(this);
  result = v1;
  *(_QWORD *)v1 = &CDrawNineGridInstruction::`vftable';
  return result;
}
