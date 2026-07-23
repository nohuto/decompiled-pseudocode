/*
 * XREFs of PipDmgReevaluateQueue @ 0x140773D50
 * Callers:
 *     PipDmgInitPhaseTwo @ 0x1407B4334 (PipDmgInitPhaseTwo.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x14096EC44 (PipDmgEnforceEnumerationPolicy.c)
 *     PiDmaGuardProcessPostRemove @ 0x140B2C010 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x140773D8C (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x14096EDA4 (PiCslIsConsoleLocked.c)
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
