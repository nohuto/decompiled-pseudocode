/*
 * XREFs of PiDcContainerRequiresConfiguration @ 0x140B06B60
 * Callers:
 *     PiDcHandleSystemFirmwareUpdate @ 0x1407AA690 (PiDcHandleSystemFirmwareUpdate.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1409ABF4C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140A1AA20 (PiDcHandleCustomDeviceEvent.c)
 *     PiDcHandleDeviceEvent @ 0x140AD3C20 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140B06A60 (PiDcHandleInterfaceEvent.c)
 * Callees:
 *     wcscmp @ 0x14053A470 (wcscmp.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
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
        ZwUpdateWnfStateData(&WNF_PNPC_CONTAINER_CONFIG_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
    }
  }
  return (unsigned int)ObjectProperty;
}
