/*
 * XREFs of MiKcsanIgnoredRangeSort @ 0x140476940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiKcsanIgnoredRangeSort(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
