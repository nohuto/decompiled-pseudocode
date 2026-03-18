/*
 * XREFs of PspUnlockJobListShared @ 0x140A81C48
 * Callers:
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJobListShared(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock.AffinityVersion, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock.AffinityVersion);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.AffinityVersion);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v3, v2);
}
