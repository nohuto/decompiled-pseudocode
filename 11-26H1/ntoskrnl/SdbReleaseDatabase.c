/*
 * XREFs of SdbReleaseDatabase @ 0x1409E6F28
 * Callers:
 *     PpReleaseBootDDB @ 0x140776E90 (PpReleaseBootDDB.c)
 *     KsepSdbBootRelease @ 0x1407BE614 (KsepSdbBootRelease.c)
 *     KsepSdbUnmapFromMemory @ 0x1409E6EA4 (KsepSdbUnmapFromMemory.c)
 *     PiReleaseDDB @ 0x140A25E84 (PiReleaseDDB.c)
 * Callees:
 *     SdbCloseDatabaseRead @ 0x1409E6930 (SdbCloseDatabaseRead.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x1409E69AC (SdbpCleanupLocalDatabaseSupport.c)
 *     SdbpCleanupUserSDBCache @ 0x1409E69FC (SdbpCleanupUserSDBCache.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

void __fastcall SdbReleaseDatabase(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  AslLogCallPrintf(3, (unsigned int)"SdbReleaseDatabase", 154, (unsigned int)"Enter.");
  if ( *(_DWORD *)(a1 + 1768) )
  {
    v5 = *(_QWORD *)(a1 + 1776);
    if ( _InterlockedDecrement((volatile signed __int32 *)(v5 + 1776)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1776) + 1776LL));
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbReleaseDatabase",
        171,
        (unsigned int)"SDB Handle count was decremented after zero.");
    }
    goto LABEL_8;
  }
  if ( *(int *)(a1 + 1776) <= 0 )
  {
    SdbpCleanupLocalDatabaseSupport(a1, v2);
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
      SdbCloseDatabaseRead(v3);
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      SdbCloseDatabaseRead(v4);
    SdbpCleanupUserSDBCache(a1);
LABEL_8:
    AslFree(v5, (void *)a1);
    return;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbReleaseDatabase",
    185,
    (unsigned int)"Attempt to release SDB handle that still has unreleased duplicates.");
}
