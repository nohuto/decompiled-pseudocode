/*
 * XREFs of HalpBlkHandleIpi @ 0x140C7C3E0
 * Callers:
 *     HalpBlkIpiInterrupt @ 0x140C7DA00 (HalpBlkIpiInterrupt.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperation @ 0x140C7C008 (HalpBlkPoPerformPpmOperation.c)
 */

char HalpBlkHandleIpi()
{
  return HalpBlkPoPerformPpmOperation();
}
