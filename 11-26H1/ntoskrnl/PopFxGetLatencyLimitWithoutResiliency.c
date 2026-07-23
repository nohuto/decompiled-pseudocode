/*
 * XREFs of PopFxGetLatencyLimitWithoutResiliency @ 0x1403961F8
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1403960E8 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 PopFxGetLatencyLimitWithoutResiliency()
{
  __int64 result; // rax

  if ( *((_BYTE *)&PpmIdlePolicyLock.ForegroundLossTime + 6) )
    return (unsigned int)dword_140FBF468;
  if ( PpmDisableVsyncLatencyUpdate )
    return (unsigned int)PpmLatencyToleranceLimit;
  result = (unsigned int)dword_140FBF464;
  if ( !PopFxVSyncEnabled )
    return (unsigned int)PpmLatencyToleranceLimit;
  return result;
}
