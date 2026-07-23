/*
 * XREFs of SdbFindFirstStringIndexedTag @ 0x1409D6D00
 * Callers:
 *     SdbGetKShimTagRef @ 0x14088814C (SdbGetKShimTagRef.c)
 *     SdbGetDatabaseMatchEx @ 0x1409D745C (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140A96E98 (SdbpSearchDB.c)
 * Callees:
 *     SdbMakeIndexKeyFromStringEx @ 0x1409D40B8 (SdbMakeIndexKeyFromStringEx.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbGetIndex @ 0x1409D5FF0 (SdbGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1409D6DD4 (SdbpGetFirstIndexedRecord.c)
 *     SdbpFindMatchingName @ 0x140B29968 (SdbpFindMatchingName.c)
 */

__int64 __fastcall SdbFindFirstStringIndexedTag(
        _RTL_RUN_ONCE *a1,
        __int16 a2,
        __int16 a3,
        const WCHAR *a4,
        unsigned int *a5)
{
  unsigned int Index; // eax
  char v9; // dl
  __int64 IndexKeyFromString; // rax
  __int64 v11; // rdx
  unsigned int FirstIndexedRecord; // eax
  unsigned int v14[6]; // [rsp+30h] [rbp-18h] BYREF

  v14[0] = 0;
  Index = SdbGetIndex(a1, a2, a3, v14);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(1LL, (__int64)"SdbFindFirstStringIndexedTag");
    return 0LL;
  }
  v9 = v14[0];
  a5[5] = v14[0];
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  IndexKeyFromString = SdbMakeIndexKeyFromStringEx(a4, v9);
  v11 = *a5;
  *((_QWORD *)a5 + 3) = IndexKeyFromString;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord(a1, v11, IndexKeyFromString, a5);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingName(a1, FirstIndexedRecord, a5);
}
