/*
 * XREFs of ndisWdfOpenConfigurationKey @ 0x14015DF30
 * Callers:
 *     NdisOpenConfiguration @ 0x14007B230 (NdisOpenConfiguration.c)
 *     ndisWdfOpenConfiguration @ 0x1401396AC (ndisWdfOpenConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     WPP_RECORDER_SF_q_guid_d @ 0x140067C90 (WPP_RECORDER_SF_q_guid_d.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x14006C3F0 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_RECORDER_SF_qSd @ 0x140092FB4 (WPP_RECORDER_SF_qSd.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015F060 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015F120 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015FEF0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 */

__int64 __fastcall ndisWdfOpenConfigurationKey(__int64 a1, HANDLE *a2)
{
  unsigned int *v2; // r12
  int v5; // eax
  unsigned int v6; // ebx
  int Uint32; // eax
  _DEVICE_OBJECT *v9; // rcx
  NTSTATUS v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  void *m_ptr; // rax
  struct _GUID *v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+20h] [rbp-E0h]
  char v22[8]; // [rsp+28h] [rbp-D8h]
  char v23[8]; // [rsp+30h] [rbp-D0h]
  char v24[8]; // [rsp+30h] [rbp-D0h]
  HANDLE DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  KRegKey v27; // [rsp+80h] [rbp-80h] BYREF
  char v28[4]; // [rsp+88h] [rbp-78h] BYREF
  HANDLE *v29; // [rsp+90h] [rbp-70h]
  wchar_t v30[56]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = (unsigned int *)(a1 + 4008);
  v29 = a2;
  Handle = 0LL;
  v5 = ndisIfOpenInterfaceRegistryKey(a1 + 4008, (KRegKey *)&Handle, 1u, 1);
  v6 = v5;
  if ( v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q_guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        8u,
        0xAu,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        a1,
        (__int64)v2,
        v5);
LABEL_4:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
    return v6;
  }
  *(_DWORD *)v28 = 0;
  v27.m_ptr = &Handle;
  Uint32 = NetSetupPropertyBag::ReadUint32(
             (NetSetupPropertyBag *)&v27,
             (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_PnpDeviceInterfaceNumber,
             (unsigned int *)v28);
  v6 = Uint32;
  if ( Uint32 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        8u,
        0xBu,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        a1,
        Uint32);
    goto LABEL_4;
  }
  v9 = *(_DEVICE_OBJECT **)(a1 + 3832);
  DeviceRegKey = 0LL;
  v10 = IoOpenDeviceRegistryKey(v9, 2u, 0xC2000000, &DeviceRegKey);
  v12 = v10;
  if ( v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        8u,
        0xCu,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        a1,
        v10);
    if ( DeviceRegKey )
      ZwClose(DeviceRegKey);
    if ( Handle )
      ZwClose(Handle);
    return v12;
  }
  if ( !*(_DWORD *)v28 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        8,
        13,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        a1);
    }
    *a2 = DeviceRegKey;
    DeviceRegKey = 0LL;
    goto LABEL_32;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0xEu,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      a1,
      *(_DWORD *)v28);
  *(_DWORD *)v23 = *((unsigned __int8 *)v2 + 8);
  *(_DWORD *)v22 = *((unsigned __int16 *)v2 + 3);
  LODWORD(v20) = *((unsigned __int16 *)v2 + 2);
  v13 = RtlStringCbPrintfW(
          v30,
          0x70uLL,
          L"NetworkInterface\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
          *v2,
          v20,
          *(_QWORD *)v22,
          *(_QWORD *)v23,
          *((unsigned __int8 *)v2 + 9),
          *((unsigned __int8 *)v2 + 10),
          *((unsigned __int8 *)v2 + 11),
          *((unsigned __int8 *)v2 + 12),
          *((unsigned __int8 *)v2 + 13),
          *((unsigned __int8 *)v2 + 14),
          *((unsigned __int8 *)v2 + 15));
  v14 = v13;
  if ( v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v24 = v13;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        8u,
        0xFu,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        a1,
        *(_QWORD *)v24);
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&DeviceRegKey);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
    return v14;
  }
  else
  {
    v27.m_ptr = 0LL;
    v16 = KRegKey::Open(&v27, 0xC2000000, v30, DeviceRegKey);
    if ( !v16 )
    {
      m_ptr = v27.m_ptr;
      v27.m_ptr = 0LL;
      *v29 = m_ptr;
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v27.m_ptr);
LABEL_32:
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&DeviceRegKey);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qSd(*((_QWORD *)WPP_GLOBAL_Control + 8), v15, v17, v18, v21);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v27.m_ptr);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&DeviceRegKey);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
    return v16;
  }
}
