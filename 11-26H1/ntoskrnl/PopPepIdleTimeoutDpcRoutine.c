/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x140202F50
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140203FD0 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x14021C06C (PopPepArmIdleTimer.c)
 */

__int64 PopPepIdleTimeoutDpcRoutine()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = ExQueueWorkItemEx(&PopDirectedDripsDiagLock.SchedulerApcFill5[16], 1LL, 0xFFFFFFFFLL);
  if ( !(_BYTE)result )
  {
    LOBYTE(v1) = 1;
    return PopPepArmIdleTimer(v1);
  }
  return result;
}
