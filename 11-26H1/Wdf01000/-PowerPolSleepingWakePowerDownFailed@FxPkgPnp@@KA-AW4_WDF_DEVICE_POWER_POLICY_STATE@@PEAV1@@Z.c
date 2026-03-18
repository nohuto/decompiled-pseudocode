/*
 * XREFs of ?PowerPolSleepingWakePowerDownFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8B00
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x14006E890 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakePowerDownFailed(FxPkgPnp *This)
{
  This->m_PowerPolicyMachine.m_Owner->m_DevicePowerIrpTracker.m_DIrpRequestedForSIrp = RequestDIrpReasonInvalid;
  if ( FxPkgPnp::PowerPolicyCancelWaitWake(This) )
    return 1472LL;
  else
    return This->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped != 0 ? 1309 : 1472;
}
