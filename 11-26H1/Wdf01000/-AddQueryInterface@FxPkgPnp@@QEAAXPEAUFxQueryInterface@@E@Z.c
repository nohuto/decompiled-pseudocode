/*
 * XREFs of ?AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z @ 0x140083660
 * Callers:
 *     imp_WdfDeviceAddQueryInterface @ 0x1400766F0 (imp_WdfDeviceAddQueryInterface.c)
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140041F90 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1400421F0 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 */

void __fastcall FxPkgPnp::AddQueryInterface(FxPkgPnp *this, _FX_DRIVER_GLOBALS *QI)
{
  FxWaitLockInternal *p_m_QueryInterfaceLock; // rdi
  _FX_DRIVER_GLOBALS *v5; // rdx
  _SINGLE_LIST_ENTRY *p_m_QueryInterfaceHead; // rbx
  _SINGLE_LIST_ENTRY *i; // rax

  p_m_QueryInterfaceLock = &this->m_QueryInterfaceLock;
  FxWaitLockInternal::AcquireLock(&this->m_QueryInterfaceLock, QI, 0LL);
  p_m_QueryInterfaceHead = &this->m_QueryInterfaceHead;
  for ( i = p_m_QueryInterfaceHead->Next; i; i = i->Next )
    p_m_QueryInterfaceHead = i;
  p_m_QueryInterfaceHead->Next = (_SINGLE_LIST_ENTRY *)&QI->DestroyEvent.m_Event.Header.WaitListHead.Blink;
  FxWaitLockInternal::ReleaseLock(p_m_QueryInterfaceLock, v5);
}
