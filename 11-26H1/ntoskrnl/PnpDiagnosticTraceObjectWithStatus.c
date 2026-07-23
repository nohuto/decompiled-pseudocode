/*
 * XREFs of PnpDiagnosticTraceObjectWithStatus @ 0x1404D9FFC
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1404F45F0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     PnpRebalance @ 0x1407B6FF8 (PnpRebalance.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     PiDrvDbLoadNode @ 0x140A80DA8 (PiDrvDbLoadNode.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140B20F30 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpInitializeBootStartDriver @ 0x140D0EFCC (PnpInitializeBootStartDriver.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObjectWithStatus(
        PCEVENT_DESCRIPTOR EventDescriptor,
        unsigned __int16 *a2,
        int a3)
{
  unsigned __int16 v6; // ax
  __int16 v7; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]
  int *v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+A0h] [rbp+20h] BYREF

  v14 = a3;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v6 = *a2;
  v10 = *a2;
  v7 = v6 >> 1;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = *((_QWORD *)a2 + 1);
  v12 = &v14;
  *(_QWORD *)&UserData.Size = 2LL;
  v11 = 0;
  v13 = 4LL;
  return EtwWriteEx(PnpEtwHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 3u, &UserData);
}
