/*
 * XREFs of ?PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ @ 0x140040ED0
 * Callers:
 *     ?PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ @ 0x140040EA0 (-PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ.c)
 * Callees:
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x140031520 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140041F90 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1400421F0 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicyChildPoweredDown(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  _FX_DRIVER_GLOBALS *v3; // rdx

  if ( this->m_PowerPolicyMachine.m_Owner )
  {
    FxWaitLockInternal::AcquireLock(&this->m_EnumInfo->m_PowerStateLock, a2, 0LL);
    --this->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount;
    FxWaitLockInternal::ReleaseLock(&this->m_EnumInfo->m_PowerStateLock, v3);
    FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
  }
}
