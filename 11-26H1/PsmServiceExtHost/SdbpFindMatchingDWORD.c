/*
 * XREFs of SdbpFindMatchingDWORD @ 0x1800931D4
 * Callers:
 *     SdbFindFirstDWORDIndexedTag @ 0x180092BA8 (SdbFindFirstDWORDIndexedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpGetNextIndexedRecord @ 0x180092F50 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x180093760 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpFindMatchingDWORD(__int64 a1, unsigned int NextIndexedRecord, unsigned int *a3)
{
  unsigned int FirstTag; // eax
  int DWORDTag; // eax

  while ( NextIndexedRecord )
  {
    FirstTag = SdbFindFirstTag(a1, NextIndexedRecord, *((_WORD *)a3 + 6));
    if ( !FirstTag )
    {
      AslLogCallPrintf(
        1LL,
        "SdbpFindMatchingDWORD",
        714LL,
        "The tag 0x%lx was not found under tag 0x%lx",
        NextIndexedRecord,
        *((unsigned __int16 *)a3 + 6));
      return 0LL;
    }
    DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0xFFFFFFFFLL);
    if ( DWORDTag == -1 )
      return 0LL;
    if ( DWORDTag == a3[8] )
      break;
    NextIndexedRecord = SdbpGetNextIndexedRecord(a1, *a3, (__int64)a3);
  }
  return NextIndexedRecord;
}
