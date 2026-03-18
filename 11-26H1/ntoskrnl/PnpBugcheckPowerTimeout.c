/*
 * XREFs of PnpBugcheckPowerTimeout @ 0x1405D9FA4
 * Callers:
 *     PnpPowerStateTransitionWatchdogCallback @ 0x1405D9A10 (PnpPowerStateTransitionWatchdogCallback.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140BFD6E0 (PopBuildDeviceNotifyListWatchdog.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     PnpGetCurrentlyActiveWorkerThread @ 0x1405DA010 (PnpGetCurrentlyActiveWorkerThread.c)
 */

void __fastcall __noreturn PnpBugcheckPowerTimeout(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // ebx
  ULONG_PTR CurrentlyActiveWorkerThread; // rax
  ULONG_PTR BugCheckParameter4[4]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v4[3]; // [rsp+50h] [rbp-18h] BYREF

  v1 = BugCheckParameter2;
  BugCheckParameter4[1] = (ULONG_PTR)&PnpDeviceCompletionQueue;
  BugCheckParameter4[2] = (ULONG_PTR)ExSaPageGroupDescriptorArrayLock.SuspendEvent.Header.WaitListHead.Blink;
  BugCheckParameter4[3] = (ULONG_PTR)ExSaPageGroupDescriptorArrayLock.SuspendEvent.Header.WaitListHead.Flink;
  BugCheckParameter4[0] = 229377LL;
  v4[0] = 0LL;
  CurrentlyActiveWorkerThread = PnpGetCurrentlyActiveWorkerThread(v4);
  KeBugCheckEx(0x9Fu, 4uLL, v1, CurrentlyActiveWorkerThread, (ULONG_PTR)BugCheckParameter4);
}
