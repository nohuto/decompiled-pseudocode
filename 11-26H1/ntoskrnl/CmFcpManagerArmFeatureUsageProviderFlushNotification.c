/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x140310680
 * Callers:
 *     CmFcManagerRecordFeatureUsage @ 0x140310364 (CmFcManagerRecordFeatureUsage.c)
 *     RtlArmFeatureUsageProviderFlushNotification @ 0x1404F80D0 (RtlArmFeatureUsageProviderFlushNotification.c)
 *     wil_details_RecordFeatureUsageReporting @ 0x1406E6930 (wil_details_RecordFeatureUsageReporting.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x140535188 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
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
    _m_prefetchw(&dword_140EFBFF8);
    v5 = _InterlockedOr(&dword_140EFBFF8, a3);
    v6 = ~v5 & a3;
    if ( (v6 & 2) != 0 )
    {
      CmFcpManagerArmFeatureUsageProviderFlushTimer(&CmpFreezeListLock.Timer.TimerListEntry);
    }
    else if ( (v6 & 4) != 0 && (v5 & 2) == 0 )
    {
      KiInsertQueueDpc((ULONG_PTR)&dword_140EFBEA8, 0LL, 0LL, 0LL, 0);
    }
  }
}
