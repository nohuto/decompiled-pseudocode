/*
 * XREFs of PfpPartitionIterateAndCheckCanAnyDoAccessLogging @ 0x140602D74
 * Callers:
 *     PfpProcessScenarioPhase @ 0x140B1F0C8 (PfpProcessScenarioPhase.c)
 *     PfpScenCtxPrefetchWait @ 0x140BFEAD8 (PfpScenCtxPrefetchWait.c)
 * Callees:
 *     PfpPartitionIterate @ 0x1403843E0 (PfpPartitionIterate.c)
 */

__int64 PfpPartitionIterateAndCheckCanAnyDoAccessLogging()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  PfpPartitionIterate((__int64)PfpPartitionCanDoAccessLoggingCallback, 8LL, (__int64)&v1);
  return v1;
}
