/*
 * XREFs of SdbpGetDatabaseRuntimePlatform @ 0x140B3A888
 * Callers:
 *     SdbpCheckRuntimePlatform @ 0x14088A130 (SdbpCheckRuntimePlatform.c)
 *     SdbInitDatabaseInMemory @ 0x1409D6974 (SdbInitDatabaseInMemory.c)
 * Callees:
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x14088C444 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpGetDatabaseRuntimePlatform(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int FirstTag; // esi
  unsigned int v4; // eax
  unsigned int v7; // eax
  int DWORDTag; // eax

  v2 = 0;
  FirstTag = SdbFindFirstTag(a1, 0LL, 28673);
  if ( FirstTag )
  {
    if ( (*(_DWORD *)(a1 + 2608) & 2) != 0 || (v4 = SdbFindFirstTag(a1, FirstTag, 16417)) == 0 )
    {
      v7 = SdbFindFirstTag(a1, FirstTag, 16419);
      if ( v7 )
        DWORDTag = SdbReadDWORDTag(a1, v7, 0);
      else
        DWORDTag = 1;
      return (unsigned int)SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(DWORDTag);
    }
    else
    {
      return (unsigned int)SdbReadDWORDTag(a1, v4, 0);
    }
  }
  else
  {
    AslLogCallPrintf(1LL, (__int64)"SdbpGetDatabaseRuntimePlatform");
  }
  return v2;
}
