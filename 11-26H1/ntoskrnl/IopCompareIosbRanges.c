/*
 * XREFs of IopCompareIosbRanges @ 0x140A5C180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopCompareIosbRanges(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  if ( *a3 > *a2 )
    return 0LL;
  else
    return 2 - (unsigned int)(*a3 < *a2);
}
