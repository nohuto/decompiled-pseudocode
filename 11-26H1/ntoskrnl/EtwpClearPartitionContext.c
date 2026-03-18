/*
 * XREFs of EtwpClearPartitionContext @ 0x1404FA0F4
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A6CBB4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 */

__int64 __fastcall EtwpClearPartitionContext(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    PsDereferencePartition(v2);
    *a1 = 0LL;
  }
  return 0LL;
}
