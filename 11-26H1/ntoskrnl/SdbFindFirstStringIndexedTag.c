/*
 * XREFs of SdbFindFirstStringIndexedTag @ 0x1409E6084
 * Callers:
 *     SdbGetKShimTagRef @ 0x140881D4C (SdbGetKShimTagRef.c)
 *     SdbGetDatabaseMatchEx @ 0x1409E57D4 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140A92348 (SdbpSearchDB.c)
 * Callees:
 *     SdbpGetFirstIndexedRecord @ 0x1409E5EDC (SdbpGetFirstIndexedRecord.c)
 *     SdbGetIndex @ 0x1409E6C78 (SdbGetIndex.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1409E8AF0 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbpFindMatchingName @ 0x140B27CD8 (SdbpFindMatchingName.c)
 */

__int64 __fastcall SdbFindFirstStringIndexedTag(void *a1, __int64 a2, __int16 a3, const WCHAR *a4, __int64 a5)
{
  int Index; // eax
  __int64 IndexKeyFromString; // rax
  unsigned int v10; // edx
  unsigned int FirstIndexedRecord; // eax

  Index = SdbGetIndex(a1);
  *(_DWORD *)a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbFindFirstStringIndexedTag",
      242,
      (unsigned int)"Index not found 0x%lx Key 0x%lx");
    return 0LL;
  }
  *(_DWORD *)(a5 + 20) = 0;
  *(_WORD *)(a5 + 12) = a3;
  *(_QWORD *)(a5 + 32) = a4;
  IndexKeyFromString = SdbMakeIndexKeyFromStringEx(a4);
  v10 = *(_DWORD *)a5;
  *(_QWORD *)(a5 + 24) = IndexKeyFromString;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord((__int64)a1, v10, IndexKeyFromString, (_DWORD *)a5);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingName(a1, FirstIndexedRecord, a5);
}
