/*
 * XREFs of SdbGetDatabaseEdition @ 0x1409D60CC
 * Callers:
 *     KsepSdbBootInitialize @ 0x1407C153C (KsepSdbBootInitialize.c)
 *     KsepSdbMapToMemory @ 0x1409D65BC (KsepSdbMapToMemory.c)
 * Callees:
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbGetDatabaseEdition(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int FirstTag; // eax
  unsigned int v4; // eax

  v2 = 0;
  FirstTag = SdbFindFirstTag(a1, 0LL, 28673);
  if ( FirstTag )
  {
    v4 = SdbFindFirstTag(a1, FirstTag, 16469);
    if ( v4 )
      return (unsigned int)SdbReadDWORDTag(a1, v4, 0);
  }
  else
  {
    AslLogCallPrintf(1LL, (__int64)"SdbGetDatabaseEdition");
  }
  return v2;
}
