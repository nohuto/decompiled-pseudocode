/*
 * XREFs of KiRegisterTraceLoggingProvider @ 0x140CCA354
 * Callers:
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 * Callees:
 *     Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E9520 (Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     TlgRegisterAggregateProviderEx @ 0x140B6E47C (TlgRegisterAggregateProviderEx.c)
 */

__int64 KiRegisterTraceLoggingProvider()
{
  if ( (unsigned int)Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledDeviceUsageNoInline() )
    return TlgRegisterAggregateProviderEx(
             (__int64)&dword_140E06F90,
             (__int64)KiTraceLogControlCallback,
             (__int64)&dword_140E06F90);
  else
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
             (__int64)&dword_140E06F90,
             (__int64)KiTraceLogControlCallback,
             (__int64)&dword_140E06F90);
}
