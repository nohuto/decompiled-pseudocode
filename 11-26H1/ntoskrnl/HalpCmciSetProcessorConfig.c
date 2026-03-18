/*
 * XREFs of HalpCmciSetProcessorConfig @ 0x140453A20
 * Callers:
 *     HalpCmciInitProcessor @ 0x140453268 (HalpCmciInitProcessor.c)
 *     HalpDisableCmciOnProcessor @ 0x14057E690 (HalpDisableCmciOnProcessor.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140453A00 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfigIntel @ 0x14045405C (HalpCmciSetProcessorConfigIntel.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140454888 (HalpCmciSetProcessorConfigAMD.c)
 */

unsigned __int8 HalpCmciSetProcessorConfig()
{
  unsigned __int8 result; // al
  __int64 v1; // r9

  result = HalpGetCpuVendor();
  if ( result == 2 )
    return HalpCmciSetProcessorConfigIntel(v1);
  if ( result == 1 )
    return HalpCmciSetProcessorConfigAMD(v1);
  return result;
}
