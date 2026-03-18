/*
 * XREFs of ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800ACD1C
 * Callers:
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x1800A932C (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800A9580 (--1CInteractionProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall InteractionConfigurationGroup::~InteractionConfigurationGroup(InteractionConfigurationGroup *this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 104);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 72);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 40);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 8);
}
