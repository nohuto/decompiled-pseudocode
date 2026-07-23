/*
 * XREFs of RtlArmFeatureUsageProviderFlushNotification @ 0x1404F80D0
 * Callers:
 *     CmFcInitSystem1 @ 0x140CF3E50 (CmFcInitSystem1.c)
 * Callees:
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x140310680 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 */

void __fastcall RtlArmFeatureUsageProviderFlushNotification(__int64 a1, char a2)
{
  _m_prefetchw((const void *)(a1 + 100));
  CmFcpManagerArmFeatureUsageProviderFlushNotification(
    a1,
    a2,
    (_InterlockedOr((volatile signed __int32 *)(a1 + 100), 1u) & 1) == 0);
}
