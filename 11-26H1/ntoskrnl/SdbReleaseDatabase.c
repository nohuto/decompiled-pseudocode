/*
 * XREFs of SdbReleaseDatabase @ 0x1409D5F00
 * Callers:
 *     PpReleaseBootDDB @ 0x140779D38 (PpReleaseBootDDB.c)
 *     KsepSdbBootRelease @ 0x1407C1674 (KsepSdbBootRelease.c)
 *     KsepSdbUnmapFromMemory @ 0x1409D5E7C (KsepSdbUnmapFromMemory.c)
 *     PiReleaseDDB @ 0x140A38F24 (PiReleaseDDB.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     SdbpCleanupUserSDBCache @ 0x1409D630C (SdbpCleanupUserSDBCache.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x1409D6348 (SdbpCleanupLocalDatabaseSupport.c)
 *     SdbCloseDatabaseRead @ 0x1409D6398 (SdbCloseDatabaseRead.c)
 */

__int64 __fastcall SdbReleaseDatabase(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  AslLogCallPrintf(3LL, (__int64)"SdbReleaseDatabase");
  if ( *(_DWORD *)(a1 + 1768) )
  {
    v4 = *(_QWORD *)(a1 + 1776);
    if ( _InterlockedDecrement((volatile signed __int32 *)(v4 + 1776)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1776) + 1776LL));
      AslLogCallPrintf(1LL, (__int64)"SdbReleaseDatabase");
    }
    return AslFree(v4, a1);
  }
  if ( *(int *)(a1 + 1776) <= 0 )
  {
    SdbpCleanupLocalDatabaseSupport(a1);
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
      SdbCloseDatabaseRead(v2);
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      SdbCloseDatabaseRead(v3);
    SdbpCleanupUserSDBCache(a1);
    return AslFree(v4, a1);
  }
  return AslLogCallPrintf(1LL, (__int64)"SdbReleaseDatabase");
}
