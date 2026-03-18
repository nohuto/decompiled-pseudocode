/*
 * XREFs of PopEtAllocate @ 0x140AFC170
 * Callers:
 *     PopEtAggregateGet @ 0x140951A38 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x140951EC8 (PopEtProcessSnapshotCreate.c)
 *     PopEtInit @ 0x140CD5AFC (PopEtInit.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 PopEtAllocate()
{
  return ExAllocatePool2(0x100uLL);
}
