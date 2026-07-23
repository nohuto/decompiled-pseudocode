/*
 * XREFs of RtlpHeapTrkIsHeapValidCallback @ 0x180110420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHeapTrkIsHeapValidCallback(__int64 a1, __int64 a2)
{
  if ( a1 == *(_QWORD *)a2 )
    *(_BYTE *)(a2 + 8) = 1;
  return 0LL;
}
