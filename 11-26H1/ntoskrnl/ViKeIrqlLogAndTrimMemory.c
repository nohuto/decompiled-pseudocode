/*
 * XREFs of ViKeIrqlLogAndTrimMemory @ 0x140C46CD4
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140C20324 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140C2E290 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140C334B0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140C335B0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeSynchronizeExecution @ 0x140C33C90 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140C33D70 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140C33E70 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140C34040 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140C342FC (ViKeAcquireSpinLockCommon.c)
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140C47A60 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402642E0 (KeAreInterruptsEnabled.c)
 *     MmVerifierTrimMemory @ 0x140C437B8 (MmVerifierTrimMemory.c)
 *     VfKeIrqlLogRaise @ 0x140C46D4C (VfKeIrqlLogRaise.c)
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
      MmVerifierTrimMemory((unsigned __int8)VfTrimControl);
  }
  return v4;
}
