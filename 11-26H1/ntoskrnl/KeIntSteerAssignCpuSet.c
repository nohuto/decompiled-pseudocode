/*
 * XREFs of KeIntSteerAssignCpuSet @ 0x1405F9F44
 * Callers:
 *     IoSteerInterrupt @ 0x1407A1F50 (IoSteerInterrupt.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerAssignCpuSet @ 0x1405FA08C (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x1405FA290 (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KeIntSteerAssignCpuSet(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // bp

  v3 = *(_QWORD *)(a1 + 168);
  v4 = 0;
  if ( v3 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&KsepShimDbLock.InGlobalUpdateVpThreadPriorityList);
    v8 = *(_QWORD *)(v3 + 16);
    v9 = v7;
    if ( a3 )
      v4 = KiIntSteerAssignCpuSet(v8, a2, a3);
    else
      KiIntSteerClearCpuSetAssignment(v8);
    KeReleaseSpinLock(&KsepShimDbLock.InGlobalUpdateVpThreadPriorityList, v9);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
