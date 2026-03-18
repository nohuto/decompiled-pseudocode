/*
 * XREFs of PspUnlockJobAssignment @ 0x140AAED18
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x140AAEB40 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x140AAEBB4 (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x140AC5D48 (PspAssignProcessToJob.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
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
