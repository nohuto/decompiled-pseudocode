/*
 * XREFs of PpmCheckPhaseComplete @ 0x140254BD8
 * Callers:
 *     PpmCheckControlActionCallback @ 0x1404F77B0 (PpmCheckControlActionCallback.c)
 * Callees:
 *     PpmCheckContinueExecution @ 0x140254D58 (PpmCheckContinueExecution.c)
 */

__int64 PpmCheckPhaseComplete()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&PpmCheckActionCount, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return PpmCheckContinueExecution();
  return result;
}
