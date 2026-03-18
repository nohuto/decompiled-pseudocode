/*
 * XREFs of ?InDxDisabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1400740B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::InDxDisabled(FxPowerIdleMachine *This)
{
  This->m_Flags &= ~1u;
  return 17LL;
}
