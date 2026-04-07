/*
 * XREFs of ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800DF85C
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800814E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800DF464 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CLoginTransition@@QEAA@XZ @ 0x1800B9D38 (--1CLoginTransition@@QEAA@XZ.c)
 */

CLoginTransition *__fastcall CLoginTransition::`scalar deleting destructor'(CLoginTransition *this)
{
  CLoginTransition::~CLoginTransition(this);
  DefaultHeap::Free(this);
  return this;
}
