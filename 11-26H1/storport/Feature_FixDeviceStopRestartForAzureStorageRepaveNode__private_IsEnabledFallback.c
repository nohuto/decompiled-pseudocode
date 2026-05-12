/*
 * XREFs of Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledFallback @ 0x1400B27CC
 * Callers:
 *     Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline @ 0x1400B2790 (Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140053138 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           &Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_descriptor);
}
