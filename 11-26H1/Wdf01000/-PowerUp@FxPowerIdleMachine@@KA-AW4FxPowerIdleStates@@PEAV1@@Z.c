/*
 * XREFs of ?PowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x140060570
 * Callers:
 *     <none>
 * Callees:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1400605C8 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 */

__int64 __fastcall FxPowerIdleMachine::PowerUp(FxPowerIdleMachine *This)
{
  This->m_Flags &= 0xBDu;
  FxPowerIdleMachine::SendD0Notification(This);
  return 24LL;
}
