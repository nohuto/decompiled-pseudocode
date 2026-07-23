/*
 * XREFs of SdbpFindMatchingName @ 0x140B29968
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x1409D6D00 (SdbFindFirstStringIndexedTag.c)
 *     SdbGetDatabaseMatchEx @ 0x1409D745C (SdbGetDatabaseMatchEx.c)
 *     SdbFindNextStringIndexedTag @ 0x140B29928 (SdbFindNextStringIndexedTag.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbpGetNextIndexedRecord @ 0x140B29A58 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbpFindMatchingName(void *a1, unsigned int NextIndexedRecord, unsigned int *a3)
{
  unsigned int FirstTag; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  const wchar_t *StringTagPtr; // rcx
  bool v10; // zf
  int v12; // eax

  while ( 1 )
  {
    if ( !NextIndexedRecord )
      return NextIndexedRecord;
    FirstTag = SdbFindFirstTag((__int64)a1, NextIndexedRecord, *((_WORD *)a3 + 6));
    if ( !FirstTag )
      break;
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag, v7, v8);
    if ( !StringTagPtr )
      break;
    if ( (a3[5] & 1) != 0 )
    {
      v12 = wcsicmp(*((const wchar_t **)a3 + 4), StringTagPtr);
      v10 = v12 == 0;
      if ( v12 < 0 )
        return 0LL;
    }
    else
    {
      v10 = wcsicmp(StringTagPtr, *((const wchar_t **)a3 + 4)) == 0;
    }
    if ( v10 )
      return NextIndexedRecord;
    NextIndexedRecord = SdbpGetNextIndexedRecord(a1, *a3, a3);
  }
  AslLogCallPrintf(1LL, (__int64)"SdbpFindMatchingName");
  return 0LL;
}
