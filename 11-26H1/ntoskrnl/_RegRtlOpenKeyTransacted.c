/*
 * XREFs of _RegRtlOpenKeyTransacted @ 0x1409583B0
 * Callers:
 *     _SysCtxOpenControlSet @ 0x1408A2E30 (_SysCtxOpenControlSet.c)
 *     _SysCtxOpenMachine @ 0x1408A3070 (_SysCtxOpenMachine.c)
 *     _RegRtlCopyTreeInternal @ 0x1408A3800 (_RegRtlCopyTreeInternal.c)
 *     PiDqOpenUserObjectRegKey @ 0x140952B4C (PiDqOpenUserObjectRegKey.c)
 *     _CmGetDeviceCompoundFilters @ 0x140953508 (_CmGetDeviceCompoundFilters.c)
 *     _PnpOpenPropertiesKey @ 0x140956580 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140957750 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _SysCtxRegOpenKey @ 0x140958350 (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x14095CB50 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x14095E780 (_PnpGetGenericStoreProperty.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1409606D0 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140960FE0 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140971D58 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140972500 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x1409734D8 (_CmGetInstallerClassCompoundFilters.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409742E8 (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     PiCreateDriverSwDevices @ 0x1409ABE44 (PiCreateDriverSwDevices.c)
 *     _CmIsDeviceInContainer @ 0x1409AC314 (_CmIsDeviceInContainer.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A3EE58 (DrvDbDeleteObjectSubKey.c)
 *     _RegRtlDeletePathInternal @ 0x140A3F340 (_RegRtlDeletePathInternal.c)
 *     _RegRtlDeleteTreeInternal @ 0x140A3F538 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A3F778 (_RegRtlDeleteKeyTransacted.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140A3F7D8 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A4661C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140A47478 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDrvDbLoadNode @ 0x140A80DA8 (PiDrvDbLoadNode.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A86E20 (DrvDbGetObjectSubKeyCallback.c)
 *     _RegRtlOpenPredefinedKey @ 0x140AE6AB8 (_RegRtlOpenPredefinedKey.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140B1FA04 (_CmRemoveDeviceFromContainerWorker.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B4AC70 (PiCreateDriverSwDeviceCallback.c)
 *     _RegRtlOpenKey @ 0x140B6D1FC (_RegRtlOpenKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKeyEx @ 0x14072A540 (ZwOpenKeyEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     NtOpenKeyTransactedEx_Stub @ 0x140779C28 (NtOpenKeyTransactedEx_Stub.c)
 *     _RegRtlOpenPredefinedKey @ 0x140AE6AB8 (_RegRtlOpenPredefinedKey.c)
 */

__int64 __fastcall RegRtlOpenKeyTransacted(
        char *a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        PHANDLE KeyHandle,
        __int64 a6)
{
  HANDLE v8; // rdi
  int inited; // ebx
  ULONG v11; // eax
  PHANDLE v13; // rsi
  NTSTATUS (__stdcall *v14)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE); // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  memset(&ObjectAttributes, 0, 44);
  Handle = 0LL;
  v8 = a1;
  DestinationString = 0LL;
  if ( (unsigned __int64)(a1 + 0x80000000) > 7 || (inited = RegRtlOpenPredefinedKey(a1, &Handle), inited >= 0) )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited >= 0 )
    {
      ObjectAttributes.Length = 48;
      if ( Handle )
        v8 = Handle;
      ObjectAttributes.RootDirectory = v8;
      v11 = 832;
      if ( (a3 & 8) == 0 )
        v11 = 576;
      ObjectAttributes.Attributes = v11;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( a6 )
      {
        v13 = KeyHandle;
        inited = NtOpenKeyTransactedEx_Stub((__int64)KeyHandle, a4);
        if ( inited == -1073741702 )
        {
          if ( LOBYTE(WheapPfaLock.UserWaitTime) )
          {
            v14 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE))WheapPfaLock.TracingPrivate[0];
          }
          else
          {
            v14 = ZwOpenKeyTransacted;
            LOBYTE(WheapPfaLock.UserWaitTime) = 1;
            WheapPfaLock.TracingPrivate[0] = (unsigned __int64)ZwOpenKeyTransacted;
          }
          if ( !v14 || (inited = guard_dispatch_icall_no_overrides((__int64)v13, a4), inited == -1073741702) )
            inited = -1072103420;
        }
      }
      else
      {
        inited = ZwOpenKeyEx(KeyHandle, a4, &ObjectAttributes, a3);
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
