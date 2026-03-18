/*
 * XREFs of ?QueryReturnToIdle@FxPowerIdleMachine@@QEAAEXZ @ 0x14006AFB8
 * Callers:
 *     ?PowerPolSystemWakeQueryIdle@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14006AF30 (-PowerPolSystemWakeQueryIdle@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolWaitingUnarmedQueryIdle@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14006AF60 (-PowerPolWaitingUnarmedQueryIdle@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolWaitingArmedQueryIdle@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14006AF90 (-PowerPolWaitingArmedQueryIdle@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxPowerIdleMachine::QueryReturnToIdle(FxPowerIdleMachine *this)
{
  KIRQL v2; // al
  bool v3; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  v3 = 0;
  if ( (this->m_Flags & 0xA) == 2 )
    v3 = this->m_IoCount == 0;
  this->m_Flags &= ~0x40u;
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v2);
  return v3;
}
