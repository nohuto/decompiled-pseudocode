/*
 * XREFs of Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledFallback @ 0x140098134
 * Callers:
 *     Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledDeviceUsageNoInline @ 0x1400980F8 (Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledDeviceUsageNoInli.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           &Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_descriptor);
}
