/*
 * XREFs of ?TimedOutPowerDown@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x140074360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::TimedOutPowerDown(FxPowerIdleMachine *This)
{
  This->m_Flags &= ~0x40u;
  return 16LL;
}
