/*
 * XREFs of ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS2@@AEA_N@Z @ 0x14027D970
 * Callers:
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14027CF1C (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1400077C0 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055CF4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     _wcsnicmp_0 @ 0x14006E492 (_wcsnicmp_0.c)
 *     Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline @ 0x140076EBC (Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_MarkDisplayHDRReadInMonitorStore@MonitorColorState@DxgMonitor@@AEAAXAEA_N@Z @ 0x14027D908 (-_MarkDisplayHDRReadInMonitorStore@MonitorColorState@DxgMonitor@@AEAAXAEA_N@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::_ReadDisplayHdrSupportFromPnpRegistry(
        DxgMonitor::MonitorColorState *this,
        enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *a2,
        enum _DISPLAYCONFIG_HDR_CERTIFICATIONS2 *a3,
        bool *a4)
{
  DxgMonitor::MonitorColorState *v6; // rsi
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, __int64, HANDLE *); // rbx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  const wchar_t *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  NTSTATUS v18; // edi
  void *v19; // rax
  unsigned int v20; // eax
  int v22; // r13d
  unsigned int v23; // r15d
  enum _DISPLAYCONFIG_HDR_CERTIFICATIONS2 *v24; // rdi
  wchar_t **v25; // r14
  wchar_t **v26; // r14
  int v27; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  PVOID v29; // [rsp+38h] [rbp-51h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-49h] BYREF
  NTSTATUS v31; // [rsp+48h] [rbp-41h]
  enum _DISPLAYCONFIG_HDR_CERTIFICATIONS2 *v32; // [rsp+50h] [rbp-39h]
  enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *v33; // [rsp+58h] [rbp-31h]
  DxgMonitor::MonitorColorState *v34; // [rsp+60h] [rbp-29h]
  bool *v35; // [rsp+68h] [rbp-21h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp-9h] BYREF

  v35 = a4;
  KeyHandle = 0LL;
  v32 = a3;
  *(_DWORD *)a2 = 0;
  v6 = this;
  v33 = a2;
  v34 = this;
  if ( (unsigned int)Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline() )
    *(_DWORD *)a3 = 0;
  *a4 = 0;
  v7 = *((_QWORD *)v6 + 1);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, HANDLE *))(*(_QWORD *)v7 + 16LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &KeyHandle,
    0LL);
  LOBYTE(v9) = 1;
  v10 = v8(v7, v9, 2LL, &KeyHandle);
  v13 = v10;
  if ( v10 < 0 )
  {
    v14 = WdLogNewEntry5_WdTrace(v12, v11);
    *(_QWORD *)(v14 + 24) = v6;
    *(_QWORD *)(v14 + 32) = v13;
    WdLogGlobalForLineNumber = 2376;
LABEL_15:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
    return (unsigned int)v13;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DisplayHdrLevel");
  v15 = 0LL;
  ResultLength = 0;
  v29 = 0LL;
  KeyValueInformation = 0LL;
  v31 = ZwQueryValueKey(
          KeyHandle,
          &DestinationString,
          KeyValuePartialInformation,
          &KeyValueInformation,
          0x10u,
          &ResultLength);
  v18 = v31;
  if ( v31 == -1073741772 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16) + 24) = v6;
    WdLogGlobalForLineNumber = 2392;
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      &v29,
      0LL);
    LODWORD(v13) = -1073741772;
    goto LABEL_15;
  }
  if ( v31 == -1073741789 || v31 == -2147483643 )
  {
    v19 = (void *)operator new[](ResultLength, 0x4D677844u, 256LL);
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      &v29,
      v19);
    v15 = (const wchar_t *)v29;
    if ( !v29 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2401;
      wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
        &v29,
        0LL);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
      return 3221225495LL;
    }
    v18 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v29, ResultLength, &ResultLength);
    v31 = v18;
  }
  if ( v18 < 0 )
  {
    WdLogSingleEntry2(2LL, v6, v18);
    WdLogGlobalForLineNumber = 2411;
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      &v29,
      0LL);
    LODWORD(v13) = v18;
    goto LABEL_15;
  }
  v20 = *((_DWORD *)v15 + 1);
  if ( v20 != 7 )
  {
    WdLogSingleEntry2(2LL, v6, v20);
    WdLogGlobalForLineNumber = 2418;
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      &v29,
      0LL);
    LODWORD(v13) = -1073741788;
    goto LABEL_15;
  }
  v22 = *((_DWORD *)v15 + 2) >> 1;
  if ( (unsigned int)(v22 - 37) > 0x95 || v22 - 1 != 37 * ((v22 - 1) / 0x25u) )
  {
    LODWORD(v13) = -1073741823;
    WdLogSingleEntry2(2LL, v6, -1073741823LL);
    WdLogGlobalForLineNumber = 2430;
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      &v29,
      0LL);
    goto LABEL_15;
  }
  v23 = 0;
  if ( v22 != 37 )
  {
    v24 = v32;
    do
    {
      v25 = &off_1400AC4F0;
      while ( wcsnicmp_0(&v15[v23 + 6], *v25, 0x25uLL) )
      {
        v25 += 2;
        if ( v25 == &off_1400AC690 )
          goto LABEL_25;
      }
      *(_DWORD *)v33 |= *((_DWORD *)v25 + 2);
LABEL_25:
      if ( (unsigned int)Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline() )
      {
        v26 = &off_1400AC690;
        while ( wcsnicmp_0(&v15[v23 + 6], *v26, 0x25uLL) )
        {
          v26 += 2;
          if ( v26 == (wchar_t **)&g_FeatureDependencyTables )
            goto LABEL_31;
        }
        *(_DWORD *)v24 |= *((_DWORD *)v26 + 2);
      }
LABEL_31:
      if ( &v15[v23 + 6] )
        v27 = wcsnlen(&v15[v23 + 6], v22 - v23);
      else
        v27 = 0;
      v23 += v27 + 1;
    }
    while ( v23 < v22 - 37 );
    v18 = v31;
    v6 = v34;
  }
  DxgMonitor::MonitorColorState::_MarkDisplayHDRReadInMonitorStore(v6, v35);
  wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
    &v29,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  return (unsigned int)v18;
}
