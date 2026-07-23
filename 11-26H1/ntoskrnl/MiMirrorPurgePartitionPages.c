/*
 * XREFs of MiMirrorPurgePartitionPages @ 0x1406F4AD0
 * Callers:
 *     <none>
 * Callees:
 *     MiWalkAllFreeZeroLists @ 0x14041C710 (MiWalkAllFreeZeroLists.c)
 *     MiPurgePartitionStandby @ 0x140461F1C (MiPurgePartitionStandby.c)
 *     MiHugePurgeZeroList @ 0x140512B18 (MiHugePurgeZeroList.c)
 */

char __fastcall MiMirrorPurgePartitionPages(__int64 a1, unsigned int a2)
{
  int Flink; // esi
  char result; // al
  __int64 v6; // rdx

  Flink = (int)stru_140E2ED08.Timer.TimerListEntry.Flink;
  result = *(_BYTE *)(a1 + 16485);
  if ( result )
  {
    MiWalkAllFreeZeroLists(a1, (__int64)MiPurgeZeroListHeads, 0LL);
    result = MiHugePurgeZeroList((unsigned __int16 *)a1, v6);
    *(_BYTE *)(a1 + 16485) = 0;
    if ( Flink == 3 )
      result = MiWalkAllFreeZeroLists(a1, (__int64)MiMoveHibernateFreeToZeroListHeads, 0LL);
  }
  if ( a2 )
  {
    result = MiPurgePartitionStandby(a1, a2, 0LL, 1);
    *(_BYTE *)(a1 + 16484) = 0;
  }
  return result;
}
