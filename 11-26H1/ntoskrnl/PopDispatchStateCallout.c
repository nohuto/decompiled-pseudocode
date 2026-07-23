/*
 * XREFs of PopDispatchStateCallout @ 0x1409F5718
 * Callers:
 *     PoBlockConsoleSwitchEx @ 0x140448F98 (PoBlockConsoleSwitchEx.c)
 *     PopPrepareSleep @ 0x1404F8808 (PopPrepareSleep.c)
 *     PoPowerOffMonitor @ 0x1404FA0FC (PoPowerOffMonitor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CF180 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x1407D4028 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x1407D414C (PoStartPartitionReplace.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x1407D4188 (PopSendSuspendResumeApplicationNotification.c)
 *     PdcPoBlockSessionSwitchEx @ 0x1407DF650 (PdcPoBlockSessionSwitchEx.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopScreenOff @ 0x1409F4374 (PopScreenOff.c)
 *     PoUnblockConsoleSwitch @ 0x1409F4408 (PoUnblockConsoleSwitch.c)
 *     PopBlockSessionSwitch @ 0x1409F4430 (PopBlockSessionSwitch.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1409F4A04 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopSuspendApps @ 0x1409F5528 (PopSuspendApps.c)
 *     PopResumeApps @ 0x1409F557C (PopResumeApps.c)
 *     PoEndPowerStateTasks @ 0x1409F55F4 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x1409F5614 (PoStartPowerStateTasks.c)
 *     PopSuspendServices @ 0x1409F5634 (PopSuspendServices.c)
 *     PopResumeServices @ 0x1409F5698 (PopResumeServices.c)
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x140ABE89C (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+30h] [rbp-30h] BYREF
  int *v8; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h]
  _DWORD v10[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_140FC0C10 & 0x8000) != 0 )
  {
    v10[0] = a1[5];
    v10[1] = a1[6];
    v10[2] = a1[7];
    v10[3] = a1[8];
    v8 = v10;
    v9 = 16LL;
    EtwTraceKernelEvent((int)&v8, 1, 0x80008000, 4648, 5249026);
  }
  v4 = PopInvokeWin32Callout(4LL, a1, 2 - (unsigned int)(a2 != 0));
  v5 = v4;
  if ( (xmmword_140FC0C10 & 0x8000) != 0 )
  {
    v7 = v4;
    v9 = 4LL;
    v8 = (int *)&v7;
    EtwTraceKernelEvent((int)&v8, 1, 0x80008000, 4649, 5249026);
  }
  return v5;
}
