/*
 * XREFs of MiTranslateCacheType @ 0x14034A480
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14034A2E0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404AECD0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x14086AB50 (MmMapLockedRestartPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTranslateCacheType(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( a1 == 3 )
    return 1LL;
  if ( !a1 )
    return 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 2;
  if ( !v4 )
    return 0LL;
  if ( v4 == 1 )
    return 2LL;
  return 3LL;
}
