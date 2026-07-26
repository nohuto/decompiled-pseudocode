/*
 * XREFs of ndisLWMBuildConfigurationKeyPath @ 0x14015ECA0
 * Callers:
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x14015EB30 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     WPP_RECORDER_SF__guid_ @ 0x14006A860 (WPP_RECORDER_SF__guid_.c)
 *     WPP_RECORDER_SF__guid_d @ 0x14006AAA0 (WPP_RECORDER_SF__guid_d.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x14006DE70 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_RECORDER_SF_S @ 0x140096C80 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___ @ 0x14014A4AC (KRegKey--QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015F120 (ndisIfOpenInterfaceRegistryKey.c)
 *     GetPkeyName @ 0x14015FE20 (GetPkeyName.c)
 */

__int64 __fastcall ndisLWMBuildConfigurationKeyPath(__int64 a1, wchar_t *a2)
{
  void *v4; // rbx
  NTSTATUS v5; // eax
  NTSTATUS v6; // esi
  _WORD *v7; // rax
  __int64 v8; // rcx
  __int16 v9; // cx
  HANDLE v10; // rdi
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v14; // eax
  char v15[8]; // [rsp+30h] [rbp-D8h]
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING KeyHandle_8; // [rsp+58h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v20[132]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v21[96]; // [rsp+2A8h] [rbp+1A0h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x8Au,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      a1);
  v4 = 0LL;
  Handle = 0LL;
  v5 = ndisIfOpenInterfaceRegistryKey(a1, (KRegKey *)&Handle, 1u, 1);
  v6 = v5;
  if ( !v5 )
  {
    memset(v20, 0, 0x204uLL);
    GetPkeyName(&NETSETUPPKEY_Interface_ConfigurationPath, v21);
    v7 = v21;
    KeyHandle_8 = 0LL;
    v8 = 0x7FFFLL;
    do
    {
      if ( !*v7 )
        break;
      ++v7;
      --v8;
    }
    while ( v8 );
    v6 = -1073741811;
    if ( v8 )
    {
      v6 = 0;
      v9 = 2 * v8;
      KeyHandle_8.Length = -2 - v9;
      KeyHandle_8.MaximumLength = -v9;
      KeyHandle_8.Buffer = (wchar_t *)v21;
    }
    if ( v6 < 0 )
      goto LABEL_11;
    v10 = Handle;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.ObjectName = &KeyHandle_8;
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    v11 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
    v4 = KeyHandle;
    v6 = v11;
    if ( v11 )
    {
LABEL_11:
      if ( v4 )
        ZwClose(v4);
      v12 = v6;
      goto LABEL_14;
    }
    KeyHandle_8 = 0LL;
    v6 = KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___(&KeyHandle, &KeyHandle_8, (__int64)v20);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
    v12 = v6;
    if ( v6 )
    {
LABEL_14:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v15 = v12;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x8Cu,
          (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
          *(_QWORD *)v15);
      }
LABEL_35:
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      goto LABEL_20;
    }
    if ( v20[0] )
    {
      if ( v20[0] != 1 )
      {
        v6 = -1073741811;
        goto LABEL_33;
      }
      v14 = RtlStringCchPrintfW(a2, 256LL, L"\\Registry\\Machine\\DEVICES\\%ws", &v20[1]);
    }
    else
    {
      v14 = RtlStringCchPrintfW(a2, 256LL, L"\\Registry\\Machine\\System\\CurrentControlSet\\%ws", &v20[1]);
    }
    v6 = v14;
    if ( !v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0x8Eu,
          (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
          a2);
      if ( v10 )
        ZwClose(v10);
      goto LABEL_20;
    }
LABEL_33:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v15 = v6;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x8Du,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
        *(_QWORD *)v15);
    }
    goto LABEL_35;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v15 = v5;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0x8Bu,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      *(_QWORD *)v15);
  }
  if ( Handle )
    ZwClose(Handle);
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x8Fu,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      a1,
      v6);
  return (unsigned int)v6;
}
