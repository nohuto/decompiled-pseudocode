/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x1402C59E4
 * Callers:
 *     CmFcManagerRecordFeatureUsage @ 0x1402C56C8 (CmFcManagerRecordFeatureUsage.c)
 *     RtlArmFeatureUsageProviderFlushNotification @ 0x1404FEB20 (RtlArmFeatureUsageProviderFlushNotification.c)
 *     wil_details_RecordFeatureUsageReporting @ 0x1406E2650 (wil_details_RecordFeatureUsageReporting.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x140532CE8 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 */

void __fastcall CmFcpManagerArmFeatureUsageProviderFlushNotification(__int64 a1, char a2, unsigned int a3)
{
  unsigned __int8 EffectiveIrql; // al
  char v5; // al
  char v6; // bl

  if ( (a2 & 1) != 0 )
  {
    EffectiveIrql = KeGetEffectiveIrql();
    if ( EffectiveIrql >= 2u )
    {
      if ( EffectiveIrql < 0xFu )
        a3 |= 4u;
    }
    else
    {
      a3 |= 2u;
    }
  }
  if ( a3 )
  {
    _m_prefetchw(&dword_140EFBC90);
    v5 = _InterlockedOr(&dword_140EFBC90, a3);
    v6 = ~v5 & a3;
    if ( (v6 & 2) != 0 )
    {
      CmFcpManagerArmFeatureUsageProviderFlushTimer(&CmpFreezeListLock.WaitBlockFill11[144]);
    }
    else if ( (v6 & 4) != 0 && (v5 & 2) == 0 )
    {
      KiInsertQueueDpc((ULONG_PTR)&dword_140EFBB40, 0LL, 0LL, 0LL, 0);
    }
  }
}
