/*
 * XREFs of TtmInit @ 0x14075A160
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402D6540 (ExInitializeResourceLite.c)
 *     TtmiInitTerminals @ 0x14075FE20 (TtmiInitTerminals.c)
 *     TtmiInitQueues @ 0x140760F48 (TtmiInitQueues.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 TtmInit()
{
  TtmiInitQueues();
  ExInitializeResourceLite(&TtmpSessionLock);
  TtmpSession = 0LL;
  TtmiInitTerminals();
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140FD78E8, TtmpTraceLoggingCallback, 0LL);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140FD78B0, 0LL, 0LL);
}
