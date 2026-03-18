/*
 * XREFs of PopFxGetLatencyLimitWithoutResiliency @ 0x140394478
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x140394368 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 PopFxGetLatencyLimitWithoutResiliency()
{
  __int64 result; // rax

  if ( byte_140F1070E )
    return (unsigned int)dword_140FBE468;
  if ( PpmDisableVsyncLatencyUpdate )
    return (unsigned int)PpmLatencyToleranceLimit;
  result = (unsigned int)dword_140FBE464;
  if ( !PopFxVSyncEnabled )
    return (unsigned int)PpmLatencyToleranceLimit;
  return result;
}
