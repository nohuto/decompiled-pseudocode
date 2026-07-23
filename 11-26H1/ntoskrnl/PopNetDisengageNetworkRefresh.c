/*
 * XREFs of PopNetDisengageNetworkRefresh @ 0x1407DE418
 * Callers:
 *     PopNetLowPowerEpochCallback @ 0x1407DE550 (PopNetLowPowerEpochCallback.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1407DE6E0 (PopNetRefreshTimerWorkerCallback.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140B4CA10 (PopNetSetResiliencyPhaseBias.c)
 */

__int64 PopNetDisengageNetworkRefresh()
{
  __int64 result; // rax
  char v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  ZwUpdateWnfStateData(&WNF_PO_OPPORTUNISTIC_CS, &v1, 1u, 0LL, 0LL, 0, 0);
  result = PopNetSetResiliencyPhaseBias(0LL);
  BYTE4(PopPdcDeviceListLock.ReadOperationCount) = 0;
  return result;
}
