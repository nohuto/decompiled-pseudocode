/*
 * XREFs of PspEnqueueProcessQosChangeNotification @ 0x140518208
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x140518324 (PspSetProcessPriorityByClass.c)
 *     PsSetProcessPowerThrottlingState @ 0x140617EEC (PsSetProcessPowerThrottlingState.c)
 *     PspRefreshProcessUserPresencePpmPolicyCallback @ 0x140618260 (PspRefreshProcessUserPresencePpmPolicyCallback.c)
 *     PspSetProcessBamPpmPolicy @ 0x1407F64F0 (PspSetProcessBamPpmPolicy.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     PspSetProcessPriorityByClassIgnoreForegroundBoost @ 0x140B7D69C (PspSetProcessPriorityByClassIgnoreForegroundBoost.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     Feature_DefaultQosDeletingProcesses__private_IsEnabledDeviceUsageNoInline @ 0x140617CAC (Feature_DefaultQosDeletingProcesses__private_IsEnabledDeviceUsageNoInline.c)
 *     PspProcessQosChangeNotificationInsertList @ 0x140618118 (PspProcessQosChangeNotificationInsertList.c)
 */

void __fastcall PspEnqueueProcessQosChangeNotification(PVOID Object)
{
  struct _KLOCK_ENTRIES *v2; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v4; // rax
  volatile unsigned __int8 *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rdi

  if ( !(unsigned int)Feature_DefaultQosDeletingProcesses__private_IsEnabledDeviceUsageNoInline()
    || (*((_DWORD *)Object + 125) & 0x40000008) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry, 0LL, 0LL, v2);
    v6 = _interlockedbittestandset64(
           (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.SchedulerApcFill5[16],
           0LL);
    v7 = v4;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry,
        v4,
        (__int64)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry);
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v5) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v7 + 33), v5, 1);
      }
      else
      {
        *((_BYTE *)v7 + 10) = 1;
      }
    }
    if ( (PsAltSystemCallRegistrationLock.SchedulerApcFill3[8] & 2) != 0 )
    {
      PspProcessQosChangeNotificationInsertList(Object);
      if ( (PsAltSystemCallRegistrationLock.SchedulerApcFill3[8] & 1) == 0 )
      {
        PsAltSystemCallRegistrationLock.SchedulerApc.Thread = (struct _KTHREAD *)((unsigned __int64)PsAltSystemCallRegistrationLock.SchedulerApc.Thread | 1);
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&PsAltSystemCallRegistrationLock.SchedulerApcFill5[32], DelayedWorkQueue);
      }
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry.Flink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry);
    KeAbPostRelease((unsigned __int64)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry);
    KeLeaveCriticalRegion();
  }
}
