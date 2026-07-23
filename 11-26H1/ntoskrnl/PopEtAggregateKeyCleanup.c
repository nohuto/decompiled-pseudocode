/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x1409CC898
 * Callers:
 *     PopEtEnergyTrackerCleanup @ 0x1407DFF80 (PopEtEnergyTrackerCleanup.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1409CC764 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotUpdate @ 0x1409CC994 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x1409CD378 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1409CD808 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1409CD1F8 (RtlInternEntryDereference.c)
 *     PopEtAppIdDereference @ 0x1409CD7D8 (PopEtAppIdDereference.c)
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
