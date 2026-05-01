/*
 * XREFs of SdbReleaseDatabase @ 0x18008DDFC
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180058564 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbCloseDatabaseRead @ 0x18008D3D4 (SdbCloseDatabaseRead.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x18008FFCC (SdbpCleanupLocalDatabaseSupport.c)
 *     SdbpRemoveSDBLookupEntry @ 0x1800920B4 (SdbpRemoveSDBLookupEntry.c)
 *     ShimExceptionHandler @ 0x180097528 (ShimExceptionHandler.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 */

__int64 (__fastcall *__fastcall SdbReleaseDatabase(__int64 a1))(_QWORD)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  AslLogCallPrintf(3LL, "SdbReleaseDatabase", 154LL, "Enter.");
  if ( *(_DWORD *)(a1 + 1768) )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1776) + 1776LL)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1776) + 1776LL));
      AslLogCallPrintf(1LL, "SdbReleaseDatabase", 171LL, "SDB Handle count was decremented after zero.");
    }
  }
  else
  {
    if ( *(int *)(a1 + 1776) > 0 )
      return AslLogCallPrintf(
               1LL,
               "SdbReleaseDatabase",
               185LL,
               "Attempt to release SDB handle that still has unreleased duplicates.");
    SdbpCleanupLocalDatabaseSupport(a1);
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
      SdbCloseDatabaseRead(v3);
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      SdbCloseDatabaseRead(v4);
    while ( *(_QWORD *)(a1 + 576) )
      SdbpRemoveSDBLookupEntry(a1);
  }
  return (__int64 (__fastcall *)(_QWORD))AslFree(NtCurrentPeb()->ProcessHeap, a1);
}
