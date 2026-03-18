/*
 * XREFs of _PnpStringFromGuid @ 0x14094E664
 * Callers:
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14071A968 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmListInitEnumCallback @ 0x14071AF00 (PiDmListInitEnumCallback.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408369DC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140839434 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiSwPdoPnPDispatch @ 0x14083A790 (PiSwPdoPnPDispatch.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x14094EC9C (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     IoGetDeviceInterfaceAlias @ 0x140956090 (IoGetDeviceInterfaceAlias.c)
 *     IopGetDeviceInterfaces @ 0x1409572B8 (IopGetDeviceInterfaces.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     PiDmCacheDataEncode @ 0x14096AD40 (PiDmCacheDataEncode.c)
 *     PiDcHandleDeviceEvent @ 0x140A45E74 (PiDcHandleDeviceEvent.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140A5E044 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDcHandleInterfaceEvent @ 0x140A69D4C (PiDcHandleInterfaceEvent.c)
 *     _CmBuildDevicePanelId @ 0x140AA6C40 (_CmBuildDevicePanelId.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140AB53E8 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PipCreateComputerId @ 0x140C0F270 (PipCreateComputerId.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14042CC40 (RtlStringCchPrintfExW.c)
 */

NTSTATUS __fastcall PnpStringFromGuid(int *a1, wchar_t *a2)
{
  int v3; // [rsp+30h] [rbp-78h]
  int v4; // [rsp+38h] [rbp-70h]
  int v5; // [rsp+40h] [rbp-68h]
  int v6; // [rsp+48h] [rbp-60h]
  int v7; // [rsp+50h] [rbp-58h]
  int v8; // [rsp+58h] [rbp-50h]
  int v9; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+70h] [rbp-38h]
  int v12; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+80h] [rbp-28h]

  v13 = *((unsigned __int8 *)a1 + 15);
  v12 = *((unsigned __int8 *)a1 + 14);
  v11 = *((unsigned __int8 *)a1 + 13);
  v10 = *((unsigned __int8 *)a1 + 12);
  v9 = *((unsigned __int8 *)a1 + 11);
  v8 = *((unsigned __int8 *)a1 + 10);
  v7 = *((unsigned __int8 *)a1 + 9);
  v6 = *((unsigned __int8 *)a1 + 8);
  v5 = *((unsigned __int16 *)a1 + 3);
  v4 = *((unsigned __int16 *)a1 + 2);
  v3 = *a1;
  return RtlStringCchPrintfExW(
           a2,
           0x27uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           v3,
           v4,
           v5,
           v6,
           v7,
           v8,
           v9,
           v10,
           v11,
           v12,
           v13);
}
