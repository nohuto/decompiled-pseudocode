/*
 * XREFs of SmCompressionProcessHoldsPartitionReference @ 0x14063E760
 * Callers:
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmCompressionProcessHoldsPartitionReference(__int64 a1)
{
  return a1 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1880) + 24LL) + 2280LL);
}
