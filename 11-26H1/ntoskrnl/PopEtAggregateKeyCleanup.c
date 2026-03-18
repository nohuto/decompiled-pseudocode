/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x140950F58
 * Callers:
 *     PopEtEnergyTrackerCleanup @ 0x1407DBD60 (PopEtEnergyTrackerCleanup.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x140950E24 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotUpdate @ 0x140951054 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x140951A38 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x140951EC8 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1409518B8 (RtlInternEntryDereference.c)
 *     PopEtAppIdDereference @ 0x140951E98 (PopEtAppIdDereference.c)
 */

__int64 __fastcall PopEtAggregateKeyCleanup(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = PopEtAppIdDereference(v2);
    *a1 = 0LL;
  }
  if ( a1[1] )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56);
    a1[1] = 0LL;
  }
  return result;
}
