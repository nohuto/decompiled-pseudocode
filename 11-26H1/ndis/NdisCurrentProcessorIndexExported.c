/*
 * XREFs of NdisCurrentProcessorIndexExported @ 0x1400588E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NdisCurrentProcessorIndexExported(void)
{
  return KeGetPcr()->Prcb.Number;
}
