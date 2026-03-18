/*
 * XREFs of PspLockJobMemoryLimitsShared @ 0x140A90090
 * Callers:
 *     PsReportProcessMemoryLimitViolation @ 0x14077B808 (PsReportProcessMemoryLimitViolation.c)
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407F7D20 (PspEnforceLimitsJobPostCallback.c)
 *     PspApplyJobLimitsToProcess @ 0x140A8FEB8 (PspApplyJobLimitsToProcess.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall PspLockJobMemoryLimitsShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rdi
  void *v5; // rdx
  LegacyAutoBoost *v6; // rbx

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  v4 = (signed __int64 *)(a1 + 1264);
  v6 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 1264, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v6, (struct _KTHREAD *)v4);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
}
