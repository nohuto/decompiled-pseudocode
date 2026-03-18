/*
 * XREFs of PopNetDisengageNetworkRefresh @ 0x1407DA528
 * Callers:
 *     PopNetLowPowerEpochCallback @ 0x1407DA660 (PopNetLowPowerEpochCallback.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1407DA7F0 (PopNetRefreshTimerWorkerCallback.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140B4AC80 (PopNetSetResiliencyPhaseBias.c)
 */

__int64 PopNetDisengageNetworkRefresh()
{
  __int64 result; // rax
  char v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_OPPORTUNISTIC_CS, (__int64)&v1);
  result = PopNetSetResiliencyPhaseBias(0LL);
  LOBYTE(stru_140F0C428.SListFaultAddress) = 0;
  return result;
}
