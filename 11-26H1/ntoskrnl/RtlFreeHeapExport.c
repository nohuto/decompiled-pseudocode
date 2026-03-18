/*
 * XREFs of RtlFreeHeapExport @ 0x140619740
 * Callers:
 *     RtlFreeHeap @ 0x14051C3A0 (RtlFreeHeap.c)
 * Callees:
 *     RtlFreeHeapFull @ 0x140619770 (RtlFreeHeapFull.c)
 */

__int64 __fastcall RtlFreeHeapExport(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlFreeHeapFull(a1, a2, a3);
}
