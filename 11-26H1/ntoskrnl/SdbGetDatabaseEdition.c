/*
 * XREFs of SdbGetDatabaseEdition @ 0x1409E6C00
 * Callers:
 *     KsepSdbBootInitialize @ 0x1407BE4DC (KsepSdbBootInitialize.c)
 *     KsepSdbMapToMemory @ 0x1409E6578 (KsepSdbMapToMemory.c)
 * Callees:
 *     SdbFindFirstTag @ 0x1409E8510 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x1409E8A54 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbGetDatabaseEdition(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int FirstTag; // eax
  unsigned int v4; // eax
  __int64 v5; // r9

  v2 = 0;
  FirstTag = SdbFindFirstTag(a1, 0LL, 28673LL);
  if ( FirstTag )
  {
    v4 = SdbFindFirstTag(a1, FirstTag, 16469LL);
    if ( v4 )
      return (unsigned int)SdbReadDWORDTag(a1, v4, 0LL, v5);
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetDatabaseEdition",
      727,
      (unsigned int)"Failed to get database tag, db is corrupt");
  }
  return v2;
}
