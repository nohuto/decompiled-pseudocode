/*
 * XREFs of PspEnqueueProcessQosChangeNotification @ 0x1404C6FF8
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x14051C2E4 (PspSetProcessPriorityByClass.c)
 *     PsSetProcessPowerThrottlingState @ 0x14061502C (PsSetProcessPowerThrottlingState.c)
 *     PspRefreshProcessUserPresencePpmPolicyCallback @ 0x140615350 (PspRefreshProcessUserPresencePpmPolicyCallback.c)
 *     PspSetProcessBamPpmPolicy @ 0x1407F0990 (PspSetProcessBamPpmPolicy.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     PspSetProcessPriorityByClassIgnoreForegroundBoost @ 0x140B77F8C (PspSetProcessPriorityByClassIgnoreForegroundBoost.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PspProcessQosChangeNotificationInsertList @ 0x140615240 (PspProcessQosChangeNotificationInsertList.c)
 */

void __fastcall PspEnqueueProcessQosChangeNotification(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.WaitBlock[3], 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(
         (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[144],
         0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PsAltSystemCallRegistrationLock.WaitBlock[3],
      v6,
      (__int64)&PsAltSystemCallRegistrationLock.WaitBlock[3]);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( (PsAltSystemCallRegistrationLock.WaitBlockFill7[136] & 2) != 0 )
  {
    PspProcessQosChangeNotificationInsertList(a1, &PsAltSystemCallRegistrationLock.WaitBlockFill11[152]);
    if ( (PsAltSystemCallRegistrationLock.WaitBlockFill7[136] & 1) == 0 )
    {
      PsAltSystemCallRegistrationLock.WaitBlock[2].SparePtr = (PVOID)((unsigned __int64)PsAltSystemCallRegistrationLock.WaitBlock[2].SparePtr | 1);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&PsAltSystemCallRegistrationLock.WaitBlockFill11[160], DelayedWorkQueue);
    }
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.WaitBlock[3].WaitListEntry.Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PsAltSystemCallRegistrationLock.WaitBlock[3]);
  KeAbPostRelease((unsigned __int64)&PsAltSystemCallRegistrationLock.WaitBlock[3]);
  KeLeaveCriticalRegion();
}
