/*
 * XREFs of RtlArmFeatureUsageProviderFlushNotification @ 0x1404FEB20
 * Callers:
 *     CmInitSystem0 @ 0x140CEBD08 (CmInitSystem0.c)
 * Callees:
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x1402C59E4 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 */

void __fastcall RtlArmFeatureUsageProviderFlushNotification(__int64 a1, char a2)
{
  _m_prefetchw((const void *)(a1 + 100));
  CmFcpManagerArmFeatureUsageProviderFlushNotification(
    a1,
    a2,
    (_InterlockedOr((volatile signed __int32 *)(a1 + 100), 1u) & 1) == 0);
}
