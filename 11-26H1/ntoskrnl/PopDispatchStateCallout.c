/*
 * XREFs of PopDispatchStateCallout @ 0x140A39B10
 * Callers:
 *     PoBlockConsoleSwitchEx @ 0x140450E68 (PoBlockConsoleSwitchEx.c)
 *     PopPrepareSleep @ 0x1404FF018 (PopPrepareSleep.c)
 *     PoPowerOffMonitor @ 0x14050090C (PoPowerOffMonitor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CC0E0 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x1407D0F88 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x1407D10AC (PoStartPartitionReplace.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x1407D10E8 (PopSendSuspendResumeApplicationNotification.c)
 *     PdcPoBlockSessionSwitchEx @ 0x1407DB640 (PdcPoBlockSessionSwitchEx.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopScreenOff @ 0x140A387B4 (PopScreenOff.c)
 *     PoUnblockConsoleSwitch @ 0x140A38848 (PoUnblockConsoleSwitch.c)
 *     PopBlockSessionSwitch @ 0x140A38870 (PopBlockSessionSwitch.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A38E44 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopSuspendApps @ 0x140A39920 (PopSuspendApps.c)
 *     PopResumeApps @ 0x140A39974 (PopResumeApps.c)
 *     PoEndPowerStateTasks @ 0x140A399EC (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x140A39A0C (PoStartPowerStateTasks.c)
 *     PopSuspendServices @ 0x140A39A2C (PopSuspendServices.c)
 *     PopResumeServices @ 0x140A39A90 (PopResumeServices.c)
 *     PopReleaseAdaptiveLock @ 0x140A3D6E4 (PopReleaseAdaptiveLock.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x140ABCA7C (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+30h] [rbp-30h] BYREF
  int *v8; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h]
  _DWORD v10[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_140FBFC10 & 0x8000) != 0 )
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
  if ( (xmmword_140FBFC10 & 0x8000) != 0 )
  {
    v7 = v4;
    v9 = 4LL;
    v8 = (int *)&v7;
    EtwTraceKernelEvent((int)&v8, 1, 0x80008000, 4649, 5249026);
  }
  return v5;
}
