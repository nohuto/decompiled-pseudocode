/*
 * XREFs of ?PowerPolTimerExpiredWakeCompletedHardwareStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A9830
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyDeviceDirectedPoweredUp@FxPoxInterface@@QEAAXXZ @ 0x140041774 (-NotifyDeviceDirectedPoweredUp@FxPoxInterface@@QEAAXXZ.c)
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x140041874 (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCompletedHardwareStarted(FxPkgPnp *This)
{
  FxPoxInterface::NotifyDeviceDirectedPoweredUp(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1347LL;
}
