/*
 * XREFs of ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18061B230
 * Callers:
 *     ?perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18061D700 (-perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x1803486FC (-IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18035260C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAA_NXZ @ 0x180352A7C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAA_NXZ.c)
 *     ??$PhysicalDeviceAccessed@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z @ 0x180616730 (--$PhysicalDeviceAccessed@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180618400 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTi.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618F68 (--1-$test_data_control@V-$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@deta.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180619000 (--1-$test_watcher@V-$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@t.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x18061AB94 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ?IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ @ 0x18061B828 (-IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ.c)
 *     ?SubscribeToAccessPhysicalDevice@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18061C73C (-SubscribeToAccessPhysicalDevice@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@A.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::HandlePhysicalDeviceAccess(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this)
{
  __int64 v2; // rdx
  CloudPCHelpers *v3; // rcx
  HKEY *phkResult; // rax
  unsigned int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  const char *v8; // r9
  const unsigned __int16 *v9; // r8
  unsigned int Key; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rdi
  HKEY *v14; // rax
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rdi
  void **v17; // rcx
  volatile signed __int32 *v18; // rdi
  HKEY *v19; // rax
  volatile signed __int32 *v20; // rdi
  BYTE Data[8]; // [rsp+50h] [rbp-2A8h] BYREF
  HKEY v22; // [rsp+58h] [rbp-2A0h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-298h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp-290h] BYREF
  volatile signed __int32 *v25; // [rsp+70h] [rbp-288h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp-280h] BYREF
  volatile signed __int32 *v27; // [rsp+80h] [rbp-278h] BYREF
  volatile signed __int32 *v28; // [rsp+88h] [rbp-270h] BYREF
  volatile signed __int32 *v29; // [rsp+90h] [rbp-268h] BYREF
  _BYTE v30[48]; // [rsp+98h] [rbp-260h] BYREF
  volatile signed __int32 *v31; // [rsp+C8h] [rbp-230h]
  WCHAR pvData[264]; // [rsp+D0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+0h]

  try
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_BASBF>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_BASBF>::GetImpl'::`2'::impl)
      && CloudPCHelpers::IsSignOutConfiguredForPhysicalDeviceAccess(v3) )
    {
      hKey = 0LL;
      phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
      v5 = RegOpenKeyExW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
             0,
             2u,
             phkResult);
      if ( v5 != 2 )
      {
        v6 = retaddr;
        if ( v5 )
        {
          v7 = 412LL;
        }
        else
        {
          v5 = RegDeleteValueW(hKey, L"SignOutConfiguredForPhysicalDeviceAccess");
          v6 = retaddr;
          if ( !v5 )
          {
            ExitWindowsEx(4u, 0x80000000);
            wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
            return;
          }
          v7 = 414LL;
        }
        wil::details::in1diag3::_Log_Win32(
          v6,
          v7,
          (__int64)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
          (const char *)v5);
      }
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    }
    if ( CloudPCHelpers::IsPhysicalDeviceAccessConfigured(v3, v2) )
    {
      tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>>((struct wil::details::IFailureCallback *)v30);
      *(_DWORD *)Data = 1;
      v22 = 0LL;
      CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v9);
      CloudPCTelemetryCore::PhysicalDeviceAccessed<unsigned short (&)[260]>(pvData);
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_BASBF>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_BASBF>::GetImpl'::`2'::impl) )
      {
        Key = RegDeleteKeyExW(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
                0,
                0);
        v11 = retaddr;
        if ( Key )
        {
          v12 = 434LL;
LABEL_26:
          wil::details::in1diag3::_Log_Win32(
            v11,
            v12,
            (__int64)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
            (const char *)Key);
LABEL_41:
          tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v31 + 2));
LABEL_42:
          wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v22);
          tip2::test_watcher<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_watcher<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((__int64)v30);
          return;
        }
        v13 = v31;
        v24 = v31;
        if ( v31 )
          _InterlockedIncrement(v31 + 68);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v13 + 2));
        *((_BYTE *)v13 + 264) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((void **)&v24);
        v14 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v22);
        Key = RegCreateKeyExW(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
                0,
                0LL,
                1u,
                0x20006u,
                0LL,
                v14,
                0LL);
        v11 = retaddr;
        if ( Key )
        {
          v12 = 437LL;
          goto LABEL_26;
        }
        v15 = v31;
        v25 = v31;
        if ( v31 )
          _InterlockedIncrement(v31 + 68);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v15 + 2));
        *((_BYTE *)v15 + 265) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((void **)&v25);
        Key = RegSetValueExW(v22, L"PhysicalDeviceAccessConfigured", 0, 4u, Data, 4u);
        v11 = retaddr;
        if ( Key )
        {
          v12 = 440LL;
          goto LABEL_26;
        }
        Key = RegSetValueExW(v22, L"PhysicalDeviceAccessed", 0, 4u, Data, 4u);
        v11 = retaddr;
        if ( Key )
        {
          v12 = 442LL;
          goto LABEL_26;
        }
        v16 = v31;
        v26 = v31;
        if ( v31 )
          _InterlockedIncrement(v31 + 68);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v16 + 2));
        v17 = (void **)&v26;
      }
      else
      {
        if ( RegDeleteKeyExW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
               0,
               0) < 0 )
          goto LABEL_42;
        v18 = v31;
        v27 = v31;
        if ( v31 )
          _InterlockedIncrement(v31 + 68);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v18 + 2));
        *((_BYTE *)v18 + 264) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((void **)&v27);
        v19 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v22);
        if ( RegCreateKeyExW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
               0,
               0LL,
               1u,
               0x20006u,
               0LL,
               v19,
               0LL) < 0 )
          goto LABEL_42;
        v20 = v31;
        v28 = v31;
        if ( v31 )
          _InterlockedIncrement(v31 + 68);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v20 + 2));
        *((_BYTE *)v20 + 265) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((void **)&v28);
        if ( RegSetValueExW(v22, L"PhysicalDeviceAccessConfigured", 0, 4u, Data, 4u) < 0 )
          goto LABEL_42;
        v16 = v31;
        v29 = v31;
        if ( v31 )
          _InterlockedIncrement(v31 + 68);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v16 + 2));
        v17 = (void **)&v29;
      }
      *((_BYTE *)v16 + 266) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>(v17);
      goto LABEL_41;
    }
    if ( *((_DWORD *)this + 30) == 1 )
      winrt::Windows::Internal::Shell::implementation::CloudPCComponent::SubscribeToAccessPhysicalDevice(this);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1E0,
      (int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      v8);
  }
}
