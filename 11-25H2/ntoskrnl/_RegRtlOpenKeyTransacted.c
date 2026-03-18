/*
 * XREFs of _RegRtlOpenKeyTransacted @ 0x1408C9BF0
 * Callers:
 *     _SysCtxOpenControlSet @ 0x1408102E0 (_SysCtxOpenControlSet.c)
 *     _SysCtxOpenMachine @ 0x140810504 (_SysCtxOpenMachine.c)
 *     _RegRtlCopyTreeInternal @ 0x140810CA0 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlOpenPredefinedKey @ 0x1408111F4 (_RegRtlOpenPredefinedKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x14083E2D0 (PiDqOpenUserObjectRegKey.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140891DEC (PiDevCfgQueryDeviceMigrationNode.c)
 *     _SysCtxRegOpenKey @ 0x1408C7CB0 (_SysCtxRegOpenKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C8BA0 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpCtxRegOpenKey @ 0x1408C9B94 (_PnpCtxRegOpenKey.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C9F80 (_PnpGetGenericStoreProperty.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CAF60 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 *     PiDrvDbLoadNode @ 0x140931A50 (PiDrvDbLoadNode.c)
 *     _CmIsDeviceInContainer @ 0x140950660 (_CmIsDeviceInContainer.c)
 *     PiCreateDriverSwDevices @ 0x140950828 (PiCreateDriverSwDevices.c)
 *     _RegRtlDeleteTreeInternal @ 0x140951400 (_RegRtlDeleteTreeInternal.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140951D4C (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpOpenPropertiesKey @ 0x140953450 (_PnpOpenPropertiesKey.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140953A1C (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1409565C8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140957BB0 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140959D88 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceCompoundFilters @ 0x1409AAC80 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x1409AB744 (_CmGetInstallerClassCompoundFilters.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A01530 (DrvDbGetObjectSubKeyCallback.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A67ECC (PiDevCfgClearDeviceMigrationNode.c)
 *     _RegRtlDeletePathInternal @ 0x140A68270 (_RegRtlDeletePathInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A68474 (_RegRtlDeleteKeyTransacted.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140A9C91C (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9DAA0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKeyEx @ 0x14069D6A0 (ZwOpenKeyEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     NtOpenKeyTransactedEx_Stub @ 0x1406EDC38 (NtOpenKeyTransactedEx_Stub.c)
 *     _RegRtlOpenPredefinedKey @ 0x1408111F4 (_RegRtlOpenPredefinedKey.c)
 */

__int64 __fastcall RegRtlOpenKeyTransacted(
        __int64 a1,
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
  v8 = (HANDLE)a1;
  DestinationString = 0LL;
  if ( (unsigned __int64)(a1 - 0x80000000LL) > 7
    || (inited = RegRtlOpenPredefinedKey(a1, (__int64)&Handle), inited >= 0) )
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
        inited = NtOpenKeyTransactedEx_Stub((__int64)KeyHandle);
        if ( inited == -1073741702 )
        {
          if ( byte_140EEF920 )
          {
            v14 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE))qword_140EEF928;
          }
          else
          {
            v14 = ZwOpenKeyTransacted;
            byte_140EEF920 = 1;
            qword_140EEF928 = (__int64)ZwOpenKeyTransacted;
          }
          if ( !v14 || (inited = guard_dispatch_icall_no_overrides(v13), inited == -1073741702) )
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
