/*
 * XREFs of PspUnlockJobMemoryLimitsShared @ 0x140A94B70
 * Callers:
 *     PsReportProcessMemoryLimitViolation @ 0x14077E448 (PsReportProcessMemoryLimitViolation.c)
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407FD820 (PspEnforceLimitsJobPostCallback.c)
 *     PspApplyJobLimitsToProcess @ 0x140A94A08 (PspApplyJobLimitsToProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a1 + 1264;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1264), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1264));
  KeAbPostRelease(v2);
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery(v5, v4);
  }
}
