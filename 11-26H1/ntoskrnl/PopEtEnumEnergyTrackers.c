/*
 * XREFs of PopEtEnumEnergyTrackers @ 0x1409CC648
 * Callers:
 *     PoEnergyContextCleanup @ 0x1409CBD6C (PoEnergyContextCleanup.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1409CDAE4 (PopEtEnergyContextProcessStateUpdate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PopEtGetNextEnergyTracker @ 0x1409CC6A4 (PopEtGetNextEnergyTracker.c)
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x1409CC738 (PopEtEnergyTrackerEnumSnapshotCallback.c)
 */

__int64 __fastcall PopEtEnumEnergyTrackers(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  __int64 NextEnergyTracker; // rax
  void *v5; // rbx
  int v6; // edi

  v3 = 0LL;
  while ( 1 )
  {
    NextEnergyTracker = PopEtGetNextEnergyTracker(v3);
    v5 = (void *)NextEnergyTracker;
    if ( !NextEnergyTracker )
      break;
    v6 = PopEtEnergyTrackerEnumSnapshotCallback(NextEnergyTracker, a2);
    v3 = v5;
    if ( v6 < 0 )
    {
      ObfDereferenceObjectWithTag(v5, 0x74456F50u);
      return (unsigned int)v6;
    }
  }
  return 0;
}
