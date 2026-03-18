/*
 * XREFs of KeIntSteerAssignCpuSetForGsiv @ 0x1405F75C0
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerAssignCpuSet @ 0x1405F7670 (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x1405F7870 (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KeIntSteerAssignCpuSetForGsiv(int a1, unsigned __int16 a2, __int64 a3)
{
  KIRQL v6; // al
  unsigned __int64 v7; // rcx
  int v8; // edx
  KIRQL v9; // si
  unsigned int v10; // edi

  v6 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  v7 = KsepShimDbLock.Spare35[0];
  v8 = -1;
  v9 = v6;
  v10 = a1 != -1 ? 0xC0000225 : 0;
  while ( (unsigned __int64 *)v7 != KsepShimDbLock.Spare35 )
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
  KeReleaseSpinLock(&KiIntTrackSpinlock, v9);
  return v10;
}
