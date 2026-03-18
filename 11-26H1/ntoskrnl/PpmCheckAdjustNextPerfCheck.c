/*
 * XREFs of PpmCheckAdjustNextPerfCheck @ 0x1404BE920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_KTRAP_FRAME *PpmCheckAdjustNextPerfCheck()
{
  _KTRAP_FRAME *result; // rax

  if ( LODWORD(PopSleepstudySessionLock.SchedulingGroup) == 5 )
  {
    result = PopSleepstudySessionLock.TrapFrame;
    if ( PopSleepstudySessionLock.TrapFrame )
      return (_KTRAP_FRAME *)_InterlockedExchange64(
                               (volatile __int64 *)&PopSleepstudySessionLock.TrapFrame,
                               MEMORY[0xFFFFF78000000008]);
  }
  return result;
}
