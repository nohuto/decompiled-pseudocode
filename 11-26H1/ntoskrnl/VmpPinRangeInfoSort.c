/*
 * XREFs of VmpPinRangeInfoSort @ 0x14081D850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpPinRangeInfoSort(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
