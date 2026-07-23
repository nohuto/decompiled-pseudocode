/*
 * XREFs of PnpDiagnosticTraceObject @ 0x14048D5DC
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14048D330 (PnpDeviceCompletionRoutine.c)
 *     PnpRebalance @ 0x1407B6FF8 (PnpRebalance.c)
 *     PipEnumerateDevice @ 0x1409AFFD8 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1409B2B5C (PnpStartDeviceNode.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1409B5DE4 (PnpQueueQueryAndRemoveEvent.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140B20F30 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140B368A0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140CC9EA0 (PnpEarlyLaunchImageNotificationPostProcess.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140CC9F70 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpInitializeBootStartDriver @ 0x140D0EFCC (PnpInitializeBootStartDriver.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObject(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2)
{
  int v4; // ecx
  unsigned __int16 v5; // ax
  __int16 v7; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v4 = *a2;
  v5 = *a2;
  *(_QWORD *)&UserData.Size = 2LL;
  v7 = v5 >> 1;
  v10 = v4;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = *((_QWORD *)a2 + 1);
  v11 = 0;
  return EtwWriteEx(PnpEtwHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 2u, &UserData);
}
