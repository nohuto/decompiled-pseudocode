/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x1405B15A0
 * Callers:
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 * Callees:
 *     CcForEachPartition @ 0x140258154 (CcForEachPartition.c)
 */

NTSTATUS CcWaitForCurrentLazyWriterActivity(void)
{
  NTSTATUS v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  CcForEachPartition((__int64)CcWaitForCurrentLazyWriterActivityHelper, (__int64)&v1, 0, 0);
  return v1;
}
