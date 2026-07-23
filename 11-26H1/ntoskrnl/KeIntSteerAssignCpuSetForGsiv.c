/*
 * XREFs of KeIntSteerAssignCpuSetForGsiv @ 0x1405F9FDC
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerAssignCpuSet @ 0x1405FA08C (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x1405FA290 (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KeIntSteerAssignCpuSetForGsiv(int a1, unsigned __int16 a2, __int64 a3)
{
  KIRQL v6; // al
  __int64 v7; // rcx
  int v8; // edx
  KIRQL v9; // si
  unsigned int v10; // edi

  v6 = KeAcquireSpinLockRaiseToDpc(&KsepShimDbLock.InGlobalUpdateVpThreadPriorityList);
  v7 = KiIntTrackRootList;
  v8 = -1;
  v9 = v6;
  v10 = a1 != -1 ? 0xC0000225 : 0;
  while ( (__int64 *)v7 != &KiIntTrackRootList )
  {
    if ( a1 == v8 )
    {
      KiIntSteerClearCpuSetAssignment(v7);
    }
    else if ( *(_DWORD *)(v7 + 32) == a1 )
    {
      v10 = KiIntSteerAssignCpuSet(v7, a2, a3);
      break;
    }
    v7 = *(_QWORD *)v7;
  }
  KeReleaseSpinLock(&KsepShimDbLock.InGlobalUpdateVpThreadPriorityList, v9);
  return v10;
}
