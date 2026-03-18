/*
 * XREFs of ?PowerPolS0NoWakePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140040E50
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestComponentActive@FxPoxInterface@@QEAAXXZ @ 0x140040E0C (-RequestComponentActive@FxPoxInterface@@QEAAXXZ.c)
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x14004243C (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolS0NoWakePowerUp(FxPkgPnp *This)
{
  int v2; // eax
  unsigned int v3; // ecx

  FxPoxInterface::RequestComponentActive(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  v2 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, PowerDeviceD0, Retry, RequestD0ForOther);
  v3 = 1472;
  if ( v2 < 0 )
    return 1389;
  return v3;
}
