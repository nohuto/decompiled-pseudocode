/*
 * XREFs of ??0CSolidRectangleInstruction@@AEAA@XZ @ 0x180040BA4
 * Callers:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180040ADC (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x180015438 (--0CRenderDataInstruction@@QEAA@XZ.c)
 */

CSolidRectangleInstruction *__fastcall CSolidRectangleInstruction::CSolidRectangleInstruction(
        CSolidRectangleInstruction *this)
{
  CSolidRectangleInstruction *v1; // rcx
  CSolidRectangleInstruction *result; // rax

  CRenderDataInstruction::CRenderDataInstruction(this);
  result = v1;
  *(_QWORD *)v1 = &CSolidRectangleInstruction::`vftable';
  return result;
}
