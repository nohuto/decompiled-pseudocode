/*
 * XREFs of PopNotifyCallbacksPreSleep @ 0x140B5BB0C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExNotifyCallback @ 0x14047A7E0 (ExNotifyCallback.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140C06470 (PopCheckpointSystemSleep.c)
 */

__int64 PopNotifyCallbacksPreSleep()
{
  PopCheckpointSystemSleep(8LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_START);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_STOP);
  return PopCheckpointSystemSleep(9LL);
}
