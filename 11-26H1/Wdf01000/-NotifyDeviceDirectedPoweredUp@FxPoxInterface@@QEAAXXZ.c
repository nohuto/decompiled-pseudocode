/*
 * XREFs of ?NotifyDeviceDirectedPoweredUp@FxPoxInterface@@QEAAXXZ @ 0x140041774
 * Callers:
 *     ?PowerPolS0NoWakeCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140040F30 (-PowerPolS0NoWakeCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolS0WakeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400416E0 (-PowerPolS0WakeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCompletedHardwareStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A9830 (-PowerPolTimerExpiredWakeCompletedHardwareStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE.c)
 * Callees:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x140041A1C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::NotifyDeviceDirectedPoweredUp(FxPoxInterface *this)
{
  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    if ( _InterlockedCompareExchange(&this->m_DirectedTransitionActive, 0, 0) )
      FxDevicePwrRequirementMachine::ProcessEvent(
        this->m_DevicePowerRequirementMachine,
        DprEventDeviceDirectedPoweredUp);
  }
}
