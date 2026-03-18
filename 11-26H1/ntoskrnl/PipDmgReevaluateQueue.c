/*
 * XREFs of PipDmgReevaluateQueue @ 0x140770D50
 * Callers:
 *     PipDmgInitPhaseTwo @ 0x1407B12D4 (PipDmgInitPhaseTwo.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140B13278 (PipDmgEnforceEnumerationPolicy.c)
 *     PiDmaGuardProcessPostRemove @ 0x140B29F90 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x140770D8C (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x140B133D8 (PiCslIsConsoleLocked.c)
 */

void PipDmgReevaluateQueue()
{
  __int64 v0; // rcx

  v0 = (unsigned int)(PipDmaGuardPolicy - 1);
  if ( PipDmaGuardPolicy == 1 )
  {
LABEL_6:
    PipDmgFlushQueueAndRestartDevices(v0);
    return;
  }
  if ( PipDmaGuardPolicy == 2 )
  {
    if ( (unsigned __int8)PiCslIsConsoleLocked() )
      return;
    goto LABEL_6;
  }
  if ( PipDmaGuardPolicy != 3 )
    __fastfail(5u);
}
