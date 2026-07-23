/*
 * XREFs of KiRegisterTraceLoggingProvider @ 0x140CD0434
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405EBE90 (Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     TlgRegisterAggregateProviderEx @ 0x140B7192C (TlgRegisterAggregateProviderEx.c)
 */

__int64 KiRegisterTraceLoggingProvider()
{
  if ( (unsigned int)Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledDeviceUsageNoInline() )
    return TlgRegisterAggregateProviderEx(
             (__int64)&dword_140E06F58,
             (__int64)KiTraceLogControlCallback,
             (__int64)&dword_140E06F58);
  else
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
             (__int64)&dword_140E06F58,
             (__int64)KiTraceLogControlCallback,
             (__int64)&dword_140E06F58);
}
