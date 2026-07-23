/*
 * XREFs of KiCheckRangeOverlap @ 0x1405EA438
 * Callers:
 *     KiAddTriageDumpDataBlock @ 0x1405E9C18 (KiAddTriageDumpDataBlock.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x1405EA7F8 (KiDeduplicateTriageDumpDataArrays.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckRangeOverlap(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r10
  char result; // al
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10

  v3 = *a2;
  result = 0;
  v5 = *a1;
  v6 = *a2 + a2[1];
  v7 = *a1 + a1[1];
  if ( *a1 < v6 && v7 > v3 )
  {
    if ( v5 < v3 )
    {
      v9 = v3 - v5;
      if ( v7 > v6 )
      {
        *a3 = v6;
        a3[1] = v7 - v6;
        result = 1;
      }
      v8 = v9;
    }
    else if ( v7 > v6 )
    {
      *a1 = v6;
      v8 = v7 - v6;
    }
    else
    {
      v8 = 0LL;
    }
    a1[1] = v8;
  }
  return result;
}
