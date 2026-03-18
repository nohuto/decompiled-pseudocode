/*
 * XREFs of ?DisablingTimerExpired@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1400A7740
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1400475A8 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::DisablingTimerExpired(FxPowerIdleMachine *This, __int64 a2, unsigned __int8 a3)
{
  This->m_Flags &= ~8u;
  FxPkgPnp::PowerPolicyProcessEvent((FxPkgPnp *)This[2].m_TagTracker, PwrPolPowerTimeoutExpired, a3);
  return 5LL;
}
