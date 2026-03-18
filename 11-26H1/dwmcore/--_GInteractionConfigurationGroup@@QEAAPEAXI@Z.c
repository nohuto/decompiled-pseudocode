/*
 * XREFs of ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x1800A932C
 * Callers:
 *     RemoveCountFromEndOfArrayAndFree @ 0x1800AAFA0 (RemoveCountFromEndOfArrayAndFree.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18017CFEC (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800ACD1C (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

InteractionConfigurationGroup *__fastcall InteractionConfigurationGroup::`scalar deleting destructor'(
        InteractionConfigurationGroup *this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup(this);
  operator delete(this, 0x88uLL);
  return this;
}
