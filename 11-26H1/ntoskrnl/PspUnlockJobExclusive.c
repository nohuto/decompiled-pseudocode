/*
 * XREFs of PspUnlockJobExclusive @ 0x1409FF694
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1407F46EC (PspConvertSiloToServerSilo.c)
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407FD820 (PspEnforceLimitsJobPostCallback.c)
 *     PspLockJobAndRootExclusive @ 0x1407FE8E0 (PspLockJobAndRootExclusive.c)
 *     PspQuitNextJobProcess @ 0x1407FEBE0 (PspQuitNextJobProcess.c)
 *     PspUnlockJobAndRootExclusive @ 0x1407FFA68 (PspUnlockJobAndRootExclusive.c)
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1409FF3F0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspLockRootJobFromProcess @ 0x1409FF4D8 (PspLockRootJobFromProcess.c)
 *     PspGetNextJobProcess @ 0x1409FF594 (PspGetNextJobProcess.c)
 *     PspCallJobHierarchyCallbacks @ 0x1409FFE88 (PspCallJobHierarchyCallbacks.c)
 *     PspJobClose @ 0x140A06ED0 (PspJobClose.c)
 *     PspUnlockJobChain @ 0x140AACA94 (PspUnlockJobChain.c)
 *     PspJobNotificationWorker @ 0x140AD23F0 (PspJobNotificationWorker.c)
 *     PspSendProcessNotificationToJobChain @ 0x140AE4DDC (PspSendProcessNotificationToJobChain.c)
 *     PspNotificationPacketCallback @ 0x140AEDFC0 (PspNotificationPacketCallback.c)
 *     PspCreateSilo @ 0x140B0B9E8 (PspCreateSilo.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 */

void __fastcall PspUnlockJobExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  ExReleaseFastResourceExclusive(a1 + 56, 0LL, a3, a4);
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery(v6, v5);
  }
}
