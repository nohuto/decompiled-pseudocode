/*
 * XREFs of WheaPrmTranslatePhysicalAddress @ 0x1406DB700
 * Callers:
 *     HalpAddPrmAddressTranslationToMemoryExtAmdSection @ 0x140580660 (HalpAddPrmAddressTranslationToMemoryExtAmdSection.c)
 *     HalpAddPrmAddressTranslationToMemoryExtIntelSection @ 0x1405807D8 (HalpAddPrmAddressTranslationToMemoryExtIntelSection.c)
 * Callees:
 *     WheapPrmTranslatePhysicalAddressAmd @ 0x1406DBB28 (WheapPrmTranslatePhysicalAddressAmd.c)
 *     WheapPrmTranslatePhysicalAddressIntel @ 0x1406DBBC8 (WheapPrmTranslatePhysicalAddressIntel.c)
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
