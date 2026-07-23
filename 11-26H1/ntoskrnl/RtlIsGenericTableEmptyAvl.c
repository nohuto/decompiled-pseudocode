/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x140479EC0
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x140950AA4 (PiDqQueryFreeActiveData.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PiLookupInDDBCache @ 0x140A38CB4 (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
