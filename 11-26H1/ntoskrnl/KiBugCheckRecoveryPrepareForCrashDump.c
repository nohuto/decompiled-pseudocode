/*
 * XREFs of KiBugCheckRecoveryPrepareForCrashDump @ 0x1405FC864
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405FCA00 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlPrepareForRootCrashdump @ 0x1405C03C4 (HvlPrepareForRootCrashdump.c)
 *     IoRevertFromDemotedDumpType @ 0x1405C9DD8 (IoRevertFromDemotedDumpType.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405FC548 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405FCF60 (KiSaveBugcheckRecoveryProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiBugCheckRecoveryPrepareForCrashDump(unsigned __int8 *a1, bool *a2)
{
  unsigned int v4; // eax
  int v5; // edx
  unsigned __int8 CurrentIrql; // bl

  v4 = KsepShimDbLock.SchedulerApcFill5[76] & 0xF;
  if ( (KsepShimDbLock.SchedulerApcFill5[76] & 0xF) == 0 || v4 >= 3 )
    return 0;
  if ( v4 == 2 )
  {
    if ( !*(_QWORD *)&KsepShimDbLock.SuspendEvent.Header.Lock )
      IoRevertFromDemotedDumpType();
    HvlEnlightenments &= 0x2000u;
    KiSaveBugcheckRecoveryProgress(96LL);
  }
  guard_dispatch_icall_no_overrides(a1, a2);
  *a2 = KeDisableInterrupts();
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = 15;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
  }
  *a1 = CurrentIrql;
  KiBugCheckRecoveryFreezeOtherProcessors(0);
  if ( (KsepShimDbLock.SchedulerApcFill5[76] & 0xF) == 2 )
    HvlPrepareForRootCrashdump(0);
  return 1;
}
