/*
 * XREFs of ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800E2B2C
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800288E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800E2728 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CLoginTransition@@QEAA@XZ @ 0x1800BA448 (--1CLoginTransition@@QEAA@XZ.c)
 */

CLoginTransition *__fastcall CLoginTransition::`scalar deleting destructor'(CLoginTransition *this)
{
  CLoginTransition::~CLoginTransition(this);
  DefaultHeap::Free(this);
  return this;
}
