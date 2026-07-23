/*
 * XREFs of RtlFreeHeapExport @ 0x14061C79C
 * Callers:
 *     RtlFreeHeap @ 0x140518F90 (RtlFreeHeap.c)
 * Callees:
 *     RtlFreeHeapFull @ 0x14061C7CC (RtlFreeHeapFull.c)
 */

__int64 __fastcall RtlFreeHeapExport(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlFreeHeapFull(a1, a2, a3);
}
