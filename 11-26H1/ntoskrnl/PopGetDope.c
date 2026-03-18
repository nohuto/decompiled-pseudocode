/*
 * XREFs of PopGetDope @ 0x140438170
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x140437DF0 (PoRegisterDeviceForIdleDetection.c)
 *     PopAssociatePowerLimitRequest @ 0x1407CA800 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x1407CADDC (PopFreePowerLimitRequest.c)
 *     PopOrphanPowerLimitExtension @ 0x1407CB020 (PopOrphanPowerLimitExtension.c)
 *     PopAssociateThermalRequest @ 0x1407CB7EC (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1407CBAF8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1407CBDB4 (PopOrphanCoolingExtension.c)
 *     PoVolumeDevice @ 0x140B52CC8 (PoVolumeDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopGetDope(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *Pool2; // rax
  void *v4; // rbx
  KIRQL v5; // al

  v1 = *(_QWORD *)(a1 + 312);
  if ( !*(_QWORD *)(v1 + 24) )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
    v4 = Pool2;
    if ( Pool2 )
    {
      Pool2[3] = a1;
      *(_QWORD *)((char *)Pool2 + 52) = 0LL;
      Pool2[5] = Pool2 + 4;
      Pool2[4] = Pool2 + 4;
      v5 = KeAcquireSpinLockRaiseToDpc(&qword_140F10808);
      if ( !*(_QWORD *)(v1 + 24) )
      {
        *(_QWORD *)(v1 + 24) = v4;
        v4 = 0LL;
      }
      KeReleaseSpinLock(&qword_140F10808, v5);
      if ( v4 )
        ExFreePoolWithTag(v4, 0x45504F44u);
    }
  }
  return *(_QWORD *)(v1 + 24);
}
