/*
 * XREFs of PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140B054E0
 * Callers:
 *     PiDcHandleContainerEvent @ 0x140B05464 (PiDcHandleContainerEvent.c)
 *     PiDcInit @ 0x140CCB840 (PiDcInit.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PiDcGenerateConfigNotificationIfContainerRequiresConfiguration(__int64 a1)
{
  int ObjectProperty; // ebx
  int v4; // eax
  _DWORD v5[4]; // [rsp+60h] [rbp-10h] BYREF
  char v6; // [rsp+A8h] [rbp+38h] BYREF
  int v7; // [rsp+B0h] [rbp+40h] BYREF
  int v8; // [rsp+B8h] [rbp+48h] BYREF

  v7 = 0;
  v8 = 0;
  v5[0] = 0;
  v6 = 0;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     5,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_DeviceContainer_IsConnected,
                     &v7,
                     (__int64)&v6,
                     1u,
                     (__int64)&v8,
                     0);
  if ( ObjectProperty >= 0 && v6 && v7 == 17 )
  {
    v4 = PnpGetObjectProperty(
           *(__int64 *)&PiPnpRtlCtx,
           a1,
           5,
           0LL,
           0LL,
           (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
           &v7,
           (__int64)v5,
           4u,
           (__int64)&v8,
           0);
    ObjectProperty = v4;
    if ( v4 >= 0 )
    {
      if ( v7 != 7 )
        goto LABEL_11;
      if ( !v5[0] )
        return (unsigned int)ObjectProperty;
      if ( v7 != 7 )
        goto LABEL_11;
    }
    if ( v4 == -1073741275 )
    {
LABEL_11:
      ObjectProperty = PnpSetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         a1,
                         5,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                         7,
                         (__int64)&unconfiguredConfigFlags,
                         4u,
                         0);
      if ( ObjectProperty < 0 )
        return (unsigned int)ObjectProperty;
    }
    ZwUpdateWnfStateData(&WNF_PNPC_CONTAINER_CONFIG_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  return (unsigned int)ObjectProperty;
}
