/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x140487580
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x140968F98 (PiDqQueryAppendActionEntry.c)
 *     PiUpdateDriverDBCache @ 0x140A37858 (PiUpdateDriverDBCache.c)
 *     VfPtGenerateTraceInformation @ 0x140C2FC6C (VfPtGenerateTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
