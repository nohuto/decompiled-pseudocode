/*
 * XREFs of SdbFindFirstDWORDIndexedTag @ 0x180092BA8
 * Callers:
 *     SdbpReadApphelpDisplayCustom @ 0x180090E54 (SdbpReadApphelpDisplayCustom.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetIndex @ 0x180092C5C (SdbGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x180092DD8 (SdbpGetFirstIndexedRecord.c)
 *     SdbpFindMatchingDWORD @ 0x1800931D4 (SdbpFindMatchingDWORD.c)
 */

__int64 __fastcall SdbFindFirstDWORDIndexedTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // rsi
  unsigned int Index; // eax
  unsigned int *v8; // rbx
  unsigned int FirstIndexedRecord; // eax
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  v5 = a4;
  v11 = 0;
  Index = SdbGetIndex(a1, a2, a3, &v11);
  v8 = a5;
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(1LL, "SdbFindFirstDWORDIndexedTag", 165LL, "Failed to find index 0x%lx key 0x%lx", 28685, 16405);
    return 0LL;
  }
  v8[5] = v11;
  *((_WORD *)v8 + 6) = 16405;
  v8[8] = v5;
  *((_QWORD *)v8 + 3) = v5;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord(a1, Index, v5, v8);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingDWORD(a1, FirstIndexedRecord, v8);
}
