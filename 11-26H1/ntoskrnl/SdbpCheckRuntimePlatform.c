/*
 * XREFs of SdbpCheckRuntimePlatform @ 0x14088A130
 * Callers:
 *     <none>
 * Callees:
 *     SdbpCheckRuntimePlatformImpl @ 0x14088A19C (SdbpCheckRuntimePlatformImpl.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 *     SdbpGetDatabaseRuntimePlatform @ 0x140B3A888 (SdbpGetDatabaseRuntimePlatform.c)
 */

__int64 __fastcall SdbpCheckRuntimePlatform(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int DatabaseRuntimePlatform; // ebx
  unsigned int DWORDTag; // eax

  DatabaseRuntimePlatform = *(_DWORD *)(a2 + 552);
  if ( !DatabaseRuntimePlatform && *(_QWORD *)(a2 + 8) )
    DatabaseRuntimePlatform = SdbpGetDatabaseRuntimePlatform();
  DWORDTag = SdbReadDWORDTag(a3, a5, 255LL, a4);
  return SdbpCheckRuntimePlatformImpl(a1, *(unsigned int *)(a3 + 2608), DatabaseRuntimePlatform, DWORDTag);
}
