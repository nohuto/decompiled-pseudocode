/*
 * XREFs of SdbInitDatabaseInMemory @ 0x1409E62EC
 * Callers:
 *     PpBootDDBHelper @ 0x1407A5AE4 (PpBootDDBHelper.c)
 *     KsepSdbBootInitialize @ 0x1407BE4DC (KsepSdbBootInitialize.c)
 *     KsepSdbMapToMemory @ 0x1409E6578 (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x140A25EE0 (PiInitializeDDB.c)
 * Callees:
 *     SdbpOpenDatabaseInMemory @ 0x1409E4018 (SdbpOpenDatabaseInMemory.c)
 *     AslAlloc @ 0x1409E4C90 (AslAlloc.c)
 *     SdbCloseDatabaseRead @ 0x1409E6930 (SdbCloseDatabaseRead.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     SdbpInitializeMatchers @ 0x140AF9B98 (SdbpInitializeMatchers.c)
 *     SdbpGetDatabaseRuntimePlatform @ 0x140B38678 (SdbpGetDatabaseRuntimePlatform.c)
 */

__int64 __fastcall SdbInitDatabaseInMemory(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx

  v4 = AslAlloc();
  if ( !v4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 2606, (unsigned int)"Failed to allocate sdbcontext");
    return 0LL;
  }
  v6 = SdbpOpenDatabaseInMemory(a1, a2, 0);
  *(_QWORD *)(v4 + 8) = v6;
  if ( !v6 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 2615, (unsigned int)"Unable to open main database");
    v7 = *(_QWORD *)(v4 + 8);
    if ( v7 )
      SdbCloseDatabaseRead(v7);
    AslFree(v7, v4);
    return 0LL;
  }
  *(_DWORD *)(v4 + 32) = 1;
  *(_DWORD *)(v4 + 36) = 1;
  *(_DWORD *)(v4 + 64) = 2;
  *(_QWORD *)(v4 + 56) = v6;
  *(_OWORD *)(v4 + 40) = *(_OWORD *)(v6 + 28);
  *(_DWORD *)(v4 + 552) = SdbpGetDatabaseRuntimePlatform(v6);
  SdbpInitializeMatchers(v4);
  return v4;
}
