/*
 * XREFs of ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x140061FA0
 * Callers:
 *     ?Disabling@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x140061F80 (-Disabling@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxPowerIdleMachine::CancelIdleTimer(FxPowerIdleMachine *this)
{
  $3E66B2C35A09A7C45F0D5593ECC7E9E2 *v2; // rcx
  BOOLEAN v3; // al
  struct _EX_TIMER *m_KernelExTimer; // rcx

  v2 = &this->m_PowerTimeoutTimer.m_Timer.16;
  if ( this->m_PowerTimeoutTimer.m_Timer.m_IsExtTimer )
  {
    m_KernelExTimer = v2->m_KernelExTimer;
    if ( !m_KernelExTimer )
      goto LABEL_4;
    v3 = ExCancelTimer(m_KernelExTimer, 0LL);
  }
  else
  {
    v3 = KeCancelTimer(&v2->KernelTimer);
  }
  if ( v3 )
  {
LABEL_4:
    this->m_Flags &= ~8u;
    return 1;
  }
  return 0;
}
