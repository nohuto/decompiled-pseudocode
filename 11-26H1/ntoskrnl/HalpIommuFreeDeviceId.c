/*
 * XREFs of HalpIommuFreeDeviceId @ 0x14058BE64
 * Callers:
 *     HalpQueryIommuReservedRegionInformation @ 0x1407824AC (HalpQueryIommuReservedRegionInformation.c)
 *     IommuDeviceCreate @ 0x140786C00 (IommuDeviceCreate.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpIommuFreeDeviceId(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
}
