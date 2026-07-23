/*
 * XREFs of KiForceIdleInterruptNotify @ 0x140338970
 * Callers:
 *     KiDispatchPassiveInterrupts @ 0x140516710 (KiDispatchPassiveInterrupts.c)
 * Callees:
 *     KiResetForceIdle @ 0x1403389B4 (KiResetForceIdle.c)
 *     KiCheckAndRearmForceIdle @ 0x140338EAC (KiCheckAndRearmForceIdle.c)
 */

void KiForceIdleInterruptNotify()
{
  if ( !KiForceIdleDisabled )
  {
    if ( KiForceIdleState == 4 )
    {
      KiResetForceIdle(1LL, 0LL);
    }
    else if ( (unsigned int)(KiForceIdleState - 1) <= 1 )
    {
      KiCheckAndRearmForceIdle();
    }
  }
}
