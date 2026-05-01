/*
 * XREFs of ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180640D20
 * Callers:
 *     ?perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180643160 (-perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x18034BE04 (-IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$PhysicalDeviceAccessed@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z @ 0x18063C654 (--$PhysicalDeviceAccessed@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18063E298 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTi.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EDF4 (--1-$test_data_control@V-$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@deta.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EE8C (--1-$test_watcher@V-$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@t.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x1806406BC (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ?IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ @ 0x1806411AC (-IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ.c)
 *     ?SubscribeToAccessPhysicalDevice@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18064210C (-SubscribeToAccessPhysicalDevice@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@A.c)
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
  bool IsPhysicalDeviceAccessConfigured; // al
  const char *v9; // r9
  const unsigned __int16 *v10; // r8
  unsigned int Key; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbx
  HKEY *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  HKEY hKey; // [rsp+50h] [rbp-278h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-270h] BYREF
  HKEY v20; // [rsp+60h] [rbp-268h] BYREF
  _BYTE v21[48]; // [rsp+68h] [rbp-260h] BYREF
  volatile signed __int32 *v22; // [rsp+98h] [rbp-230h]
  WCHAR pvData[264]; // [rsp+A0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  if ( CloudPCHelpers::IsSignOutConfiguredForPhysicalDeviceAccess(this) )
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
        v7 = 387LL;
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
        v7 = 389LL;
      }
      wil::details::in1diag3::_Log_Win32(
        v6,
        v7,
        (__int64)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
        (const char *)v5);
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  }
  IsPhysicalDeviceAccessConfigured = CloudPCHelpers::IsPhysicalDeviceAccessConfigured(v3, v2);
  try
  {
    if ( !IsPhysicalDeviceAccessConfigured )
    {
      if ( *((_DWORD *)this + 30) == 1 )
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent::SubscribeToAccessPhysicalDevice(this);
      return;
    }
    tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>>((struct wil::details::IFailureCallback *)v21);
    LODWORD(hKey) = 1;
    v20 = 0LL;
    CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v10);
    CloudPCTelemetryCore::PhysicalDeviceAccessed<unsigned short (&)[260]>(pvData);
    Key = RegDeleteKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess", 0, 0);
    v12 = retaddr;
    if ( Key )
    {
      v13 = 408LL;
    }
    else
    {
      v14 = v22;
      v19 = v22;
      if ( v22 )
        _InterlockedIncrement(v22 + 70);
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v14 + 2));
      *((_BYTE *)v14 + 272) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((void **)&v19);
      v15 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v20);
      Key = RegCreateKeyExW(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
              0,
              0LL,
              1u,
              0x20006u,
              0LL,
              v15,
              0LL);
      v12 = retaddr;
      if ( Key )
      {
        v13 = 411LL;
      }
      else
      {
        v16 = v22;
        v19 = v22;
        if ( v22 )
          _InterlockedIncrement(v22 + 70);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v16 + 2));
        *((_BYTE *)v16 + 273) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((void **)&v19);
        Key = RegSetValueExW(v20, L"PhysicalDeviceAccessConfigured", 0, 4u, (const BYTE *)&hKey, 4u);
        v12 = retaddr;
        if ( Key )
        {
          v13 = 414LL;
        }
        else
        {
          Key = RegSetValueExW(v20, L"PhysicalDeviceAccessed", 0, 4u, (const BYTE *)&hKey, 4u);
          v12 = retaddr;
          if ( !Key )
          {
            v17 = v22;
            v19 = v22;
            if ( v22 )
              _InterlockedIncrement(v22 + 70);
            tip2::details::shared_data<1,0,0>::begin_update((__int64)(v17 + 2));
            *((_BYTE *)v17 + 274) = 1;
            tip2::test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((void **)&v19);
            goto LABEL_28;
          }
          v13 = 416LL;
        }
      }
    }
    wil::details::in1diag3::_Log_Win32(
      v12,
      v13,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      (const char *)Key);
LABEL_28:
    tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v22 + 2));
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v20);
    tip2::test_watcher<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_watcher<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((__int64)v21);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1B1,
      (int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      v9);
  }
}
