/*
 * XREFs of PipDmgConsoleUnlockCallback @ 0x1407B4300
 * Callers:
 *     <none>
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x140773D8C (PipDmgFlushQueueAndRestartDevices.c)
 */

PVOID *PipDmgConsoleUnlockCallback()
{
  PVOID *result; // rax

  if ( PipDmaGuardPolicy != 1 )
  {
    if ( PipDmaGuardPolicy == 2 )
    {
      return PipDmgFlushQueueAndRestartDevices();
    }
    else if ( PipDmaGuardPolicy != 3 )
    {
      __fastfail(5u);
    }
  }
  return result;
}
