/*
 * XREFs of PspLockJobShared @ 0x140A81FE8
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x140772FF8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspLockRootJobShared @ 0x140774B38 (PspLockRootJobShared.c)
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407F7D20 (PspEnforceLimitsJobPostCallback.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1407F8EFC (PspQueryJobHierarchyInterferenceCount.c)
 *     PspSendSiloTerminationNotification @ 0x1407F91F8 (PspSendSiloTerminationNotification.c)
 *     PsInsertPermanentSiloContextEx @ 0x140A30E34 (PsInsertPermanentSiloContextEx.c)
 *     PspLockJobAndRootShared @ 0x140B6A018 (PspLockJobAndRootShared.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276AE0 (ExAcquireFastResourceShared.c)
 */

char __fastcall PspLockJobShared(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireFastResourceShared((__int64 *)(a1 + 56), a3, 1);
}
