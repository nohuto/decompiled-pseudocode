/*
 * XREFs of PnpBugcheckPowerTimeout @ 0x1405DC7A4
 * Callers:
 *     PnpPowerStateTransitionWatchdogCallback @ 0x1405DC210 (PnpPowerStateTransitionWatchdogCallback.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140C036E0 (PopBuildDeviceNotifyListWatchdog.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PnpGetCurrentlyActiveWorkerThread @ 0x1405DC810 (PnpGetCurrentlyActiveWorkerThread.c)
 */

void __fastcall __noreturn PnpBugcheckPowerTimeout(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // ebx
  ULONG_PTR CurrentlyActiveWorkerThread; // rax
  ULONG_PTR BugCheckParameter4[4]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v4[3]; // [rsp+50h] [rbp-18h] BYREF

  v1 = BugCheckParameter2;
  BugCheckParameter4[1] = (ULONG_PTR)&PnpDeviceCompletionQueue;
  BugCheckParameter4[2] = *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[64];
  BugCheckParameter4[3] = (ULONG_PTR)ExSaPageGroupDescriptorArrayLock.WaitBlock[1].WaitListEntry.Blink;
  BugCheckParameter4[0] = 229377LL;
  v4[0] = 0LL;
  CurrentlyActiveWorkerThread = PnpGetCurrentlyActiveWorkerThread(v4);
  KeBugCheckEx(0x9Fu, 4uLL, v1, CurrentlyActiveWorkerThread, (ULONG_PTR)BugCheckParameter4);
}
