/*
 * XREFs of WheaPrmTranslatePhysicalAddress @ 0x1406D7570
 * Callers:
 *     HalpAddPrmAddressTranslationToMemoryExtAmdSection @ 0x14057E140 (HalpAddPrmAddressTranslationToMemoryExtAmdSection.c)
 *     HalpAddPrmAddressTranslationToMemoryExtIntelSection @ 0x14057E2B8 (HalpAddPrmAddressTranslationToMemoryExtIntelSection.c)
 * Callees:
 *     WheapPrmTranslatePhysicalAddressAmd @ 0x1406D7998 (WheapPrmTranslatePhysicalAddressAmd.c)
 *     WheapPrmTranslatePhysicalAddressIntel @ 0x1406D7A38 (WheapPrmTranslatePhysicalAddressIntel.c)
 */

__int64 __fastcall WheaPrmTranslatePhysicalAddress(__int64 a1)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 CpuVendor; // cl

  result = 3221225659LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->CpuID )
    return 3221225473LL;
  CpuVendor = CurrentPrcb->CpuVendor;
  if ( CpuVendor == 2 )
    return WheapPrmTranslatePhysicalAddressIntel(a1);
  if ( CpuVendor == 1 )
    return WheapPrmTranslatePhysicalAddressAmd(a1);
  return result;
}
