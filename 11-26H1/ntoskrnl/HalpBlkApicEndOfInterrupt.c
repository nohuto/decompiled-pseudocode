/*
 * XREFs of HalpBlkApicEndOfInterrupt @ 0x140C821D0
 * Callers:
 *     HalpBlkStubInterrupt @ 0x140C83880 (HalpBlkStubInterrupt.c)
 *     HalpBlkIpiInterrupt @ 0x140C83A00 (HalpBlkIpiInterrupt.c)
 *     HalpBlkLocalErrorInterrupt @ 0x140C83AC0 (HalpBlkLocalErrorInterrupt.c)
 *     HalpBlkUnexpectedInterruptCommon @ 0x140C84600 (HalpBlkUnexpectedInterruptCommon.c)
 * Callees:
 *     HalpBlkApicWrite @ 0x140C82390 (HalpBlkApicWrite.c)
 */

__int64 HalpBlkApicEndOfInterrupt()
{
  return HalpBlkApicWrite(176LL, 0LL);
}
