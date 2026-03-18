/*
 * XREFs of ViKeIrqlLogAndTrimMemory @ 0x140B97F88
 * Callers:
 *     VerifierKeAcquireQueuedSpinLock @ 0x140B7FC00 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140B85008 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140B851F0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140B852F0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeSynchronizeExecution @ 0x140B859D0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140B85AB0 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140B85BB0 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140B85EB0 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140B860E0 (ViKeAcquireSpinLockCommon.c)
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140B98340 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     MmVerifierTrimMemory @ 0x140B94818 (MmVerifierTrimMemory.c)
 *     VfKeIrqlLogRaise @ 0x140B98000 (VfKeIrqlLogRaise.c)
 */

__int64 __fastcall ViKeIrqlLogAndTrimMemory(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rsi

  v2 = a1;
  if ( !ViIrqlTrimAndLog )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  LOBYTE(a2) = a1;
  LOBYTE(a1) = CurrentIrql;
  v4 = VfKeIrqlLogRaise(a1, a2);
  if ( KeAreInterruptsEnabled() && CurrentIrql < 2u && v2 >= 2u )
  {
    if ( ViIrqlTrimAndLog )
      MmVerifierTrimMemory();
  }
  return v4;
}
