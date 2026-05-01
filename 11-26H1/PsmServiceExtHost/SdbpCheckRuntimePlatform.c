/*
 * XREFs of SdbpCheckRuntimePlatform @ 0x1800961A0
 * Callers:
 *     <none>
 * Callees:
 *     SdbpGetDatabaseRuntimePlatform @ 0x18008E058 (SdbpGetDatabaseRuntimePlatform.c)
 *     SdbReadDWORDTag @ 0x180093760 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpCheckRuntimePlatform(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int DatabaseRuntimePlatform; // ebx
  __int64 v8; // rcx
  unsigned int DWORDTag; // eax

  DatabaseRuntimePlatform = *(_DWORD *)(a2 + 552);
  if ( !DatabaseRuntimePlatform )
  {
    v8 = *(_QWORD *)(a2 + 8);
    if ( v8 )
      DatabaseRuntimePlatform = SdbpGetDatabaseRuntimePlatform(v8);
  }
  DWORDTag = SdbReadDWORDTag(a3, a5, 0xFFu);
  return SdbpCheckRuntimePlatformImpl(a1, *(unsigned int *)(a3 + 2608), DatabaseRuntimePlatform, DWORDTag);
}
