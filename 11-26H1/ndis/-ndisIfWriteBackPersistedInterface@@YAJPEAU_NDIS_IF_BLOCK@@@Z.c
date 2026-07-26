/*
 * XREFs of ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x14015DA60
 * Callers:
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14001E520 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x140146AB8 (-ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     WPP_RECORDER_SF__guid_d @ 0x14006AAA0 (WPP_RECORDER_SF__guid_d.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z @ 0x1401382E4 (-SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015F120 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfWriteBackPersistedInterface(struct _NDIS_IF_BLOCK *a1)
{
  _GUID *p_InterfaceGuid; // r12
  NTSTATUS v3; // ebx
  _NDIS_MEDIUM MediaType; // r8d
  __int64 v5; // rsi
  __int64 v6; // rcx
  const wchar_t *v7; // rax
  NTSTATUS v8; // r15d
  __int16 v9; // cx
  unsigned __int16 v10; // r9
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // r8d
  const wchar_t *v13; // rax
  __int64 v14; // rcx
  __int16 v15; // cx
  ULONG DataSize; // edx
  const char *v17; // rax
  __int64 v18; // rcx
  NTSTATUS v19; // r14d
  __int16 v20; // cx
  HANDLE v21; // rbx
  ULONG Length; // ecx
  const char *v23; // rax
  __int16 v24; // si
  char v25[4]; // [rsp+30h] [rbp-20h]
  char v26[4]; // [rsp+30h] [rbp-20h]
  char v27[4]; // [rsp+30h] [rbp-20h]
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+38h] BYREF

  if ( *((_BYTE *)qword_14011F6E0 + 96) )
    return 0LL;
  p_InterfaceGuid = &a1->InterfaceGuid;
  KeyHandle = 0LL;
  v3 = ndisIfOpenInterfaceRegistryKey((__int64)&a1->InterfaceGuid, (KRegKey *)&KeyHandle, 2u, 3);
  if ( v3 < 0 )
    goto LABEL_13;
  MediaType = a1->MediaType;
  v5 = 0x7FFFLL;
  ValueName = 0LL;
  v6 = 0x7FFFLL;
  v7 = L"MediaType";
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  v8 = -1073741811;
  v3 = -1073741811;
  if ( v6 )
  {
    v3 = 0;
    v9 = 2 * v6;
    ValueName.Buffer = L"MediaType";
    ValueName.Length = -2 - v9;
    ValueName.MaximumLength = -v9;
  }
  if ( v3 < 0 || (v3 = KRegKey::SetValueUlong((KRegKey *)&KeyHandle, &ValueName, MediaType), v3 < 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 27;
LABEL_12:
      *(_DWORD *)v25 = v3;
      WPP_RECORDER_SF__guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        v10,
        (struct _GUID *)&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids,
        (__int64)p_InterfaceGuid,
        *(_DWORD *)v25);
    }
LABEL_13:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
    return (unsigned int)v3;
  }
  PhysicalMediumType = a1->PhysicalMediumType;
  v13 = L"PhysicalMediaType";
  ValueName = 0LL;
  v14 = 0x7FFFLL;
  do
  {
    if ( !*v13 )
      break;
    ++v13;
    --v14;
  }
  while ( v14 );
  v3 = -1073741811;
  if ( v14 )
  {
    v3 = 0;
    v15 = 2 * v14;
    ValueName.Buffer = L"PhysicalMediaType";
    ValueName.Length = -2 - v15;
    ValueName.MaximumLength = -v15;
  }
  if ( v3 < 0 || (v3 = KRegKey::SetValueUlong((KRegKey *)&KeyHandle, &ValueName, PhysicalMediumType), v3 < 0) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v10 = 28;
    goto LABEL_12;
  }
  DataSize = a1->ifPhysAddress.Length;
  v17 = L"CurrentAddress";
  ValueName = 0LL;
  v18 = 0x7FFFLL;
  do
  {
    if ( !*(_WORD *)v17 )
      break;
    v17 += 2;
    --v18;
  }
  while ( v18 );
  v19 = -1073741811;
  if ( v18 )
  {
    v19 = 0;
    v20 = 2 * v18;
    ValueName.Buffer = (wchar_t *)L"CurrentAddress";
    ValueName.Length = -2 - v20;
    ValueName.MaximumLength = -v20;
  }
  if ( v19 < 0
    || (v21 = KeyHandle, v19 = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, a1->ifPhysAddress.Address, DataSize), v19 < 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v26 = v19;
      WPP_RECORDER_SF__guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        0x1Du,
        (struct _GUID *)&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids,
        (__int64)p_InterfaceGuid,
        *(_DWORD *)v26);
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
    return (unsigned int)v19;
  }
  Length = a1->PermanentPhysAddress.Length;
  v23 = L"PermanentAddress";
  ValueName = 0LL;
  do
  {
    if ( !*(_WORD *)v23 )
      break;
    v23 += 2;
    --v5;
  }
  while ( v5 );
  if ( v5 )
  {
    v8 = 0;
    v24 = 2 * v5;
    ValueName.Buffer = (wchar_t *)L"PermanentAddress";
    ValueName.Length = -2 - v24;
    ValueName.MaximumLength = -v24;
  }
  if ( v8 >= 0 )
  {
    v8 = ZwSetValueKey(v21, &ValueName, 0, 3u, a1->PermanentPhysAddress.Address, Length);
    if ( v8 >= 0 )
    {
      if ( v21 )
        ZwClose(v21);
      return 0LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v27 = v8;
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      0x1Eu,
      (struct _GUID *)&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids,
      (__int64)p_InterfaceGuid,
      *(_DWORD *)v27);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  return (unsigned int)v8;
}
