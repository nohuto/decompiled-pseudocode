/*
 * XREFs of _RegRtlOpenKeyTransacted @ 0x140997950
 * Callers:
 *     _SysCtxOpenControlSet @ 0x14089CA30 (_SysCtxOpenControlSet.c)
 *     _SysCtxOpenMachine @ 0x14089CC70 (_SysCtxOpenMachine.c)
 *     _RegRtlCopyTreeInternal @ 0x14089D400 (_RegRtlCopyTreeInternal.c)
 *     PiCreateDriverSwDevices @ 0x14090988C (PiCreateDriverSwDevices.c)
 *     _CmIsDeviceInContainer @ 0x140909D5C (_CmIsDeviceInContainer.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1409172EC (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140917AA0 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x140918A78 (_CmGetInstallerClassCompoundFilters.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140919888 (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14091C280 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14098BEFC (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDqOpenUserObjectRegKey @ 0x1409920EC (PiDqOpenUserObjectRegKey.c)
 *     _CmGetDeviceCompoundFilters @ 0x140992AA8 (_CmGetDeviceCompoundFilters.c)
 *     _PnpOpenPropertiesKey @ 0x140995B20 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140996CF0 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpCtxRegOpenKey @ 0x140997890 (_PnpCtxRegOpenKey.c)
 *     _SysCtxRegOpenKey @ 0x1409978F0 (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x14099C0F0 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x14099DD20 (_PnpGetGenericStoreProperty.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14099FC70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1409A0580 (_CmOpenCommonClassRegKeyWorker.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140A2D2D4 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2D44C (DrvDbDeleteObjectSubKey.c)
 *     _RegRtlDeletePathInternal @ 0x140A2D934 (_RegRtlDeletePathInternal.c)
 *     _RegRtlDeleteTreeInternal @ 0x140A2DB2C (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A2DD6C (_RegRtlDeleteKeyTransacted.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140A70B50 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDrvDbLoadNode @ 0x140A78308 (PiDrvDbLoadNode.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A80FB0 (DrvDbGetObjectSubKeyCallback.c)
 *     _RegRtlOpenPredefinedKey @ 0x140AE8C08 (_RegRtlOpenPredefinedKey.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140B1D980 (_CmRemoveDeviceFromContainerWorker.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B48EE0 (PiCreateDriverSwDeviceCallback.c)
 *     _RegRtlOpenKey @ 0x140B69FF0 (_RegRtlOpenKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKeyEx @ 0x140725970 (ZwOpenKeyEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     NtOpenKeyTransactedEx_Stub @ 0x140776D80 (NtOpenKeyTransactedEx_Stub.c)
 *     _RegRtlOpenPredefinedKey @ 0x140AE8C08 (_RegRtlOpenPredefinedKey.c)
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
  __int64 WriteOperationCount; // rax
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
          if ( LOBYTE(WheapPfaLock.ReadOperationCount) )
          {
            WriteOperationCount = WheapPfaLock.WriteOperationCount;
          }
          else
          {
            WriteOperationCount = (__int64)ZwOpenKeyTransacted;
            LOBYTE(WheapPfaLock.ReadOperationCount) = 1;
            WheapPfaLock.WriteOperationCount = (__int64)ZwOpenKeyTransacted;
          }
          if ( !WriteOperationCount
            || (inited = guard_dispatch_icall_no_overrides((__int64)v13, a4), inited == -1073741702) )
          {
            inited = -1072103420;
          }
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
