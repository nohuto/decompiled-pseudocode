/*
 * XREFs of PspUnlockJobAssignment @ 0x140AAC978
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x140AAC7A0 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x140AAC814 (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall PspUnlockJobAssignment(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PspSiloMonitorLock.PropagateBoostsEntry.Next,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.PropagateBoostsEntry);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.PropagateBoostsEntry);
  if ( a1 )
  {
    if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
      KiCheckForKernelApcDelivery(v3, v2);
  }
}
