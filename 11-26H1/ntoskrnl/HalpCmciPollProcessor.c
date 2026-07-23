/*
 * XREFs of HalpCmciPollProcessor @ 0x14044BC14
 * Callers:
 *     HalpCmciInitProcessor @ 0x14044B398 (HalpCmciInitProcessor.c)
 *     HalpCmciDeferredRoutine @ 0x140580B80 (HalpCmciDeferredRoutine.c)
 * Callees:
 *     HalpCmcPollProcessor @ 0x14044B678 (HalpCmcPollProcessor.c)
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 *     HalpGetMcaPcrContext @ 0x14044BB84 (HalpGetMcaPcrContext.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x14044C9B8 (HalpCmciSetProcessorConfigAMD.c)
 */

__int64 __fastcall HalpCmciPollProcessor(__int64 a1)
{
  unsigned __int8 CpuVendor; // di
  __int64 v3; // rdx
  __int64 McaPcrContext; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  CpuVendor = HalpGetCpuVendor();
  McaPcrContext = HalpGetMcaPcrContext(a1, v3);
  LOBYTE(v5) = 1;
  result = HalpCmcPollProcessor(*(_QWORD *)(McaPcrContext + 16), v5, a1, McaPcrContext);
  if ( CpuVendor == 1 )
    return HalpCmciSetProcessorConfigAMD(HalpCmcErrorSource);
  return result;
}
