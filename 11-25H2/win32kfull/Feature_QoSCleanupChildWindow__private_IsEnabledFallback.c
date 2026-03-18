/*
 * XREFs of Feature_QoSCleanupChildWindow__private_IsEnabledFallback @ 0x1402B613C
 * Callers:
 *     Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline @ 0x1402B6104 (Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_QoSCleanupChildWindow__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_QoSCleanupChildWindow__private_descriptor);
}
