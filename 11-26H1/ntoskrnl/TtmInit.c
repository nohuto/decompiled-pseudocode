/*
 * XREFs of TtmInit @ 0x1407E63A8
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 *     TtmiInitTerminals @ 0x1407EBD48 (TtmiInitTerminals.c)
 *     TtmiInitQueues @ 0x1407ECE68 (TtmiInitQueues.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 TtmInit()
{
  TtmiInitQueues();
  ExInitializeResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
  PspSiloMonitorLock.InitialStack = 0LL;
  TtmiInitTerminals();
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140FD58A8, TtmpTraceLoggingCallback, 0LL);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140FD5870, 0LL, 0LL);
}
