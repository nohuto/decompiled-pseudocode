/*
 * XREFs of SmCompressionProcessHoldsPartitionReference @ 0x140642340
 * Callers:
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmCompressionProcessHoldsPartitionReference(__int64 a1)
{
  return a1 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1880) + 24LL) + 2280LL);
}
