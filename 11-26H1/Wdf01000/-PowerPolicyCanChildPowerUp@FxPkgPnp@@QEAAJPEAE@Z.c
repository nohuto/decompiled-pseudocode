/*
 * XREFs of ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x140041148
 * Callers:
 *     ?PowerCheckParentOverload@FxPkgPdo@@EEAAJPEAE@Z @ 0x1400410F0 (-PowerCheckParentOverload@FxPkgPdo@@EEAAJPEAE@Z.c)
 * Callees:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1400322B0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140041F90 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1400421F0 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyCanChildPowerUp(FxPkgPnp *this, unsigned __int8 *PowerUp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  __int64 result; // rax
  _FX_DRIVER_GLOBALS *v6; // rdx
  _FX_DRIVER_GLOBALS *v7; // rdx

  *PowerUp = 0;
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)&m_Owner->m_DevicePowerIrpTracker.m_D0IrpReasonHint, 17, 5);
    result = FxPowerIdleMachine::PowerReferenceWorker(
               &this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine,
               0,
               FxPowerReferenceDefault,
               0LL,
               0,
               0LL);
    if ( (int)result < 0 )
      return result;
    FxWaitLockInternal::AcquireLock(&this->m_EnumInfo->m_PowerStateLock, v6, 0LL);
    ++this->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount;
    *PowerUp = this->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp;
    FxWaitLockInternal::ReleaseLock(&this->m_EnumInfo->m_PowerStateLock, v7);
  }
  else
  {
    *PowerUp = 1;
  }
  return 0LL;
}
