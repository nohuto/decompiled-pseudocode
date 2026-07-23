/*
 * XREFs of HalpIommuFreeDeviceId @ 0x14058E5E4
 * Callers:
 *     HalpQueryIommuReservedRegionInformation @ 0x140784FAC (HalpQueryIommuReservedRegionInformation.c)
 *     IommuDeviceCreate @ 0x140789730 (IommuDeviceCreate.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpIommuFreeDeviceId(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
}
