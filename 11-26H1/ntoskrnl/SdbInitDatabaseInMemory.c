/*
 * XREFs of SdbInitDatabaseInMemory @ 0x1409D6974
 * Callers:
 *     PpBootDDBHelper @ 0x1407A8694 (PpBootDDBHelper.c)
 *     KsepSdbBootInitialize @ 0x1407C153C (KsepSdbBootInitialize.c)
 *     KsepSdbMapToMemory @ 0x1409D65BC (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x140A38F80 (PiInitializeDDB.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     SdbCloseDatabaseRead @ 0x1409D6398 (SdbCloseDatabaseRead.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     SdbpOpenDatabaseInMemory @ 0x1409D8A34 (SdbpOpenDatabaseInMemory.c)
 *     SdbpInitializeMatchers @ 0x140AFC024 (SdbpInitializeMatchers.c)
 *     SdbpGetDatabaseRuntimePlatform @ 0x140B3A888 (SdbpGetDatabaseRuntimePlatform.c)
 */

__int64 __fastcall SdbInitDatabaseInMemory(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx

  v4 = AslAlloc(a1, 1784LL);
  if ( !v4 )
  {
    AslLogCallPrintf(1LL, (__int64)"SdbInitDatabaseInMemory");
    return 0LL;
  }
  v6 = SdbpOpenDatabaseInMemory(a1, a2, 0LL);
  *(_QWORD *)(v4 + 8) = v6;
  if ( !v6 )
  {
    AslLogCallPrintf(1LL, (__int64)"SdbInitDatabaseInMemory");
    v7 = *(_QWORD *)(v4 + 8);
    if ( v7 )
      SdbCloseDatabaseRead(v7);
    AslFree(v7, (void *)v4);
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
