/*
 * XREFs of HalpCmciSetProcessorConfig @ 0x14044BB50
 * Callers:
 *     HalpCmciInitProcessor @ 0x14044B398 (HalpCmciInitProcessor.c)
 *     HalpDisableCmciOnProcessor @ 0x140580BB0 (HalpDisableCmciOnProcessor.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfigIntel @ 0x14044C18C (HalpCmciSetProcessorConfigIntel.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x14044C9B8 (HalpCmciSetProcessorConfigAMD.c)
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
