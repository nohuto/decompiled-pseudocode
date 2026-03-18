/*
 * XREFs of KiBugCheckWriteCrashDump @ 0x1405E7910
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405F9FE0 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     IoSaveBugCheckProgress @ 0x1405C7540 (IoSaveBugCheckProgress.c)
 *     IoWriteCrashDump @ 0x1405C7FAC (IoWriteCrashDump.c)
 */

char __fastcall KiBugCheckWriteCrashDump(__int64 a1)
{
  char v1; // bl

  v1 = IoWriteCrashDump(
         (unsigned int)KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink,
         (__int64)KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink,
         (__int64)KiDpcWatchdogConfigurationLock.SListFaultAddress,
         KiDpcWatchdogConfigurationLock.QuantumTarget,
         (__int64)KiDpcWatchdogConfigurationLock.InitialStack,
         *(_OWORD **)a1,
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 16),
         *(_BYTE *)(a1 + 32));
  IoSaveBugCheckProgress(3);
  return v1;
}
