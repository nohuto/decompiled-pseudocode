/*
 * XREFs of ??0CPushTransformInstruction@@AEAA@XZ @ 0x1800152B8
 * Callers:
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180015204 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x180015438 (--0CRenderDataInstruction@@QEAA@XZ.c)
 */

CPushTransformInstruction *__fastcall CPushTransformInstruction::CPushTransformInstruction(
        CPushTransformInstruction *this)
{
  CPushTransformInstruction *v1; // rcx
  CPushTransformInstruction *result; // rax

  CRenderDataInstruction::CRenderDataInstruction(this);
  result = v1;
  *(_QWORD *)v1 = &CPushTransformInstruction::`vftable';
  return result;
}
