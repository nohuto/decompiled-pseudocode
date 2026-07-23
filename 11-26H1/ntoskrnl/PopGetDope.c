/*
 * XREFs of PopGetDope @ 0x140427090
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x140426D10 (PoRegisterDeviceForIdleDetection.c)
 *     PopAssociatePowerLimitRequest @ 0x1407CD8A0 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x1407CDE7C (PopFreePowerLimitRequest.c)
 *     PopOrphanPowerLimitExtension @ 0x1407CE0C0 (PopOrphanPowerLimitExtension.c)
 *     PopAssociateThermalRequest @ 0x1407CE88C (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1407CEB98 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1407CEE54 (PopOrphanCoolingExtension.c)
 *     PoVolumeDevice @ 0x140B55568 (PoVolumeDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160]);
      if ( !*(_QWORD *)(v1 + 24) )
      {
        *(_QWORD *)(v1 + 24) = v4;
        v4 = 0LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160], v5);
      if ( v4 )
        ExFreePoolWithTag(v4, 0x45504F44u);
    }
  }
  return *(_QWORD *)(v1 + 24);
}
