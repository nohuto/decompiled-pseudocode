/*
 * XREFs of HalpBlkApicEndOfInterrupt @ 0x140C7C1D0
 * Callers:
 *     HalpBlkStubInterrupt @ 0x140C7D880 (HalpBlkStubInterrupt.c)
 *     HalpBlkIpiInterrupt @ 0x140C7DA00 (HalpBlkIpiInterrupt.c)
 *     HalpBlkLocalErrorInterrupt @ 0x140C7DAC0 (HalpBlkLocalErrorInterrupt.c)
 *     HalpBlkUnexpectedInterruptCommon @ 0x140C7E600 (HalpBlkUnexpectedInterruptCommon.c)
 * Callees:
 *     HalpBlkApicWrite @ 0x140C7C390 (HalpBlkApicWrite.c)
 */

__int64 HalpBlkApicEndOfInterrupt()
{
  return HalpBlkApicWrite(176LL, 0LL);
}
