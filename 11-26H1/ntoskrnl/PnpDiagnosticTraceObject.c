/*
 * XREFs of PnpDiagnosticTraceObject @ 0x140493A8C
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1404937E0 (PnpDeviceCompletionRoutine.c)
 *     PnpRebalance @ 0x1407B3F98 (PnpRebalance.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14090AD94 (PnpQueueQueryAndRemoveEvent.c)
 *     PipEnumerateDevice @ 0x14090DEA8 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x140910A7C (PnpStartDeviceNode.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     PiDevCfgProcessDevice @ 0x140AD089C (PiDevCfgProcessDevice.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140B1EEB0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140B34450 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140CC3DC0 (PnpEarlyLaunchImageNotificationPostProcess.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140CC3E90 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpInitializeBootStartDriver @ 0x140D08CFC (PnpInitializeBootStartDriver.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
