/*
 * XREFs of ?LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140281E20
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x140007048 (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV-$unique_ptr@U_KEY_VALUE_PARTIAL.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1400077C0 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1400546F4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055CF4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ??4?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005DCB4 (--4-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x140067340 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x14009EEB8 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::LoadDescriptorOverridesFromRegistry(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        const struct DxgMonitor::IMonitorRegistry *a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(const struct DxgMonitor::IMonitorRegistry *, _QWORD, __int64, void **); // rbx
  int v6; // ebx
  void *v8; // rbx
  _DWORD *v9; // rbx
  unsigned int v10; // eax
  void *v11; // rax
  char *v12; // rdi
  unsigned int v13; // r8d
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  HANDLE KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  void *v17; // [rsp+38h] [rbp-41h] BYREF
  void *v18; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-31h] BYREF
  struct _UNICODE_STRING v20; // [rsp+50h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  __int128 v22; // [rsp+70h] [rbp-9h] BYREF
  __int128 v23; // [rsp+80h] [rbp+7h]
  _OWORD v24[2]; // [rsp+90h] [rbp+17h] BYREF
  int v25; // [rsp+B0h] [rbp+37h]
  wchar_t v26; // [rsp+B4h] [rbp+3Bh]

  if ( !(unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
    return 3221226021LL;
  v25 = *(_DWORD *)L"DE";
  v26 = aDisplayidOverr[18];
  v20.Buffer = (wchar_t *)v24;
  v4 = *(_QWORD *)a2;
  v17 = 0LL;
  KeyHandle = 0LL;
  v24[0] = *(_OWORD *)L"DISPLAYID_OVERRIDE";
  v5 = *(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorRegistry *, _QWORD, __int64, void **))(v4 + 16);
  v24[1] = *(_OWORD *)L"D_OVERRIDE";
  *(_QWORD *)&v20.Length = 2490404LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &v17,
    0LL);
  v6 = v5(a2, 0LL, 1LL, &v17);
  if ( v6 >= 0 )
  {
    v8 = v17;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &KeyHandle,
      0LL);
    v6 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, v8, &v20);
    if ( v6 >= 0 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"Data");
      v19 = 0LL;
      v6 = DxgkRetrieveValueFromRegistry(KeyHandle, &DestinationString, (__int64)&v19);
      if ( v6 >= 0 )
      {
        v9 = v19;
        if ( v19[1] == 3 && (v10 = v19[2]) != 0 )
        {
          v11 = (void *)operator new[](v10, 0x4D677844u, 256LL);
          v18 = v11;
          v12 = (char *)v11;
          if ( v11 )
          {
            memmove(v11, v9 + 3, (unsigned int)v9[2]);
            v13 = v9[2];
            v22 = 0LL;
            v23 = 0LL;
            DisplayID_Initialize((struct DisplayIDObj *)&v22, v12, v13);
            if ( (_BYTE)v23 )
            {
              *((_DWORD *)this + 14) = *((_DWORD *)this + 3);
              wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=(
                (void **)this + 8,
                (void **)this + 2);
              v14 = v22;
              *((_DWORD *)this + 2) = 1;
              v15 = v23;
              *(_OWORD *)((char *)this + 24) = v14;
              *(_OWORD *)((char *)this + 40) = v15;
              *((_DWORD *)this + 3) = v9[2];
              wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=(
                (void **)this + 2,
                &v18);
              wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v18);
              v6 = 0;
            }
            else
            {
              WdLogSingleEntry0(7LL);
              WdLogGlobalForLineNumber = 231;
              wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v18);
              v6 = -1071841277;
            }
          }
          else
          {
            v6 = -1073741801;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 222;
            wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v18);
          }
        }
        else
        {
          WdLogSingleEntry0(7LL);
          WdLogGlobalForLineNumber = 216;
          v6 = -1073741811;
        }
      }
      else
      {
        WdLogSingleEntry1(7LL);
        WdLogGlobalForLineNumber = 209;
      }
      wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
        (void **)&v19,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(7LL);
      WdLogGlobalForLineNumber = 198;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 190;
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v17);
  return (unsigned int)v6;
}
