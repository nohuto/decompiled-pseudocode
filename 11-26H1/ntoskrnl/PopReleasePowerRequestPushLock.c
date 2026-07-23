/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x140AF9FD4
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14049FC60 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x14049FF30 (PopPowerRequestCallbackWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 */

__int64 PopReleasePowerRequestPushLock()
{
  return PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
}
