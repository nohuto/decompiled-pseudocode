/*
 * XREFs of HalpMcaProcessorBankConfig @ 0x140454AF8
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x140BE91B8 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140453A00 (HalpGetCpuVendor.c)
 *     HalpMcaProcessorBankConfigAmd @ 0x14057E7F4 (HalpMcaProcessorBankConfigAmd.c)
 */

unsigned __int8 HalpMcaProcessorBankConfig()
{
  unsigned __int8 result; // al
  __int64 v1; // r8

  result = HalpGetCpuVendor();
  if ( result == 1 )
  {
    if ( HalpMcaScalableRasSupported )
      return HalpMcaProcessorBankConfigAmd(v1);
  }
  return result;
}
