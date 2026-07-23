/*
 * XREFs of KeFindFirstSetLeftAffinityEx @ 0x140421C30
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x140421350 (PpmUpdatePlatformIdleVeto.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14061280C (PpmParkDetectTopologyLevelInfo.c)
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetLeftAffinityEx(__int16 *a1)
{
  __int16 v1; // dx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v1 = *a1;
  while ( --v1 >= 0 )
  {
    v2 = *(_QWORD *)&a1[4 * v1 + 4];
    if ( v2 )
    {
      _BitScanReverse64(&v3, v2);
      return *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
             + (unsigned int)((v1 << 6) + v3));
    }
  }
  return 0xFFFFFFFFLL;
}
