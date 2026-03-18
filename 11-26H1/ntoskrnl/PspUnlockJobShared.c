/*
 * XREFs of PspUnlockJobShared @ 0x140AAD180
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x140772FF8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspLockRootJobShared @ 0x140774B38 (PspLockRootJobShared.c)
 *     PspUnlockJobAndRootShared @ 0x14077ACBC (PspUnlockJobAndRootShared.c)
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407F7D20 (PspEnforceLimitsJobPostCallback.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1407F8EFC (PspQueryJobHierarchyInterferenceCount.c)
 *     PspSendSiloTerminationNotification @ 0x1407F91F8 (PspSendSiloTerminationNotification.c)
 *     PsInsertPermanentSiloContextEx @ 0x140A30E34 (PsInsertPermanentSiloContextEx.c)
 *     PspCheckEnableNotificationChannel @ 0x140B650F8 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseFastResourceShared @ 0x140485E00 (ExReleaseFastResourceShared.c)
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
