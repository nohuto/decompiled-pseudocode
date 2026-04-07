/*
 * XREFs of ??1CSolidRectangleInstruction@@EEAA@XZ @ 0x18007682C
 * Callers:
 *     ??_ECSolidRectangleInstruction@@EEAAPEAXI@Z @ 0x1800767E0 (--_ECSolidRectangleInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSolidRectangleInstruction::~CSolidRectangleInstruction(CSolidRectangleInstruction *this)
{
  *(_QWORD *)this = &CSolidRectangleInstruction::`vftable';
  CRenderDataInstruction::~CRenderDataInstruction(this);
}
