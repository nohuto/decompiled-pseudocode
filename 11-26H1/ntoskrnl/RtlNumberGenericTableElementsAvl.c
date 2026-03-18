/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x14048DA40
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x1409A8588 (PiDqQueryAppendActionEntry.c)
 *     PiUpdateDriverDBCache @ 0x140A24D48 (PiUpdateDriverDBCache.c)
 *     VfPtGenerateTraceInformation @ 0x140C29C5C (VfPtGenerateTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
