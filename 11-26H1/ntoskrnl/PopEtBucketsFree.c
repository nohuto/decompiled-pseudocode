/*
 * XREFs of PopEtBucketsFree @ 0x1407DBBC4
 * Callers:
 *     PopEtAggregateGet @ 0x140951A38 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x140951EC8 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
