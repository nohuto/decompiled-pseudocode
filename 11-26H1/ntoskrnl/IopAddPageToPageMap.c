/*
 * XREFs of IopAddPageToPageMap @ 0x1404E236C
 * Callers:
 *     IoSetDumpRange @ 0x1405CA2F0 (IoSetDumpRange.c)
 * Callees:
 *     IopSearchAndAddPageRangeToPageMaps @ 0x1404E2408 (IopSearchAndAddPageRangeToPageMaps.c)
 *     IopFilterAndAddPageRangeToPageMaps @ 0x1405D7DD0 (IopFilterAndAddPageRangeToPageMaps.c)
 */

__int64 __fastcall IopAddPageToPageMap(
        int a1,
        unsigned __int64 *a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v7; // r10
  unsigned __int64 v8; // rax

  v7 = a5;
  if ( !a5 )
    return 0LL;
  v8 = *a2;
  if ( a4 >= *a2 )
  {
    if ( a6 )
      return 0LL;
    return 3221225793LL;
  }
  if ( a4 + a5 - 1 < v8 )
    goto LABEL_4;
  if ( !a6 )
    return 3221225793LL;
  v7 = v8 - a4;
LABEL_4:
  if ( !v7 )
    return 0LL;
  if ( CrashdmpDumpBlock && (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 4) != 0 && UseRemovePagesArray == 1 )
    return IopFilterAndAddPageRangeToPageMaps(a1, (_DWORD)a2, a3, a4, v7, a7);
  else
    return IopSearchAndAddPageRangeToPageMaps(a1, (_DWORD)a2, a3, a4, v7, a7);
}
