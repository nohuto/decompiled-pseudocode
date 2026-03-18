/*
 * XREFs of HalpGetMcaVendorSpecificSections @ 0x14057E714
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x140454498 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpCorrectErrSrc @ 0x140BE9AC0 (HalpCorrectErrSrc.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140453A00 (HalpGetCpuVendor.c)
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
