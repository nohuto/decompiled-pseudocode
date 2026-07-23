/*
 * XREFs of HalpGetMcaVendorSpecificSections @ 0x140580C34
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x14044C5C8 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpCorrectErrSrc @ 0x140BEFAC0 (HalpCorrectErrSrc.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 */

__int64 HalpGetMcaVendorSpecificSections()
{
  unsigned __int16 v0; // dx
  unsigned __int8 CpuVendor; // r8

  CpuVendor = HalpGetCpuVendor();
  if ( CpuVendor == 2 )
  {
    return 1;
  }
  else if ( CpuVendor == 1 )
  {
    return 1;
  }
  return v0;
}
