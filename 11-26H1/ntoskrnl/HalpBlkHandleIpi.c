/*
 * XREFs of HalpBlkHandleIpi @ 0x140C823E0
 * Callers:
 *     HalpBlkIpiInterrupt @ 0x140C83A00 (HalpBlkIpiInterrupt.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperation @ 0x140C82008 (HalpBlkPoPerformPpmOperation.c)
 */

char HalpBlkHandleIpi()
{
  return HalpBlkPoPerformPpmOperation();
}
