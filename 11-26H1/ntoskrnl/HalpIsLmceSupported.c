/*
 * XREFs of HalpIsLmceSupported @ 0x140531E44
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x140BEF1B8 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 */

bool HalpIsLmceSupported()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v1; // rax

  if ( HalpGetCpuVendor() != 2 )
    return 0;
  v0 = __readmsr(0x179u);
  if ( (v0 & 0x8000000) == 0 )
    return 0;
  v1 = __readmsr(0x3Au);
  return (v1 & 0x100001) == 1048577;
}
