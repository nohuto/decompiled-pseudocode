/*
 * XREFs of ?TimedOutEnabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1400A78C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1400605C8 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 */

__int64 __fastcall FxPowerIdleMachine::TimedOutEnabled(FxPowerIdleMachine *This)
{
  FxPowerIdleMachine::SendD0Notification(This);
  This->m_Flags &= ~0x40u;
  return 6LL;
}
