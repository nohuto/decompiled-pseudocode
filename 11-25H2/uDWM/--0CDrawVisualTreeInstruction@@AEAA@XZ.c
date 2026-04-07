/*
 * XREFs of ??0CDrawVisualTreeInstruction@@AEAA@XZ @ 0x1800214E0
 * Callers:
 *     ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002142C (-Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x180015438 (--0CRenderDataInstruction@@QEAA@XZ.c)
 */

CDrawVisualTreeInstruction *__fastcall CDrawVisualTreeInstruction::CDrawVisualTreeInstruction(
        CDrawVisualTreeInstruction *this)
{
  CDrawVisualTreeInstruction *v1; // rcx
  CDrawVisualTreeInstruction *result; // rax

  CRenderDataInstruction::CRenderDataInstruction(this);
  result = v1;
  *(_QWORD *)v1 = &CDrawVisualTreeInstruction::`vftable';
  return result;
}
