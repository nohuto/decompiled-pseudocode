/*
 * XREFs of CmFcManagerNotifyFeatureUsage @ 0x140358C78
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140358A70 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     RtlNotifyFeatureUsage @ 0x140358C60 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlReleaseSwapReference @ 0x1403104F0 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x14031057C (RtlAcquireSwapReference.c)
 *     CmpWorkItemQueueWork @ 0x14035884C (CmpWorkItemQueueWork.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x140358D6C (RtlpFcAddDelayedUsageReportToBuffer.c)
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
  PVOID v10; // rcx
  int v11; // ebx

  v3 = 0;
  EffectiveIrql = KeGetEffectiveIrql();
  if ( EffectiveIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 1;
    --CurrentThread->KernelApcDisable;
  }
  v8 = (unsigned int)RtlAcquireSwapReference((__int64 *)&CmpFreezeListLock.SchedulerApc.ApcListEntry, v4, v6);
  v10 = CmpFreezeListLock.SchedulerApc.Reserved[v8 + 3];
  if ( v10 )
  {
    v11 = RtlpFcAddDelayedUsageReportToBuffer(v10, a2);
    if ( v11 >= 0 )
    {
      RtlReleaseSwapReference((unsigned __int64 *)&CmpFreezeListLock.SchedulerApc.ApcListEntry, v8, v9);
      if ( CmpFreezeListLock.SchedulerApcFill3[48] )
      {
        if ( EffectiveIrql >= 2u )
          KiInsertQueueDpc((ULONG_PTR)&CmpFreezeListLock.SchedulerApc.SystemArgument2, 0LL, 0LL, 0LL, 0);
        else
          CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)&CmpFreezeListLock.MutantListHead.Blink);
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
    RtlReleaseSwapReference((unsigned __int64 *)&CmpFreezeListLock.SchedulerApc.ApcListEntry, v8, v9);
LABEL_12:
  if ( v3 )
    KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
