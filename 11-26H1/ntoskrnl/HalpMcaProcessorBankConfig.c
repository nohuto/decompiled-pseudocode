/*
 * XREFs of HalpMcaProcessorBankConfig @ 0x14044CC28
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x140BEF1B8 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 *     HalpMcaProcessorBankConfigAmd @ 0x140580D14 (HalpMcaProcessorBankConfigAmd.c)
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
