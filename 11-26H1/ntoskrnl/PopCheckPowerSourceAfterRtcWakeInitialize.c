/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeInitialize @ 0x14060A9A4
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407CBCB8 (PopInitializeTimer.c)
 */

__int64 PopCheckPowerSourceAfterRtcWakeInitialize()
{
  __int64 result; // rax

  PopInitializeTimer(
    (unsigned int)&PopCheckPowerSourceAfterRtcWakeTimer,
    (unsigned int)PopCheckPowerSourceAfterRtcWakeTimerCallback,
    0,
    (unsigned int)PopCheckPowerSourceAfterRtcWakeTimerWorker,
    0LL);
  LOWORD(PopCheckPowerSourceAfterRtcWakeCompleted.Header.Lock) = 0;
  PopCheckPowerSourceAfterRtcWakeCompleted.Header.WaitListHead.Blink = &PopCheckPowerSourceAfterRtcWakeCompleted.Header.WaitListHead;
  PopCheckPowerSourceAfterRtcWakeCompleted.Header.WaitListHead.Flink = &PopCheckPowerSourceAfterRtcWakeCompleted.Header.WaitListHead;
  result = 0LL;
  PopCheckPowerSourceAfterRtcWakeCompleted.Header.Size = 6;
  PopCheckPowerSourceAfterRtcWakeCompleted.Header.SignalState = 1;
  return result;
}
