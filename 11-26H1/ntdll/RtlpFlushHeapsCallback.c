/*
 * XREFs of RtlpFlushHeapsCallback @ 0x180016FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFlushHeapsCallback(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return RtlpHpHeapCompact(a1, 0);
  else
    return RtlpFlushHeap();
}
