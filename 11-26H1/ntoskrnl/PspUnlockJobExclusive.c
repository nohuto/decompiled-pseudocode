/*
 * XREFs of PspUnlockJobExclusive @ 0x140959DD4
 * Callers:
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     PspConvertSiloToServerSilo @ 0x1407EEB8C (PspConvertSiloToServerSilo.c)
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407F7D20 (PspEnforceLimitsJobPostCallback.c)
 *     PspLockJobAndRootExclusive @ 0x1407F8DE0 (PspLockJobAndRootExclusive.c)
 *     PspQuitNextJobProcess @ 0x1407F90E0 (PspQuitNextJobProcess.c)
 *     PspSetUILimitJobObject @ 0x1407F9E58 (PspSetUILimitJobObject.c)
 *     PspUnlockJobAndRootExclusive @ 0x1407FA038 (PspUnlockJobAndRootExclusive.c)
 *     PspNotificationPacketCallback @ 0x1409586B0 (PspNotificationPacketCallback.c)
 *     PspSendProcessNotificationToJobChain @ 0x140958A58 (PspSendProcessNotificationToJobChain.c)
 *     PspJobClose @ 0x140958D70 (PspJobClose.c)
 *     PspRemoveProcessFromJobChain @ 0x140959638 (PspRemoveProcessFromJobChain.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140959B30 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspLockRootJobFromProcess @ 0x140959C18 (PspLockRootJobFromProcess.c)
 *     PspGetNextJobProcess @ 0x140959CD4 (PspGetNextJobProcess.c)
 *     PspCallJobHierarchyCallbacks @ 0x14095A5C8 (PspCallJobHierarchyCallbacks.c)
 *     PspUnlockJobChain @ 0x140AAEE38 (PspUnlockJobChain.c)
 *     PspAssignProcessToJob @ 0x140AC5D48 (PspAssignProcessToJob.c)
 *     PspJobNotificationWorker @ 0x140AD5440 (PspJobNotificationWorker.c)
 *     PspCreateSilo @ 0x140B09C28 (PspCreateSilo.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseFastResourceExclusive @ 0x1404912F0 (ExReleaseFastResourceExclusive.c)
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
