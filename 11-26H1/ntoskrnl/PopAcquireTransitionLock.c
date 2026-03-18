/*
 * XREFs of PopAcquireTransitionLock @ 0x140B39914
 * Callers:
 *     PoInitHiberServices @ 0x1407C8370 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x1407D0DE0 (PopWnfHibernatePolicyCallback.c)
 *     PopNotifyPolicyDevice @ 0x1407D7760 (PopNotifyPolicyDevice.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140C090E8 (PopAcquireTransitionLockAfterSleep.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x140B08694 (PopDirectedDripsNotify.c)
 */

int __fastcall PopAcquireTransitionLock(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 != 7 )
    PopDirectedDripsNotify(8, 0LL, a3, a4);
  LODWORD(CurrentThread) = KeWaitForSingleObject(&word_140F0F600, WrExecutive, 0, 0, 0LL);
  LODWORD(stru_140F0F620.Header.WaitListHead.Blink) = a1;
  if ( a1 != 1 )
  {
    CurrentThread = KeGetCurrentThread();
    stru_140F0F620.WaitBlock[0].Object = CurrentThread;
  }
  return (int)CurrentThread;
}
