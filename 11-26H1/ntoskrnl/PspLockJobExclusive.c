/*
 * XREFs of PspLockJobExclusive @ 0x14095A894
 * Callers:
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     PspConvertSiloToServerSilo @ 0x1407EEB8C (PspConvertSiloToServerSilo.c)
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407F7D20 (PspEnforceLimitsJobPostCallback.c)
 *     PspLockJobAndRootExclusive @ 0x1407F8DE0 (PspLockJobAndRootExclusive.c)
 *     PspQuitNextJobProcess @ 0x1407F90E0 (PspQuitNextJobProcess.c)
 *     PspNotificationPacketCallback @ 0x1409586B0 (PspNotificationPacketCallback.c)
 *     PspJobClose @ 0x140958D70 (PspJobClose.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140959B30 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspLockRootJobFromProcess @ 0x140959C18 (PspLockRootJobFromProcess.c)
 *     PspGetNextJobProcess @ 0x140959CD4 (PspGetNextJobProcess.c)
 *     PspCallJobHierarchyCallbacks @ 0x14095A5C8 (PspCallJobHierarchyCallbacks.c)
 *     PspAssignProcessToJob @ 0x140AC5D48 (PspAssignProcessToJob.c)
 *     PspJobNotificationWorker @ 0x140AD5440 (PspJobNotificationWorker.c)
 *     PspCreateSilo @ 0x140B09C28 (PspCreateSilo.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x140275660 (ExAcquireFastResourceExclusive.c)
 */

char __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireFastResourceExclusive((struct _KTHREAD *)(a1 + 56), 0LL, 1);
}
