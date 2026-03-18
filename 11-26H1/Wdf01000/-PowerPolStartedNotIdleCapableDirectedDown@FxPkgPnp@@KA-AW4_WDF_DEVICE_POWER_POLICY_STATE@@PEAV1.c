/*
 * XREFs of ?PowerPolStartedNotIdleCapableDirectedDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8D60
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x140041874 (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?NotifyDeviceDirectedPoweredDown@FxPoxInterface@@QEAAXXZ @ 0x14007B7D8 (-NotifyDeviceDirectedPoweredDown@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartedNotIdleCapableDirectedDown(FxPkgPnp *This)
{
  FxPoxInterface::NotifyDeviceDirectedPoweredDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1381LL;
}
