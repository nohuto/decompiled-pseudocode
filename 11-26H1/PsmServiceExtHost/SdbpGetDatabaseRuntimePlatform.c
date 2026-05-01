/*
 * XREFs of SdbpGetDatabaseRuntimePlatform @ 0x18008E058
 * Callers:
 *     SdbpCheckRuntimePlatform @ 0x1800961A0 (SdbpCheckRuntimePlatform.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x18008FAC4 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x180093760 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpGetDatabaseRuntimePlatform(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int FirstTag; // eax
  unsigned int v4; // esi
  unsigned int v5; // eax
  unsigned int v7; // eax
  unsigned int DWORDTag; // eax

  v2 = 0;
  FirstTag = SdbFindFirstTag(a1, 0LL, 28673LL);
  v4 = FirstTag;
  if ( FirstTag )
  {
    if ( (*(_BYTE *)(a1 + 2608) & 2) != 0 || (v5 = SdbFindFirstTag(a1, FirstTag, 16417LL)) == 0 )
    {
      v7 = SdbFindFirstTag(a1, v4, 16419LL);
      if ( v7 )
        DWORDTag = SdbReadDWORDTag(a1, v7, 0LL);
      else
        DWORDTag = 1;
      return (unsigned int)SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(DWORDTag);
    }
    else
    {
      return (unsigned int)SdbReadDWORDTag(a1, v5, 0LL);
    }
  }
  else
  {
    AslLogCallPrintf(1LL, "SdbpGetDatabaseRuntimePlatform", 784LL, "Failed to get database tag, db is corrupt");
  }
  return v2;
}
