/*
 * XREFs of KiDeferredBugcheckRecoveryWorker @ 0x1405F9FE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     HalReturnToFirmware @ 0x14057F640 (HalReturnToFirmware.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x1405C76A8 (IoSaveBugCheckRecoveryStatus.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405C7D7C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     KiBugCheckWriteCrashDump @ 0x1405E7910 (KiBugCheckWriteCrashDump.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405E878C (KiInvokeBugCheckEntryCallbacks.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405F9A74 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405F9E44 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiRecordRecoveryFailure @ 0x1405FA508 (KiRecordRecoveryFailure.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405FA540 (KiSaveBugcheckRecoveryProgress.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405FA698 (KiSetBugCheckRecoveryProgressFlag.c)
 *     ExRebootSystemForRecovery @ 0x1406CB54C (ExRebootSystemForRecovery.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 KiDeferredBugcheckRecoveryWorker()
{
  unsigned int v0; // ecx
  char v1; // bl
  __int64 v2; // rdx
  char v4; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int8 v5[7]; // [rsp+21h] [rbp-2Fh] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-18h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (int)KiSaveBugcheckRecoveryProgress(199LL) >= 0 )
  {
    if ( (KsepShimDbLock.WaitBlockFill7[136] & 0x10) == 0
      && (int)IoWriteCapturedPristineTriageDumpToDedicatedDumpFile() >= 0 )
    {
      KiSetBugCheckRecoveryProgressFlag(0x2000LL);
    }
    v0 = **(_DWORD **)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v0 >> 6);
    Affinity.Mask = 1LL << v0;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( !KeGetPcr()->Prcb.Number )
    {
      *(_DWORD *)&KsepShimDbLock.SchedulerApcFill5[56] = KeGetPcr()->Prcb.Number;
      KsepShimDbLock.SchedulerApcFill3[52] = 1;
      KiInvokeBugCheckEntryCallbacks(0x400u);
      *(_DWORD *)&Affinity.Group = 0;
      HIDWORD(Affinity.Mask) = KsepShimDbLock.WaitBlockFill7[156];
      LODWORD(Affinity.Mask) = 2;
      IoSaveBugCheckRecoveryStatus((int *)&Affinity);
      if ( (int)KiSaveBugcheckRecoveryProgress(196LL) >= 0 )
      {
        if ( !KsepShimDbLock.WaitBlockFill7[156] )
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
          KiBugCheckWriteCrashDump((__int64)&KiCrashDumpContext);
          KiBugCheckRecoveryCleanupFromCrashDump(v5[0], v4);
        }
        if ( !KsepShimDbLock.WaitBlockFill7[140] && (int)KiSaveBugcheckRecoveryProgress(4LL) >= 0 )
        {
          ExRebootSystemForRecovery();
LABEL_14:
          KsepShimDbLock.SchedulerApcFill3[52] = 0;
          goto LABEL_16;
        }
      }
    }
  }
  KiRecordRecoveryFailure(5LL);
LABEL_16:
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (KsepShimDbLock.WaitBlockFill11[175] & 2) != 0 )
  {
    KeSetEvent((PRKEVENT)&KsepShimDbLock.AffinityVersion, 0, 0);
  }
  else if ( (KsepShimDbLock.WaitBlockFill11[175] & 4) != 0 )
  {
    KiSaveBugcheckRecoveryProgress(198LL);
    guard_dispatch_icall_no_overrides(0LL, v2);
    HalReturnToFirmware(3);
  }
  return KiSaveBugcheckRecoveryProgress(197LL);
}
