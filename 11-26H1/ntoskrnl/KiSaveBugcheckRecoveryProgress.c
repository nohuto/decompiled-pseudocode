/*
 * XREFs of KiSaveBugcheckRecoveryProgress @ 0x1405FCF60
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405FC154 (KiAttemptBugcheckRecovery.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405FC494 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405FC864 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405FCA00 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405FD294 (KiUpdateBugcheckRecoveryProgress.c)
 */

__int64 __fastcall KiSaveBugcheckRecoveryProgress(int a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+28h] [rbp-20h]
  __int64 v4; // [rsp+2Ch] [rbp-1Ch]

  v3 = a1;
  v4 = 0LL;
  v2 = 1LL;
  return KiUpdateBugcheckRecoveryProgress(&v2);
}
