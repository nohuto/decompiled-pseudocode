/*
 * XREFs of KiDeferredBugcheckRecoveryWorker @ 0x1405FCA00
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     HalReturnToFirmware @ 0x140581B60 (HalReturnToFirmware.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x1405C9F78 (IoSaveBugCheckRecoveryStatus.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405CA64C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     KiBugCheckWriteCrashDump @ 0x1405EA280 (KiBugCheckWriteCrashDump.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405EB0FC (KiInvokeBugCheckEntryCallbacks.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405FC494 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405FC864 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiRecordRecoveryFailure @ 0x1405FCF28 (KiRecordRecoveryFailure.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405FCF60 (KiSaveBugcheckRecoveryProgress.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405FD0B8 (KiSetBugCheckRecoveryProgressFlag.c)
 *     ExRebootSystemForRecovery @ 0x1406CF57C (ExRebootSystemForRecovery.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 KiDeferredBugcheckRecoveryWorker()
{
  volatile unsigned int Lock; // ecx
  char v1; // bl
  __int64 v2; // rdx
  char v4; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int8 v5[7]; // [rsp+21h] [rbp-2Fh] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-18h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (int)KiSaveBugcheckRecoveryProgress(199LL) >= 0 )
  {
    if ( (KsepShimDbLock.SchedulerApcFill5[76] & 0x10) == 0
      && (int)IoWriteCapturedPristineTriageDumpToDedicatedDumpFile() >= 0 )
    {
      KiSetBugCheckRecoveryProgressFlag(0x2000LL);
    }
    Lock = KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock;
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(Lock >> 6);
    Affinity.Mask = 1LL << Lock;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( !KeGetPcr()->Prcb.Number )
    {
      *(_DWORD *)&KsepShimDbLock.WaitBlockFill11[104] = KeGetPcr()->Prcb.Number;
      KsepShimDbLock.WaitBlockFill6[100] = 1;
      KiInvokeBugCheckEntryCallbacks(0x400u);
      *(_DWORD *)&Affinity.Group = 0;
      HIDWORD(Affinity.Mask) = KsepShimDbLock.SchedulerApcFill3[4];
      LODWORD(Affinity.Mask) = 2;
      IoSaveBugCheckRecoveryStatus((int *)&Affinity);
      if ( (int)KiSaveBugcheckRecoveryProgress(196LL) >= 0 )
      {
        if ( !KsepShimDbLock.SchedulerApcFill3[4] )
        {
          KiRecordRecoveryFailure(3LL);
          goto LABEL_14;
        }
        v4 = 0;
        v5[0] = 0;
        v1 = KiBugCheckRecoveryPrepareForCrashDump(v5, (bool *)&v4);
        KiInvokeBugCheckEntryCallbacks(9u);
        if ( v1 )
        {
          KiBugCheckWriteCrashDump((__int64)&KiDpcWatchdogConfigurationLock.CycleTime);
          KiBugCheckRecoveryCleanupFromCrashDump(v5[0], v4);
        }
        if ( !KsepShimDbLock.SchedulerApc.ApcStateIndex && (int)KiSaveBugcheckRecoveryProgress(4LL) >= 0 )
        {
          ExRebootSystemForRecovery();
LABEL_14:
          KsepShimDbLock.WaitBlockFill6[100] = 0;
          goto LABEL_16;
        }
      }
    }
  }
  KiRecordRecoveryFailure(5LL);
LABEL_16:
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (KsepShimDbLock.SchedulerApcFill3[23] & 2) != 0 )
  {
    KeSetEvent((PRKEVENT)&KsepShimDbLock.UserAffinity, 0, 0);
  }
  else if ( (KsepShimDbLock.SchedulerApcFill3[23] & 4) != 0 )
  {
    KiSaveBugcheckRecoveryProgress(198LL);
    guard_dispatch_icall_no_overrides(0LL, v2);
    HalReturnToFirmware(3);
  }
  return KiSaveBugcheckRecoveryProgress(197LL);
}
