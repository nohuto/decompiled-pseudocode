/*
 * XREFs of PpmCheckPhaseComplete @ 0x140253278
 * Callers:
 *     PpmCheckControlActionCallback @ 0x1404FE270 (PpmCheckControlActionCallback.c)
 * Callees:
 *     PpmCheckContinueExecution @ 0x1402533F8 (PpmCheckContinueExecution.c)
 */

__int64 PpmCheckPhaseComplete()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(
                           (volatile signed __int32 *)&PopSleepstudySessionLock.ApcStateFill[8],
                           0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return PpmCheckContinueExecution();
  return result;
}
