/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeInitialize @ 0x140607DF4
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407C8C18 (PopInitializeTimer.c)
 */

__int64 PopCheckPowerSourceAfterRtcWakeInitialize()
{
  __int64 result; // rax

  PopInitializeTimer(
    (unsigned int)&stru_140F0F620.WaitBlockFill11[96],
    (unsigned int)PopCheckPowerSourceAfterRtcWakeTimerCallback,
    0,
    (unsigned int)PopCheckPowerSourceAfterRtcWakeTimerWorker,
    0LL);
  *(_WORD *)&stru_140F0F620.WaitBlockFill11[64] = 0;
  stru_140F0F620.WaitBlock[1].Object = &stru_140F0F620.WaitBlockFill11[72];
  stru_140F0F620.WaitBlock[1].Thread = (struct _KTHREAD *)&stru_140F0F620.WaitBlockFill11[72];
  result = 0LL;
  stru_140F0F620.WaitBlockFill5[66] = 6;
  stru_140F0F620.WaitBlock[1].SpareLong = 1;
  return result;
}
