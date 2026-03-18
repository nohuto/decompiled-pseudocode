/*
 * XREFs of CmFcManagerNotifyFeatureUsage @ 0x140356ED8
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140356CD0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     RtlNotifyFeatureUsage @ 0x140356EC0 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlReleaseSwapReference @ 0x1402C5854 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x1402C58E0 (RtlAcquireSwapReference.c)
 *     CmpWorkItemQueueWork @ 0x140356AAC (CmpWorkItemQueueWork.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x140356FCC (RtlpFcAddDelayedUsageReportToBuffer.c)
 */

__int64 __fastcall CmFcManagerNotifyFeatureUsage(__int64 a1, __int64 a2)
{
  char v3; // bp
  __int64 v4; // rdx
  unsigned __int8 EffectiveIrql; // si
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // ebx

  v3 = 0;
  EffectiveIrql = KeGetEffectiveIrql();
  if ( EffectiveIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 1;
    --CurrentThread->KernelApcDisable;
  }
  v8 = (unsigned int)RtlAcquireSwapReference((__int64 *)&CmpFreezeListLock.PriorityFloorCounts[16], v4, v6);
  v10 = *((_QWORD *)&CmpFreezeListLock.GlobalForegroundListEntry.Flink + v8);
  if ( v10 )
  {
    v11 = RtlpFcAddDelayedUsageReportToBuffer(v10, a2);
    if ( v11 >= 0 )
    {
      RtlReleaseSwapReference((unsigned __int64 *)&CmpFreezeListLock.PriorityFloorCounts[16], v8, v9);
      if ( LOBYTE(CmpFreezeListLock.ForegroundLossTime) )
      {
        if ( EffectiveIrql >= 2u )
          KiInsertQueueDpc((ULONG_PTR)&CmpFreezeListLock.ReadOperationCount, 0LL, 0LL, 0LL, 0);
        else
          CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)CmpFreezeListLock.TracingPrivate);
      }
      v11 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    v11 = -1073741670;
  }
  if ( (_DWORD)v8 != -1 )
    RtlReleaseSwapReference((unsigned __int64 *)&CmpFreezeListLock.PriorityFloorCounts[16], v8, v9);
LABEL_12:
  if ( v3 )
    KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
