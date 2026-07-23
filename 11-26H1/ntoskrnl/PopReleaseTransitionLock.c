/*
 * XREFs of PopReleaseTransitionLock @ 0x140B4DDD0
 * Callers:
 *     PoInitHiberServices @ 0x1407CB3D0 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x1407D3E80 (PopWnfHibernatePolicyCallback.c)
 *     PopNotifyPolicyDevice @ 0x1407DAD80 (PopNotifyPolicyDevice.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x140AC70C8 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 *     PopUnlockAfterSleepWorker @ 0x140C0ACC0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x140B0A610 (PopDirectedDripsNotify.c)
 */

void __fastcall PopReleaseTransitionLock(int a1)
{
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9

  PopTransitionLockOwnerThread = 0LL;
  PopTransitionLockAcquireReason = 0;
  KeSetEvent(&PopTransitionLock, 0, 0);
  if ( a1 != 7 )
    PopDirectedDripsNotify(9, 0LL, v2, v3);
}
