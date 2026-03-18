/*
 * XREFs of EnableUserkTraceLogging @ 0x14028D690
 * Callers:
 *     <none>
 * Callees:
 *     Feature_DialTracing__private_IsEnabledDeviceUsageNoInline @ 0x14028D6F8 (Feature_DialTracing__private_IsEnabledDeviceUsageNoInline.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1403D3280 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     TlgRegisterAggregateProviderEx @ 0x1403D3BC8 (TlgRegisterAggregateProviderEx.c)
 */

__int64 EnableUserkTraceLogging()
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14039BBC0);
  TlgRegisterAggregateProviderEx();
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14039BB50);
  result = Feature_DialTracing__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14039BBF8);
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14039BC30);
  }
  return result;
}
