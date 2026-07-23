/*
 * XREFs of PspLockJobExclusive @ 0x140A00154
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1407F46EC (PspConvertSiloToServerSilo.c)
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407FD820 (PspEnforceLimitsJobPostCallback.c)
 *     PspLockJobAndRootExclusive @ 0x1407FE8E0 (PspLockJobAndRootExclusive.c)
 *     PspQuitNextJobProcess @ 0x1407FEBE0 (PspQuitNextJobProcess.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1409FF3F0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspLockRootJobFromProcess @ 0x1409FF4D8 (PspLockRootJobFromProcess.c)
 *     PspGetNextJobProcess @ 0x1409FF594 (PspGetNextJobProcess.c)
 *     PspCallJobHierarchyCallbacks @ 0x1409FFE88 (PspCallJobHierarchyCallbacks.c)
 *     PspJobClose @ 0x140A06ED0 (PspJobClose.c)
 *     PspJobNotificationWorker @ 0x140AD23F0 (PspJobNotificationWorker.c)
 *     PspNotificationPacketCallback @ 0x140AEDFC0 (PspNotificationPacketCallback.c)
 *     PspCreateSilo @ 0x140B0B9E8 (PspCreateSilo.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 */

char __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireFastResourceExclusive((struct _KTHREAD *)(a1 + 56), 0LL, 1);
}
