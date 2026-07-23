/*
 * XREFs of AsiSortHashTableHelper @ 0x1406DE010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AsiSortHashTableHelper(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
