/*
 * XREFs of MiEmptyAllWorkingSets @ 0x1406FC690
 * Callers:
 *     MiMirrorBrownPhasePartition @ 0x14044341C (MiMirrorBrownPhasePartition.c)
 *     MiFlushAllFilesystemPages @ 0x1405343FC (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x1406FCAF8 (MmEmptyAllWorkingSets.c)
 *     MmPerformMemoryListCommand @ 0x140C12670 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 */

void __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  int v1[3]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v2; // [rsp+2Ch] [rbp-1Ch]
  int v3; // [rsp+3Ch] [rbp-Ch]

  if ( LOBYTE(stru_140E366D8.ReadyTime) )
  {
    v3 = 0;
    v1[0] = 2;
    v2 = 0LL;
    v1[1] = 8;
    v1[2] = 6;
    MiWalkAllWorkingSets(a1, v1);
  }
}
