/*
 * XREFs of _PnpStringFromGuid @ 0x1409B134C
 * Callers:
 *     PiDmListInitEnumCallback @ 0x1407AA160 (PiDmListInitEnumCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PiSwPdoPnPDispatch @ 0x1409AE200 (PiSwPdoPnPDispatch.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1409AF85C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     IoGetDeviceInterfaceAlias @ 0x140A18390 (IoGetDeviceInterfaceAlias.c)
 *     PnpActivatePdcForDeviceEvent @ 0x140A19D10 (PnpActivatePdcForDeviceEvent.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x140AADA38 (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     PiDcHandleDeviceEvent @ 0x140AD3C20 (PiDcHandleDeviceEvent.c)
 *     PiDmCacheDataEncode @ 0x140ADA71C (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140AFD84C (PiDmGetReferencedObjectFromProperty.c)
 *     PiDcHandleInterfaceEvent @ 0x140B06A60 (PiDcHandleInterfaceEvent.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140B37308 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     _CmBuildDevicePanelId @ 0x140B3BE24 (_CmBuildDevicePanelId.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140B43844 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PipCreateComputerId @ 0x140CC7574 (PipCreateComputerId.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
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
