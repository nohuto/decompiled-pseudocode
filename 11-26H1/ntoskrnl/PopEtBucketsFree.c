/*
 * XREFs of PopEtBucketsFree @ 0x1407DFDE4
 * Callers:
 *     PopEtAggregateGet @ 0x1409CD378 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1409CD808 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
