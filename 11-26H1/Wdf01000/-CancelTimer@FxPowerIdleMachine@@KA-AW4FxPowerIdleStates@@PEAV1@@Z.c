/*
 * XREFs of ?CancelTimer@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x140061D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::CancelTimer(FxPowerIdleMachine *This)
{
  $3E66B2C35A09A7C45F0D5593ECC7E9E2 *v2; // rcx
  BOOLEAN v3; // al
  struct _EX_TIMER *m_KernelExTimer; // rcx

  v2 = &This->m_PowerTimeoutTimer.m_Timer.16;
  if ( This->m_PowerTimeoutTimer.m_Timer.m_IsExtTimer )
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
    This->m_Flags &= ~8u;
    return 6LL;
  }
  return 28LL;
}
