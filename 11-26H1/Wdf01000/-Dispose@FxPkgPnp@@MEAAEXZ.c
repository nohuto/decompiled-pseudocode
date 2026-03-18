/*
 * XREFs of ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x140074560
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140041F90 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1400421F0 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x140074614 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

unsigned __int8 __fastcall FxPkgPnp::Dispose(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxWaitLockInternal *p_m_QueryInterfaceLock; // rbx
  _SINGLE_LIST_ENTRY *Next; // rdi
  _FX_DRIVER_GLOBALS *v5; // rdx
  unsigned int v6; // edx
  void (__fastcall *InterfaceDereference)(void *); // rax
  FxQueryInterface *v9; // rcx
  bool v10; // zf
  _SINGLE_LIST_ENTRY *v11; // rax

  p_m_QueryInterfaceLock = &this->m_QueryInterfaceLock;
  this->m_InterruptListHead.Blink = &this->m_InterruptListHead;
  this->m_InterruptListHead.Flink = &this->m_InterruptListHead;
  FxWaitLockInternal::AcquireLock(&this->m_QueryInterfaceLock, a2, 0LL);
  Next = this->m_QueryInterfaceHead.Next;
  this->m_QueryInterfaceHead.Next = 0LL;
  FxWaitLockInternal::ReleaseLock(p_m_QueryInterfaceLock, v5);
  while ( Next )
  {
    v9 = (FxQueryInterface *)&Next[-5];
    v10 = BYTE2(Next[1].Next) == 0;
    v11 = Next;
    Next = Next->Next;
    v11->Next = 0LL;
    if ( v10 )
      FxQueryInterface::`scalar deleting destructor'(v9, v6);
  }
  InterfaceDereference = this->m_D3ColdInterface.InterfaceDereference;
  if ( InterfaceDereference )
    InterfaceDereference(this->m_D3ColdInterface.Context);
  memset(&this->m_D3ColdInterface, 0, sizeof(this->m_D3ColdInterface));
  return 1;
}
