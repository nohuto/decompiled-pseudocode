/*
 * XREFs of HalpGetMcaMaxVendorSpecificSectionLength @ 0x140580C04
 * Callers:
 *     HalpCorrectErrSrc @ 0x140BEFAC0 (HalpCorrectErrSrc.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 */

__int64 HalpGetMcaMaxVendorSpecificSectionLength()
{
  unsigned __int8 CpuVendor; // al
  unsigned int v1; // edx

  CpuVendor = HalpGetCpuVendor();
  if ( CpuVendor == 2 )
  {
    return 166;
  }
  else if ( CpuVendor == 1 )
  {
    return 133;
  }
  return v1;
}
