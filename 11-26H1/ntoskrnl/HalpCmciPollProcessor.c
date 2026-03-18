/*
 * XREFs of HalpCmciPollProcessor @ 0x140453AE4
 * Callers:
 *     HalpCmciInitProcessor @ 0x140453268 (HalpCmciInitProcessor.c)
 *     HalpCmciDeferredRoutine @ 0x14057E660 (HalpCmciDeferredRoutine.c)
 * Callees:
 *     HalpCmcPollProcessor @ 0x140453548 (HalpCmcPollProcessor.c)
 *     HalpGetCpuVendor @ 0x140453A00 (HalpGetCpuVendor.c)
 *     HalpGetMcaPcrContext @ 0x140453A54 (HalpGetMcaPcrContext.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140454888 (HalpCmciSetProcessorConfigAMD.c)
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
