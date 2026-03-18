/*
 * XREFs of ?DxgkComparePointers@@YAHPEBX0@Z @ 0x140039A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkComparePointers(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > *a2;
}
