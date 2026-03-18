/*
 * XREFs of PopEtEnergyTrackerEnumSnapshotCallback @ 0x140950DF8
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x140950D08 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     PopEtProcessSnapshotUpdate @ 0x140951054 (PopEtProcessSnapshotUpdate.c)
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
