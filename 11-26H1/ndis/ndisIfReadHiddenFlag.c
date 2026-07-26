/*
 * XREFs of ndisIfReadHiddenFlag @ 0x140160000
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x140146BD8 (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x14015F9C0 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015FCA0 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015FEF0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 */

NTSTATUS __fastcall ndisIfReadHiddenFlag(NetSetupPropertyBag *this, PDEVICE_OBJECT DeviceObject, bool *a3)
{
  NTSTATUS result; // eax
  HANDLE v7; // rbx
  const wchar_t *v8; // rax
  char v9; // bp
  __int64 v10; // rcx
  NTSTATUS v11; // edi
  __int16 v12; // cx
  unsigned int v13; // [rsp+30h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-74h] BYREF
  HANDLE DeviceRegKey; // [rsp+38h] [rbp-70h] BYREF
  HANDLE v16; // [rsp+40h] [rbp-68h] BYREF
  _UNICODE_STRING ValueName; // [rsp+48h] [rbp-60h] BYREF
  __int128 KeyValueInformation; // [rsp+58h] [rbp-50h] BYREF
  int v19; // [rsp+68h] [rbp-40h]

  if ( !DeviceObject )
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Driver_HideInUi, a3);
  v13 = 0;
  if ( (int)NetSetupPropertyBag::ReadUint32(
              (void ***)this,
              (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_PnpDeviceInterfaceNumber,
              &v13) >= 0 )
  {
    if ( v13 )
      return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Driver_HideInUi, a3);
  }
  DeviceRegKey = 0LL;
  result = IoOpenDeviceRegistryKey(DeviceObject, 2u, 0x80000000, &DeviceRegKey);
  if ( result < 0 )
    return result;
  v7 = DeviceRegKey;
  v16 = DeviceRegKey;
  ValueName = 0LL;
  v8 = L"Characteristics";
  v9 = 0;
  v10 = 0x7FFFLL;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v10;
  }
  while ( v10 );
  v11 = -1073741811;
  if ( v10 )
  {
    v11 = 0;
    v12 = 2 * v10;
    ValueName.Buffer = L"Characteristics";
    ValueName.Length = -2 - v12;
    ValueName.MaximumLength = -v12;
  }
  if ( v11 >= 0 )
  {
    ResultLength = 0;
    v19 = 0;
    KeyValueInformation = 0LL;
    v11 = ZwQueryValueKey(
            DeviceRegKey,
            &ValueName,
            KeyValuePartialInformation,
            &KeyValueInformation,
            0x14u,
            &ResultLength);
    if ( v11 >= 0 )
    {
      if ( DWORD1(KeyValueInformation) == 4 )
      {
        if ( DWORD2(KeyValueInformation) == 4 )
        {
          v9 = BYTE12(KeyValueInformation);
          v11 = 0;
        }
        else
        {
          v11 = -1073741789;
        }
      }
      else
      {
        v11 = -1073741788;
      }
    }
  }
  if ( v11 == -1073741772 )
  {
    if ( v7 )
      ZwClose(v7);
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Driver_HideInUi, a3);
  }
  if ( v11 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v16);
    return v11;
  }
  else
  {
    *a3 = (v9 & 8) != 0;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v16);
    return 0;
  }
}
