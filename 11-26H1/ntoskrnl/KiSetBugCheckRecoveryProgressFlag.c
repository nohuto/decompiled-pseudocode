/*
 * XREFs of KiSetBugCheckRecoveryProgressFlag @ 0x1405FA698
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405F9734 (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405F9FE0 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x1405FA29C (KiHandleMultipleBugchecksDuringRecovery.c)
 * Callees:
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405FA874 (KiUpdateBugcheckRecoveryProgress.c)
 */

__int64 __fastcall KiSetBugCheckRecoveryProgressFlag(int a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+28h] [rbp-20h]
  __int64 v4; // [rsp+2Ch] [rbp-1Ch]

  v3 = a1;
  v4 = 0LL;
  v2 = 2LL;
  return KiUpdateBugcheckRecoveryProgress(&v2);
}
