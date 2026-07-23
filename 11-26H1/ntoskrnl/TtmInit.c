/*
 * XREFs of TtmInit @ 0x1407EBF08
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     TtmiInitTerminals @ 0x1407F18AC (TtmiInitTerminals.c)
 *     TtmiInitQueues @ 0x1407F29C8 (TtmiInitQueues.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 TtmInit()
{
  TtmiInitQueues();
  ExInitializeResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
  PspSiloMonitorLock.InitialStack = 0LL;
  TtmiInitTerminals();
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140FD68B8, TtmpTraceLoggingCallback, 0LL);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140FD6880, 0LL, 0LL);
}
