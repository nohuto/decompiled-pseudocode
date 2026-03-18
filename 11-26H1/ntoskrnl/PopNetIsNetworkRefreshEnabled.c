/*
 * XREFs of PopNetIsNetworkRefreshEnabled @ 0x1407DA634
 * Callers:
 *     PopNetLowPowerEpochCallback @ 0x1407DA660 (PopNetLowPowerEpochCallback.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1407DA7F0 (PopNetRefreshTimerWorkerCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopNetIsNetworkRefreshEnabled()
{
  return (BYTE4(stru_140F0C428.Header.WaitListHead.Blink) & 0x4E) == 0
      && SBYTE4(stru_140F0C428.Header.WaitListHead.Blink) < 0
      && PopEnableDsNetRefresh != 0;
}
