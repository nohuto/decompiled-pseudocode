/*
 * XREFs of KiComparePrcbLockOrdering @ 0x140476920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComparePrcbLockOrdering(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
