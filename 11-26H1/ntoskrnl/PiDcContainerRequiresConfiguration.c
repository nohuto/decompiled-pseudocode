/*
 * XREFs of PiDcContainerRequiresConfiguration @ 0x140B04F50
 * Callers:
 *     PiDcHandleSystemFirmwareUpdate @ 0x1407A7AE0 (PiDcHandleSystemFirmwareUpdate.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140909994 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409DD768 (PiDcHandleCustomDeviceEvent.c)
 *     PiDcHandleDeviceEvent @ 0x140AD7178 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140B04E50 (PiDcHandleInterfaceEvent.c)
 * Callees:
 *     wcscmp @ 0x140537FF0 (wcscmp.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x1409DBEB0 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PiDcContainerRequiresConfiguration(wchar_t *Str2)
{
  int ObjectProperty; // ebx
  int v4; // [rsp+88h] [rbp+10h] BYREF
  int v5; // [rsp+90h] [rbp+18h] BYREF
  int v6; // [rsp+98h] [rbp+20h] BYREF

  ObjectProperty = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
  {
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)Str2,
                       5,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                       &v4,
                       (__int64)&v5,
                       4u,
                       (__int64)&v6,
                       0);
    if ( ObjectProperty < 0 || v4 != 7 || v5 != -1 )
    {
      ObjectProperty = PnpSetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)Str2,
                         5,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                         7,
                         (__int64)&unconfiguredConfigFlags,
                         4u,
                         0);
      if ( ObjectProperty >= 0 )
        ZwUpdateWnfStateData((__int64)&WNF_PNPC_CONTAINER_CONFIG_REQUESTED, 0LL);
    }
  }
  return (unsigned int)ObjectProperty;
}
