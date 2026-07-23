/*
 * XREFs of WmiSetNetworkNotify @ 0x140829E18
 * Callers:
 *     EtwpDisableKernelTrace @ 0x140A00180 (EtwpDisableKernelTrace.c)
 *     EtwpEnableKernelTrace @ 0x140A00560 (EtwpEnableKernelTrace.c)
 * Callees:
 *     WmipBuildTraceDeviceList @ 0x1404C792C (WmipBuildTraceDeviceList.c)
 *     WmipFreeTraceDeviceList @ 0x140B0D154 (WmipFreeTraceDeviceList.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140B0D1A8 (WmipSendWmiIrpToTraceDeviceList.c)
 */

__int64 __fastcall WmiSetNetworkNotify(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // r8
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v4 = a1;
  P = 0LL;
  v5 = 0;
  v1 = WmipBuildTraceDeviceList(0x200000, &P, &v5);
  if ( v1 >= 0 )
  {
    LOBYTE(v2) = 10;
    v1 = WmipSendWmiIrpToTraceDeviceList(P, v5, v2, 8LL, &v4);
    if ( v1 >= 0 )
      v1 = 0;
  }
  if ( P )
    WmipFreeTraceDeviceList(P);
  return (unsigned int)v1;
}
