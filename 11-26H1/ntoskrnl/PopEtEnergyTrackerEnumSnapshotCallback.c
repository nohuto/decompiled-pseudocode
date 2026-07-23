/*
 * XREFs of PopEtEnergyTrackerEnumSnapshotCallback @ 0x1409CC738
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x1409CC648 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     PopEtProcessSnapshotUpdate @ 0x1409CC994 (PopEtProcessSnapshotUpdate.c)
 */

__int64 __fastcall PopEtEnergyTrackerEnumSnapshotCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 16) = a1;
  PopEtProcessSnapshotUpdate(a2);
  result = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  return result;
}
