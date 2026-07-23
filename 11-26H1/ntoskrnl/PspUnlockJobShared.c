/*
 * XREFs of PspUnlockJobShared @ 0x140AAB240
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x140775FF8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspLockRootJobShared @ 0x140777B38 (PspLockRootJobShared.c)
 *     PspUnlockJobAndRootShared @ 0x14077DBEC (PspUnlockJobAndRootShared.c)
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407FD820 (PspEnforceLimitsJobPostCallback.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1407FE9FC (PspQueryJobHierarchyInterferenceCount.c)
 *     PspSendSiloTerminationNotification @ 0x1407FECF8 (PspSendSiloTerminationNotification.c)
 *     PsInsertPermanentSiloContextEx @ 0x140A4BD94 (PsInsertPermanentSiloContextEx.c)
 *     PspCheckEnableNotificationChannel @ 0x140B68198 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseFastResourceShared @ 0x14047F770 (ExReleaseFastResourceShared.c)
 */

void __fastcall PspUnlockJobShared(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  ExReleaseFastResourceShared(a1 + 56, a3, a3, a4);
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery(v6, v5);
  }
}
