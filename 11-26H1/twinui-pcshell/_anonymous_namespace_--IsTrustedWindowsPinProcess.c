/*
 * XREFs of _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x18028F990
 * Callers:
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028F740 (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 *     ?CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028F8E4 (-CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV-$tip_te.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x180280FBC (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     ??$TaskbarPinTrustedProcessChecked@PEAG_N@PinManagerTelemetry@@SAX$$QEAPEAG$$QEA_N@Z @ 0x1802835F0 (--$TaskbarPinTrustedProcessChecked@PEAG_N@PinManagerTelemetry@@SAX$$QEAPEAG$$QEA_N@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802846CC (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ??$ExpandEnvironmentStringsW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG@Z @ 0x18029F10C (--$ExpandEnvironmentStringsW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ?TryGetProcessImagePath@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1802BDF68 (-TryGetProcessImagePath@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ @ 0x1803BAD20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellHostPinning@@@details@wil@@QEAA_NXZ @ 0x1805EC96C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellHostPinning@@@details@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall anonymous_namespace_::IsTrustedWindowsPinProcess(__int64 a1, __int64 a2)
{
  const WCHAR *v3; // rbx
  const WCHAR *FileNameW; // rdi
  __int64 *v5; // rax
  char v6; // di
  _QWORD *v7; // rsi
  const WCHAR *v8; // rsi
  __int64 v9; // rdx
  const WCHAR *v10; // rsi
  _QWORD *v12; // rsi
  char v13[8]; // [rsp+30h] [rbp-29h] BYREF
  LPCWCH lpString1; // [rsp+38h] [rbp-21h] BYREF
  LPCWSTR pszPath; // [rsp+40h] [rbp-19h] BYREF
  const WCHAR *v16; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v18[4]; // [rsp+68h] [rbp+Fh] BYREF
  char v19; // [rsp+88h] [rbp+2Fh] BYREF

  pszPath = 0LL;
  TryGetProcessImagePath(&pszPath, a1);
  v3 = pszPath;
  if ( pszPath )
  {
    FileNameW = PathFindFileNameW(pszPath);
    v5 = tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
           a2,
           (__int64 *)&lpString1);
    StrCpyNW((PWSTR)(*v5 + 796), FileNameW, 260);
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((void **)&lpString1);
    v6 = 1;
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellHostPinning>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ShellHostPinning>::GetImpl'::`2'::impl) )
      goto LABEL_26;
    if ( dword_1808DEDA8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 16LL) )
    {
      Init_thread_header(&dword_1808DEDA8);
      if ( dword_1808DEDA8 == -1 )
      {
        ::lpString1 = 0LL;
        wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
          &::lpString1,
          L"%windir%\\system32\\ShellHost.exe");
        atexit(_anonymous_namespace_::IsTrustedWindowsPinProcess_::_8_::_dynamic_atexit_destructor_for__expandedShellHostPath__);
        Init_thread_footer(&dword_1808DEDA8);
      }
    }
    if ( CompareStringOrdinal(::lpString1, -1, v3, -1, 1) == 2 )
    {
LABEL_5:
      v13[0] = 1;
      lpString1 = v3;
      PinManagerTelemetry::TaskbarPinTrustedProcessChecked<unsigned short *,bool>(&lpString1, v13);
    }
    else
    {
LABEL_26:
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53852258>::GetImpl'::`2'::impl) )
      {
        v18[0] = L"%windir%\\explorer.exe";
        v18[1] = L"%windir%\\system32\\RuntimeBroker.exe";
        v18[2] = L"%windir%\\SystemApps\\Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy\\StartMenuExperienceHost.exe";
        v18[3] = L"%windir%\\SystemApps\\MicrosoftWindows.Client.CBS_cw5n1h2txyewy\\SearchHost.exe";
        v7 = v18;
        while ( 1 )
        {
          lpString1 = 0LL;
          wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
            &lpString1,
            *v7);
          if ( CompareStringOrdinal(lpString1, -1, v3, -1, 1) == 2 )
            break;
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpString1);
          if ( ++v7 == (_QWORD *)&v19 )
          {
            v8 = *(const WCHAR **)wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
                                    &lpString1,
                                    L"%localappdata%\\DevelopmentFiles\\MicrosoftWindows.Search");
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpString1);
            v9 = -1LL;
            do
              ++v9;
            while ( v8[v9] );
            if ( CompareStringOrdinal(v8, v9 - 1, v3, v9 - 1, 1) == 2 )
            {
              v10 = PathFindFileNameW(v3);
              if ( CompareStringOrdinal(L"SearchHost.exe", -1, v10, -1, 1) == 2
                || CompareStringOrdinal(L"Search.TestHost.exe", -1, v10, -1, 1) == 2 )
              {
                goto LABEL_5;
              }
            }
            goto LABEL_15;
          }
        }
      }
      else
      {
        v17[0] = L"%windir%\\explorer.exe";
        v17[1] = L"%windir%\\system32\\RuntimeBroker.exe";
        v17[2] = L"%windir%\\SystemApps\\Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy\\StartMenuExperienceHost.exe";
        v12 = v17;
        while ( 1 )
        {
          lpString1 = 0LL;
          wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
            &lpString1,
            *v12);
          if ( CompareStringOrdinal(lpString1, -1, v3, -1, 1) == 2 )
            break;
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpString1);
          if ( ++v12 == v18 )
            goto LABEL_15;
        }
      }
      v13[0] = 1;
      v16 = v3;
      PinManagerTelemetry::TaskbarPinTrustedProcessChecked<unsigned short *,bool>(&v16, v13);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpString1);
    }
  }
  else
  {
LABEL_15:
    v13[0] = 0;
    v16 = v3;
    PinManagerTelemetry::TaskbarPinTrustedProcessChecked<unsigned short *,bool>(&v16, v13);
    v6 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
  return v6;
}
