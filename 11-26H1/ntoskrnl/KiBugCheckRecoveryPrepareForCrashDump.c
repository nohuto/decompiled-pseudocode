/*
 * XREFs of KiBugCheckRecoveryPrepareForCrashDump @ 0x1405F9E44
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405F9FE0 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlPrepareForRootCrashdump @ 0x1405BDB54 (HvlPrepareForRootCrashdump.c)
 *     IoRevertFromDemotedDumpType @ 0x1405C7508 (IoRevertFromDemotedDumpType.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405F9B28 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405FA540 (KiSaveBugcheckRecoveryProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiBugCheckRecoveryPrepareForCrashDump(unsigned __int8 *a1, bool *a2)
{
  unsigned int v4; // eax
  int v5; // edx
  unsigned __int8 CurrentIrql; // bl

  v4 = KsepShimDbLock.WaitBlockFill7[136] & 0xF;
  if ( (KsepShimDbLock.WaitBlockFill7[136] & 0xF) == 0 || v4 >= 3 )
    return 0;
  if ( v4 == 2 )
  {
    if ( !KsepShimDbLock.WaitBlock[2].Object )
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
  if ( (KsepShimDbLock.WaitBlockFill7[136] & 0xF) == 2 )
    HvlPrepareForRootCrashdump(0);
  return 1;
}
