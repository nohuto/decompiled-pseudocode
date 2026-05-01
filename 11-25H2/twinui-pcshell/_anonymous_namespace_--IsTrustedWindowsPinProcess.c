/*
 * XREFs of _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x1802964E4
 * Callers:
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x180296298 (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 *     ?CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18029643C (-CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV-$tip_te.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$TaskbarPinTrustedProcessChecked@PEAG_N@PinManagerTelemetry@@SAX$$QEAPEAG$$QEA_N@Z @ 0x18028FE4C (--$TaskbarPinTrustedProcessChecked@PEAG_N@PinManagerTelemetry@@SAX$$QEAPEAG$$QEA_N@Z.c)
 *     ??$ExpandEnvironmentStringsW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG@Z @ 0x1802B2CC8 (--$ExpandEnvironmentStringsW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x1802BDC1C (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     ?TryGetProcessImagePath@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1802C2210 (-TryGetProcessImagePath@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C92C4 (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start@@@details@wil@@QEAA_NXZ @ 0x1802EDA10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFull_ea_1802EDA10.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ @ 0x1803B24AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellHostPinning@@@details@wil@@QEAA_NXZ @ 0x1805C8ADC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellHostPinning@@@details@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall anonymous_namespace_::IsTrustedWindowsPinProcess(__int64 a1, __int64 a2)
{
  const WCHAR *v3; // rbx
  const WCHAR *FileNameW; // rdi
  __int64 v5; // rax
  char v6; // di
  const WCHAR **p_lpString1; // rcx
  _QWORD *v8; // rsi
  _QWORD *v9; // rsi
  const WCHAR *v10; // rsi
  __int64 v11; // rdx
  const WCHAR *v12; // rsi
  _QWORD *v13; // rsi
  _QWORD *v15; // rsi
  char v16[8]; // [rsp+30h] [rbp-59h] BYREF
  const WCHAR *v17; // [rsp+38h] [rbp-51h] BYREF
  LPCWCH lpString1; // [rsp+40h] [rbp-49h] BYREF
  LPCWSTR pszPath; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v21[3]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v22[3]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v23[4]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+27h] BYREF

  pszPath = 0LL;
  TryGetProcessImagePath(&pszPath, a1);
  v3 = pszPath;
  if ( pszPath )
  {
    FileNameW = PathFindFileNameW(pszPath);
    v5 = tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
           a2,
           &lpString1);
    StrCpyNW((PWSTR)(*(_QWORD *)v5 + 788LL), FileNameW, 260);
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(&lpString1);
    v6 = 1;
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellHostPinning>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ShellHostPinning>::GetImpl'::`2'::impl) )
      goto LABEL_37;
    if ( dword_18089E638 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 16LL) )
    {
      Init_thread_header(&dword_18089E638);
      if ( dword_18089E638 == -1 )
      {
        ::lpString1 = 0LL;
        wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
          &::lpString1,
          L"%windir%\\system32\\ShellHost.exe");
        atexit(_anonymous_namespace_::IsTrustedWindowsPinProcess_::_8_::_dynamic_atexit_destructor_for__expandedShellHostPath__);
        Init_thread_footer(&dword_18089E638);
      }
    }
    if ( CompareStringOrdinal(::lpString1, -1, v3, -1, 1) == 2 )
    {
      lpString1 = v3;
      p_lpString1 = &lpString1;
LABEL_6:
      v16[0] = 1;
      PinManagerTelemetry::TaskbarPinTrustedProcessChecked<unsigned short *,bool>(p_lpString1, v16);
    }
    else
    {
LABEL_37:
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53852258>::GetImpl'::`2'::impl) )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start>::GetImpl'::`2'::impl) )
        {
          v23[0] = L"%windir%\\explorer.exe";
          v23[1] = L"%windir%\\system32\\RuntimeBroker.exe";
          v23[2] = L"%windir%\\SystemApps\\Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy\\StartMenuExperienceHost.exe";
          v23[3] = L"%windir%\\SystemApps\\MicrosoftWindows.Client.CBS_cw5n1h2txyewy\\SearchHost.exe";
          v8 = v23;
          while ( 1 )
          {
            lpString1 = 0LL;
            wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
              &lpString1,
              *v8);
            if ( CompareStringOrdinal(lpString1, -1, v3, -1, 1) == 2 )
              break;
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpString1);
            if ( ++v8 == &v24 )
              goto LABEL_16;
          }
        }
        else
        {
          v21[0] = L"%windir%\\explorer.exe";
          v21[1] = L"%windir%\\system32\\RuntimeBroker.exe";
          v21[2] = L"%windir%\\SystemApps\\MicrosoftWindows.Client.CBS_cw5n1h2txyewy\\SearchHost.exe";
          v9 = v21;
          while ( 1 )
          {
            lpString1 = 0LL;
            wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
              &lpString1,
              *v9);
            if ( CompareStringOrdinal(lpString1, -1, v3, -1, 1) == 2 )
              break;
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpString1);
            if ( ++v9 == v22 )
            {
LABEL_16:
              v10 = *(const WCHAR **)wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
                                       &v17,
                                       L"%localappdata%\\DevelopmentFiles\\MicrosoftWindows.Search");
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v17);
              v11 = -1LL;
              do
                ++v11;
              while ( v10[v11] );
              if ( CompareStringOrdinal(v10, v11 - 1, v3, v11 - 1, 1) == 2 )
              {
                v12 = PathFindFileNameW(v3);
                if ( CompareStringOrdinal(L"SearchHost.exe", -1, v12, -1, 1) == 2
                  || CompareStringOrdinal(L"Search.TestHost.exe", -1, v12, -1, 1) == 2 )
                {
                  v17 = v3;
                  p_lpString1 = &v17;
                  goto LABEL_6;
                }
              }
              goto LABEL_26;
            }
          }
        }
      }
      else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start>::GetImpl'::`2'::impl) )
      {
        v22[0] = L"%windir%\\explorer.exe";
        v22[1] = L"%windir%\\system32\\RuntimeBroker.exe";
        v22[2] = L"%windir%\\SystemApps\\Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy\\StartMenuExperienceHost.exe";
        v13 = v22;
        while ( 1 )
        {
          lpString1 = 0LL;
          wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
            &lpString1,
            *v13);
          if ( CompareStringOrdinal(lpString1, -1, v3, -1, 1) == 2 )
            break;
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpString1);
          if ( ++v13 == v23 )
            goto LABEL_26;
        }
      }
      else
      {
        v20[0] = L"%windir%\\explorer.exe";
        v20[1] = L"%windir%\\system32\\RuntimeBroker.exe";
        v15 = v20;
        while ( 1 )
        {
          lpString1 = 0LL;
          wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
            &lpString1,
            *v15);
          if ( CompareStringOrdinal(lpString1, -1, v3, -1, 1) == 2 )
            break;
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpString1);
          if ( ++v15 == v21 )
            goto LABEL_26;
        }
      }
      v16[0] = 1;
      v17 = v3;
      PinManagerTelemetry::TaskbarPinTrustedProcessChecked<unsigned short *,bool>(&v17, v16);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpString1);
    }
  }
  else
  {
LABEL_26:
    v16[0] = 0;
    v17 = v3;
    PinManagerTelemetry::TaskbarPinTrustedProcessChecked<unsigned short *,bool>(&v17, v16);
    v6 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
  return v6;
}
