/*
 * XREFs of KiSetBugCheckRecoveryProgressFlag @ 0x1405FD0B8
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405FC154 (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405FCA00 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x1405FCCBC (KiHandleMultipleBugchecksDuringRecovery.c)
 * Callees:
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405FD294 (KiUpdateBugcheckRecoveryProgress.c)
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
