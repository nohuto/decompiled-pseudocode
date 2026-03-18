/*
 * XREFs of PopReleaseTransitionLock @ 0x140B4C040
 * Callers:
 *     PoInitHiberServices @ 0x1407C8370 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x1407D0DE0 (PopWnfHibernatePolicyCallback.c)
 *     PopNotifyPolicyDevice @ 0x1407D7760 (PopNotifyPolicyDevice.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x140AC5458 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 *     PopUnlockAfterSleepWorker @ 0x140C04AB0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x140B08694 (PopDirectedDripsNotify.c)
 */

void __fastcall PopReleaseTransitionLock(int a1)
{
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9

  stru_140F0F620.WaitBlock[0].Object = 0LL;
  LODWORD(stru_140F0F620.Header.WaitListHead.Blink) = 0;
  KeSetEvent(&word_140F0F600, 0, 0);
  if ( a1 != 7 )
    PopDirectedDripsNotify(9, 0LL, v2, v3);
}
