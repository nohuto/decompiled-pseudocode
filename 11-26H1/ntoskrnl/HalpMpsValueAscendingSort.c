/*
 * XREFs of HalpMpsValueAscendingSort @ 0x1405A3680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpMpsValueAscendingSort(_BYTE *a1, _BYTE *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
