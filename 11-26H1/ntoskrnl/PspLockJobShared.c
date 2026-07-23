/*
 * XREFs of PspLockJobShared @ 0x140A87E58
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x140775FF8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspLockRootJobShared @ 0x140777B38 (PspLockRootJobShared.c)
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407FD820 (PspEnforceLimitsJobPostCallback.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1407FE9FC (PspQueryJobHierarchyInterferenceCount.c)
 *     PspSendSiloTerminationNotification @ 0x1407FECF8 (PspSendSiloTerminationNotification.c)
 *     PsInsertPermanentSiloContextEx @ 0x140A4BD94 (PsInsertPermanentSiloContextEx.c)
 *     PspLockJobAndRootShared @ 0x140B6D224 (PspLockJobAndRootShared.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 */

char __fastcall PspLockJobShared(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireFastResourceShared((__int64 *)(a1 + 56), a3, 1);
}
