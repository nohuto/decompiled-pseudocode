/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x140AF7934
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140436FDC (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x1404A65D0 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x1404A68A0 (PopPowerRequestCallbackWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

__int64 PopReleasePowerRequestPushLock()
{
  return PopReleaseRwLock(&stru_140F12D20);
}
