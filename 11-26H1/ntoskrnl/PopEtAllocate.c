/*
 * XREFs of PopEtAllocate @ 0x140AFDD70
 * Callers:
 *     PopEtAggregateGet @ 0x1409CD378 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1409CD808 (PopEtProcessSnapshotCreate.c)
 *     PopEtInit @ 0x140CDBE50 (PopEtInit.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PopEtAllocate()
{
  return ExAllocatePool2(0x100uLL);
}
